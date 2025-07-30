//
// Created by den on 7/7/25.
//

#include <iostream>
#include <set>
#include <string>
#include <vector>

#include "Conditions/Contains.h"
#include "Products/Products.h"
#include "Ingredients/Ingredients_Lib.h"


void clean_tasks(std::vector<std::vector<Product*>>*);

int main()
{
	Condition* test = new Contains({Effects::Thought_Provoking, Effects::Shrinking, Effects::Balding, Effects::Tropic_Thunder, Effects::Sedating});

	std::set<std::set<std::string>> visited = {};
	std::vector<std::vector<Product*>> tasks = {};
	int current_layer = 0;

	tasks.emplace_back();

	tasks[0].emplace_back(new OG_Kush());
	// tasks[0].emplace_back(new Methamphetamine());

	while (!tasks[current_layer].empty() && !test->is_fulfilled())
	{
		tasks.emplace_back();
		long long i = tasks[current_layer].size() - 1;
		while (i >= 0 && !test->is_fulfilled())
		{
			for (int j = 0; j < Ingredients_Vector::INDEXED_INGREDIENTS.size(); j++)
			{
				Ingredient* ing = Ingredients_Vector::INDEXED_INGREDIENTS[j]();
				Product* next_product = tasks[current_layer][i]->mix(ing);
				if (!visited.contains(*next_product->get_effects_pointer()))
				{
					test->test_condition(next_product);
					tasks[current_layer + 1].emplace_back(next_product);
					visited.emplace(*next_product->get_effects_pointer());
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
		current_layer++;

	}

	clean_tasks(&tasks);

	std::cout << "BFS results:\n"
			  << test->to_string() << std::endl;

	return 0;
}

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