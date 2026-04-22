//
// Created by den on 6/21/25.
//

#include "Product.h"
#include <cmath>
#include <iostream>
#include <sstream>
#include <utility>

// Standard constructor that initializes starter product (enum), effects concatenated 64-bit int, and ingredients chain.
Product::Product(Products_Lib::starter_product starter_prod, uint64_t effects_int, std::vector<Ingredients_Lib::ingredient_type> ingr_chain)
{
	root_prod = starter_prod;
	effects = effects_int;
	Ingredients_Chain = std::move(ingr_chain);
}

// A copy constructor.
Product::Product(Product* other_product)
{
	root_prod = other_product->root_prod;
	effects = other_product->effects;
	Ingredients_Chain = other_product->Ingredients_Chain;
}

/*
 * Calculates total price (revenue) of a product. It works by adding up all price multipliers from all effects and then
 * multiplies the price of the root_prod to get the street price.
 */
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

// Gets total cost of buying all ingredients. Just loops through all ingredients in ingredients_chain and sums their costs.
int Product::get_ingredients_cost()
{
	int total = 0;
	for (Ingredients_Lib::ingredient_type& ingredient: Ingredients_Chain)
	{
		total += Ingredients_Lib::ingredients_costs.at(ingredient);
	}

	return total;
}

/*
 * Mixes and creates a new Product instance. It takes an additive enum. Allocates memory on the stack to avoid
 * unnecessary object copying.
 */
Product* Product::mix(Ingredients_Lib::ingredient_type additive)
{
	uint64_t new_effects = Ingredients_Lib::process_effects(additive, this->effects);
	// 'std::vector.emplace_back()' copies the element. So it is not possible to use it with the abstract classes.
	std::vector<Ingredients_Lib::ingredient_type> new_ingredient_chain = this->Ingredients_Chain;
	new_ingredient_chain.emplace_back(additive);
	return new Product(root_prod, new_effects, new_ingredient_chain);
}

/*
 * Returns concatenated 64-bit int that represents list of all effect enums in int form.
 */
uint64_t Product::get_effects()
{
	return this->effects;
}

/*
 * Checks if ingredient_chain is equals to ingredients_chain that is given as a parameter.
 */
bool Product::ingredients_chain_equals(const std::vector<Ingredients_Lib::ingredient_type>& ingr_vector) const
{
	return Ingredients_Chain == ingr_vector;
}

/*
 * Returns ingredients_chain depth.
 */
int Product::get_ingredients_chain_depth()
{
	return Ingredients_Chain.size();
}

/*
 * Returns profit. Takes price and subtracts ingredients cost.
 */
int Product::get_profit()
{
	return get_total_price() - get_ingredients_cost();
}

/*
 * Returns true if this product contains all of the effects of the other_product.
 */
bool Product::contains(const Product* other_product) const
{
	return contains(other_product->effects);
}

/*
 * This implementation of contains takes in a concatenated 64-bit int and decomposes it into an effects vector before
 * calling contains that uses the effects vector as a parameter.
 */
bool Product::contains(uint64_t other_effects) const
{
	std::vector<Effects_Lib::effect_enum> other_effects_vector = Effects_Lib::to_effects_vector(other_effects);
	return contains(other_effects_vector);
}

/*
 * This implementation of contains takes in an effects vector and goes through it to see if each effect that in it is
 * present in this products effect vector.
 */
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

/*
 * This is a classical to string without prefix. It creates a string with all necessary attributes for this product.
 * Used for print outs.
 */
std::string Product::to_string()
{
	std::string prefix = "";
	return to_string(prefix);
}

/*
 * to_string with prefix. Generates a string with all necessary attributes for a print out. It adds a prefix str to the
 * beginning of every new line. Used when to_string is a part of bigger print out structure.
 */
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

/*
 * A helper function for to_string method. Returns effects in a string, eache effect is on theirown line with prefix
 * string in the beggining of each line.
 */
std::string Product::effects_to_string(std::string& prefix) const
{
	std::string result = prefix + "\t";
	std::vector<Effects_Lib::effect_enum> effects_vector = Effects_Lib::to_effects_vector(effects);

	for (Effects_Lib::effect_enum& effect: effects_vector)
	{
		// std::cout << "Effect index: " << static_cast<int>(effect) << std::endl;
		// std::cout << "'effects_to_string': "  << Effects_Lib::effects_to_string.at(static_cast<Effects_Lib::effect_enum>(24)) << std::endl;
		result.append(Effects_Lib::effects_to_string.at(effect) + "\n" + prefix + "\t");
		// result.append(std::to_string(static_cast<int>(effect)) + "\n" + prefix + "\t");

	}

	if (result.size() < prefix.size() + 2)
		return "";

	return result.substr(0, result.size() - 2 - prefix.size());
}

/*
 * A helper function for to_string method. Generates a string where each ingredient is indexed and on their own line.
 * A prefix string is added in the beginning of each new line.
 */
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

/*
 * A less than operator. It compares products based on their concatenated 64-bit int effect lists.
 */
bool Product::operator<(const Product& other) const
{
	return *this < other.effects;
}

/*
 * A less than operator. It compares concatenated 64-bit ints.
 */
bool Product::operator<(uint64_t effects) const
{
	return this->effects < effects;
}

/*
 * Equals operator. It compares product based on their concatenated 64-bit int effect lists.
 */
bool Product::operator==(const Product& other_product) const
{
	return *this == other_product.effects;
}

/*
 * Equals operator. It compares parameter concatenated 64-bit int with these products concatenated 64 bit int.
 */
bool Product::operator==(uint64_t other_effects) const
{
	return this->effects == other_effects;
}

/*
 * Default destructor.
 */
Product::~Product() = default;
