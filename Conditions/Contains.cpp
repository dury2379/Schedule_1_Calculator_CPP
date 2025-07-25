//
// Created by den on 7/17/25.
//

#include "Contains.h"

#include <utility>
#include <iostream>


Contains::Contains(std::set<std::string> target)
{
	this->target = std::move(target);
}

bool Contains::test_condition(Product* prod)
{
	bool does_contain = prod->contains(&this->target);
	if (does_contain)
	{
		fulfillment_list.emplace_back(new Product(prod));
		fulfilled = true;
	}
	return does_contain;
}