//
// Created by den on 7/12/25.
//

#include "Condition.h"
#include <sstream>


Condition::Condition(): fulfilled(false), fulfillment_list({}){}

std::string Condition::to_string()
{
	std::ostringstream oss;
	oss << "Condition status: " << fulfilled << "\n"
		<< "Fulfillment list: " << "\n";

	for (int i = 0; i < fulfillment_list.size(); i++)
	{
		oss << "Product " << (i+1) << ": \n"
			<< fulfillment_list[i]->to_string(std::string("\t"));
	}

	return std::string(oss.str());
}


Condition::~Condition() = default;
