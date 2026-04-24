//
// Created by den on 7/7/25.
//

#include <iostream>
#include <set>
#include <string>
#include <vector>

#include "Conditions/Contains.h"
#include "Effects_Lib.h"
#include "Ingredients/Ingredients_Lib.h"
#include "Products/Create_Starter_Products.h"

/*
 * This is BFS (Breadth First Search) to find a product that contains the set of desired effects with the least number
 * of ingredients. This search does not optimize for profit, so if there are two solution for the same depth it will
 * choose at random.
 */
void clean_tasks(std::vector<std::vector<Product*>>*);

int main()
{
/*	Condition* test = new Contains({Effects_Lib::effect_enum::REFRESHING,
						Effects_Lib::effect_enum::LONG_FACED,
						Effects_Lib::effect_enum::ANTI_GRAVITY,
						Effects_Lib::effect_enum::SNEAKY,
						Effects_Lib::effect_enum::SLIPPERY}); //*/

	// This is the test that determines if the product was found. The list of effects is the effects that the product
	// must contain to satisfy the condition. Product can contain more effects the listed below.
	Condition* test = new Contains({Effects_Lib::effect_enum::SNEAKY,
						Effects_Lib::effect_enum::SHRINKING,
						Effects_Lib::effect_enum::LONG_FACED
	});//*/

	// This keep track of the effect combinations that were visited before. Having duplicates will increase the memory
	// usage.
	std::set<uint64_t> visited = {};
	// This stores all the products that will have to be visited. All the children that are not duplicates will be
	// placed here on the next layer. Making it a nested vector makes it easy to go layer by layer.
	std::vector<std::vector<Product*>> tasks = {};
	// Keeps track of the current layer.
	int current_layer = 0;

	// Initialize the layer 0, this layer just stores the starter product.
	tasks.emplace_back();

	// Emplace the starter product. Allows for multiple starter products.
	tasks[0].emplace_back(Create_Starter_Products::create_Cocaine());
	// tasks[0].emplace_back(new Methamphetamine());

	// Check if there are any products to process or if the condition is fulfilled. If former is True happens that means
	// that the whole product tree has been traversed and no solution was found. If the latter is True then the product
	// containing necessary effects was found.
	while (!tasks[current_layer].empty() && !test->is_fulfilled())
	{
		// Add nest layer in tasks vector.
		tasks.emplace_back();
		// Index of the current product in the layer that is going to be processed.
		long long i = tasks[current_layer].size() - 1;
		// Go through all the product in the current layer.
		while (i >= 0 && !test->is_fulfilled())
		{
			// For each product mix it with all the ingredients, traverse the ingredients vector.
			for (int j = 0; j < Ingredients_Lib::ingredients_vector.size(); j++)
			{
				// Get the ingredient at the current index.
				Ingredients_Lib::ingredient_type ing = Ingredients_Lib::ingredients_vector[j];
				// Mix the current product with the ingredient.
				Product* next_product = tasks[current_layer][i]->mix(ing);
				// If the new product has not been visited before then:
				if (!visited.contains(next_product->get_effects()))
				{
					// Check if it satisfies the condition.
					test->test_condition(next_product);
					// Add it to the next layer of the tasks vector.
					tasks[current_layer + 1].emplace_back(next_product);
					// Add it to the visited set.
					visited.emplace(next_product->get_effects());
				}
				else
				{
					// If it has been visited before, delete it.
					delete next_product;
				}
			}
			// Delete the product that was just visited to save on memory.
			delete (tasks[current_layer][i]);
			// Delete the product that was just visited from tasks vector.
			tasks[current_layer].erase(tasks[current_layer].begin() + i);
			// Decrement the index.
			i--;
		}
		// After processing a layer (all product of a certain depth) move on to the next layer (depth).
		current_layer++;

	}

	// Remove all product of the next layer after the correct product was found.
	clean_tasks(&tasks);

	// Print out the result.
	std::cout << "BFS results:\n"
			  << test->to_string() << std::endl;

	return 0;
}

/*
 * Delete all the products in the tasks vectors.
 */
void clean_tasks(std::vector<std::vector<Product*>>* tasks)
{
	for (std::vector<Product*>& row: *tasks)
	{
		for (Product* prod: row)
		{
			delete prod;
		}
	}
}