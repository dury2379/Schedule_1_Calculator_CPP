//
// Created by den on 7/21/25.
//

#include "Max_Profit_Condition.h"
#include "../Products/Create_Starter_Products.h"
#include <iostream>


bool Max_Profit_Condition::test_condition(Product* prod)
{
	if (prod->get_ingredients_chain_depth() == max_depth)
	{
		if (!fulfilled)
		{
			fill_fulfillment_list();
		}
		fulfilled = true;
		return true;
	}
	if (!max_profits.contains(static_cast<int>(prod->get_ingredients_chain_depth())))
	{
		max_profits.insert({prod->get_ingredients_chain_depth(), Product(prod)});
	}
	else if (prod->get_profit() > max_profits.at(prod->get_ingredients_chain_depth()).get_profit())
	{
		max_profits.at(prod->get_ingredients_chain_depth()) = Product(prod);
	}

	return false;
}

void Max_Profit_Condition::fill_fulfillment_list()
{
	std::map<int, Product>::iterator it;
	for (it = max_profits.begin(); it != max_profits.end(); it++)
	{
		fulfillment_list.emplace_back(new Product(it->second));
	}
}