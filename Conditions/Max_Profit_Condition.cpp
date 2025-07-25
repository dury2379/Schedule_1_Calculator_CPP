//
// Created by den on 7/21/25.
//

#include "Max_Profit_Condition.h"

#include <iostream>


bool Max_Profit_Condition::test_condition(Product* prod)
{
	if (prod->get_ingredients_chain_depth() == max_depth)
	{
		fulfilled = true;
		return true;
	}
	while (prod->get_ingredients_chain_depth() > fulfillment_list.size())
	{
	 	fulfillment_list.emplace_back(new Product(-1, new std::set<std::string>(), new std::vector<Ingredient*>()));
	}
	if (prod->get_ingredients_chain_depth() == fulfillment_list.size())
	{
		fulfillment_list.emplace_back(new Product(prod, true));
	}
	else if (prod->get_profit() > fulfillment_list[prod->get_ingredients_chain_depth()]->get_profit())
	{
		delete fulfillment_list[prod->get_ingredients_chain_depth()];
		fulfillment_list[prod->get_ingredients_chain_depth()] = new Product(prod, true);
	}

	return false;
}
