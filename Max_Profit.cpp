//
// Created by den on 7/21/25.
//


#include <iostream>

#include "Conditions/Condition.h"
#include "Conditions/Max_Profit_Condition.h"
#include "Products/Products_Lib.h"
#include "Products/Create_Starter_Products.h"


int main()
{
	Condition* test = new Max_Profit_Condition(7);

	// std::set<std::string> target = {Effects::Electrifying, Effects::Cyclopean, Effects::Long_Faced, Effects::Foggy};

	std::map<uint64_t, int> visited = {};
	std::vector<std::vector<Product*>> tasks = {};
	int current_layer = 0;

	tasks.emplace_back();

	tasks[0].emplace_back(Create_Starter_Products::create_Methamphetamine());

	while (!tasks[current_layer].empty() && !test->is_fulfilled())
	{
		tasks.emplace_back();
		long long i = tasks[current_layer].size() - 1;
		while (i >= 0 && !test->is_fulfilled())
		{
			for (int j = 0; j < Ingredients_Lib::ingredients_vector.size(); j++)
			{
				Ingredients_Lib::ingredient_type ing = Ingredients_Lib::ingredients_vector[j];
				Product* next_product = tasks[current_layer][i]->mix(ing);
				// test->test_condition(next_product);
				if (!visited.contains(next_product->get_effects()) || visited.at(next_product->get_effects()) < next_product->get_profit())
				{
					test->test_condition(next_product);
					tasks[current_layer + 1].emplace_back(next_product);
					visited.insert_or_assign(next_product->get_effects(), next_product->get_profit());
				}
				else
				{
					delete next_product;
				}
			}
			delete (tasks[current_layer][i]);
			tasks[current_layer].erase(tasks[current_layer].begin() + i);
			i--;
		}
		for (long long i = tasks[current_layer + 1].size() - 1; i >= 0; i--)
		{
			if (tasks[current_layer + 1][i]->get_profit() < visited.at(tasks[current_layer + 1][i]->get_effects()))
			{
				delete tasks[current_layer + 1][i];
				tasks[current_layer + 1].erase(tasks[current_layer + 1].begin() + i);
			}
		}

		current_layer++;
		std::cout << "Layer #" << current_layer << " has been processed! (1-based indexing)" << std::endl;

	}

	std::cout << "Max Profit results:\n"
			  << test->to_string() << std::endl;

	return 0;

}
