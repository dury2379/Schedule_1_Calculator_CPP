//
// Created by den on 7/17/25.
//

#include "Contains.h"

#include <utility>
#include <iostream>


Contains::Contains(uint64_t target)
{
	this->target = target;
}

Contains::Contains(std::vector<Effects_Lib::effect_enum> target_vector)
{
	this->target = Effects_Lib::to_effects_int64(target_vector);
}

bool Contains::test_condition(Product* prod)
{
	bool does_contain = prod->contains(this->target);
	if (does_contain)
	{
		fulfillment_list.emplace_back(new Product(prod));
		fulfilled = true;
	}
	return does_contain;
}