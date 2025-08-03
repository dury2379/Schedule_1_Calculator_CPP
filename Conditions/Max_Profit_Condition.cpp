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
		fulfilled = true;
		return true;
	}
	while (prod->get_ingredients_chain_depth() > fulfillment_list.size())
	{
	 	fulfillment_list.emplace_back(Create_Starter_Products::create_OG_Kush());
	}
	if (prod->get_ingredients_chain_depth() == fulfillment_list.size())
	{
		fulfillment_list.emplace_back(new Product(prod));
	}
	else if (prod->get_profit() > fulfillment_list[prod->get_ingredients_chain_depth()]->get_profit())
	{
		delete fulfillment_list[prod->get_ingredients_chain_depth()];
		fulfillment_list[prod->get_ingredients_chain_depth()] = new Product(prod);
	}

	return false;
}
