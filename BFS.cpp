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


void clean_tasks(std::vector<std::vector<Product*>>*);

int main()
{
	Condition* test = new Contains({Effects_Lib::effect_enum::THOUGHT_PROVOKING,
						Effects_Lib::effect_enum::SHRINKING,
						Effects_Lib::effect_enum::BALDING,
						Effects_Lib::effect_enum::TROPIC_THUNDER,
						Effects_Lib::effect_enum::SEDATING});

	std::set<uint64_t> visited = {};
	std::vector<std::vector<Product*>> tasks = {};
	int current_layer = 0;

	tasks.emplace_back();

	tasks[0].emplace_back(Create_Starter_Products::create_OG_Kush());
	// tasks[0].emplace_back(new Methamphetamine());

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
				if (!visited.contains(next_product->get_effects()))
				{
					test->test_condition(next_product);
					tasks[current_layer + 1].emplace_back(next_product);
					visited.emplace(next_product->get_effects());
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