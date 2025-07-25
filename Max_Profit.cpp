//
// Created by den on 7/21/25.
//


#include <iostream>

#include "Conditions/Condition.h"
#include "Conditions/Max_Profit_Condition.h"
#include "Products/Products.h"

int main()
{
	Condition* test = new Max_Profit_Condition(7);

	std::set<std::string> target = {Effects::Electrifying, Effects::Cyclopean, Effects::Long_Faced, Effects::Foggy};

	std::set<std::set<std::string>> visited = {};
	std::vector<std::vector<Product*>> tasks = {};
	int current_layer = 0;

	tasks.emplace_back();

	// tasks[0].emplace_back(new OG_Kush());
	tasks[0].emplace_back(new Methamphetamine());

	while (!tasks[current_layer].empty() /*&& !test->is_fulfilled()*/)
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
				if (*next_product == &target)
				{
					std::cout << "'visited' contain target.\n"
							  << "The Product is:\n"
							  << next_product->to_string() << std::endl;
				}
			}
			delete (tasks[current_layer][i]);
			tasks[current_layer].erase(tasks[current_layer].begin() + i);
			i--;
		}
		current_layer++;
		std::cout << "Layer #" << current_layer << " has been processed!" << std::endl;

	}

	std::cout << "Max Profit results:\n"
			  << test->to_string() << std::endl;

	return 0;

}
