//
// Created by den on 6/21/25.
//

#include "Product.h"
#include <cmath>
#include <iostream>
#include <sstream>
#include <utility>

Product::Product(Products_Lib::starter_product starter_prod, uint64_t effects_int, std::vector<Ingredients_Lib::ingredient_type> ingr_chain)
{
	root_prod = starter_prod;
	effects = effects_int;
	Ingredients_Chain = std::move(ingr_chain);
}

Product::Product(Product* other_product)
{
	root_prod = other_product->root_prod;
	effects = other_product->effects;
	Ingredients_Chain = other_product->Ingredients_Chain;
}

int Product::get_total_price() const
{
	double multiplier = 1.00;
	std::vector<Effects_Lib::effect_enum> effects_vector = Effects_Lib::to_effects_vector(effects);
	for (const Effects_Lib::effect_enum& effect: effects_vector)
	{
		multiplier += Effects_Lib::PRICE_MULTIPLIER.at(effect);
	}
	return std::round(Products_Lib::starter_product_costs.at(root_prod) * multiplier);
}

int Product::get_ingredients_cost()
{
	int total = 0;
	for (Ingredients_Lib::ingredient_type& ingredient: Ingredients_Chain)
	{
		total += Ingredients_Lib::ingredients_costs.at(ingredient);
	}

	return total;
}

Product* Product::mix(Ingredients_Lib::ingredient_type additive)
{
	uint64_t new_effects = Ingredients_Lib::process_effects(additive, this->effects);
	// 'std::vector.emplace_back()' copies the element. So it is not possible to use it with the abstract classes.
	std::vector<Ingredients_Lib::ingredient_type> new_ingredient_chain = this->Ingredients_Chain;
	new_ingredient_chain.emplace_back(additive);
	return new Product(root_prod, new_effects, new_ingredient_chain);
}

uint64_t Product::get_effects()
{
	return this->effects;
}

int Product::get_ingredients_chain_depth()
{
	return Ingredients_Chain.size();
}

int Product::get_profit()
{
	return get_total_price() - get_ingredients_cost();
}

bool Product::contains(const Product* other_product) const
{
	return contains(other_product->effects);
}

bool Product::contains(uint64_t other_effects) const
{
	std::vector<Effects_Lib::effect_enum> other_effects_vector = Effects_Lib::to_effects_vector(other_effects);
	return contains(other_effects_vector);
}

bool Product::contains(std::vector<Effects_Lib::effect_enum>& other_effects) const
{
	std::vector<Effects_Lib::effect_enum> this_effects = Effects_Lib::to_effects_vector(effects);

	for (Effects_Lib::effect_enum& effect: other_effects)
	{
		if (std::find(this_effects.begin(), this_effects.end(), effect) == this_effects.end())
		{
			return false;
		}
	}

	return true;
}

std::string Product::to_string()
{
	std::string prefix = "";
	return to_string(prefix);
}

std::string Product::to_string(std::string prefix)
{
	std::ostringstream oss;
	oss << prefix << "Starting Product: " << Products_Lib::starter_product_to_str.at(root_prod) << "\n"
		<< prefix << "Base Price: " << Products_Lib::starter_product_costs.at(root_prod) << "\n"
	    << prefix << "Total Price: " << get_total_price() << "\n"
	    << prefix << "Ingredients Cost: " << get_ingredients_cost() << "\n"
	    << prefix << "Profit: " << get_profit() << "\n"
	    << prefix << "Effects:\n"
		<< effects_to_string(prefix) << "\n"
		<< prefix << "Ingredients chain:\n"
		<< ingredients_to_string(prefix) << "\n";

	return std::string(oss.str());
}

std::string Product::effects_to_string(std::string& prefix) const
{
	std::string result = prefix + "\t";
	std::vector<Effects_Lib::effect_enum> effects_vector = Effects_Lib::to_effects_vector(effects);

	for (Effects_Lib::effect_enum& effect: effects_vector)
	{
		result.append(Effects_Lib::effects_to_string.at(effect) + "\n" + prefix + "\t");
	}

	if (result.size() < prefix.size() + 2)
		return "";

	return result.substr(0, result.size() - 2 - prefix.size());
}

std::string Product::ingredients_to_string(std::string& prefix)
{
	std::string result;

	for (int i = 0; i < this->Ingredients_Chain.size(); i++)
	{
		result += prefix +  "\t" + std::to_string(i+1) + ". " + Ingredients_Lib::ingredient_to_string.at(Ingredients_Chain[i]) + "\n";
	}

	if (result.size() < 2)
		return "";

	return result.substr(0, result.size() - 1);
}

bool Product::operator<(const Product& other) const
{
	return *this < other.effects;
}

bool Product::operator<(uint64_t effects) const
{
	return this->effects < effects;
}

bool Product::operator==(const Product& other_product) const
{
	return *this == other_product.effects;
}

bool Product::operator==(uint64_t other_effects) const
{
	return this->effects == other_effects;
}

Product::~Product() = default;
