//
// Created by den on 6/21/25.
//

#include "Product.h"
#include <cmath>
#include <iostream>
#include <sstream>

Product::Product(int Base_Price, std::set<std::string>* effects, std::vector<Ingredient*>* Ingredients_Chain)
{
	this->Base_Price = Base_Price;
	this->effects = effects;
	this->Ingredients_Chain = Ingredients_Chain;
	this->Ingredients_Cost = calculate_ingredients_cost();
	this->Total_Price = calculate_total_price();
	this->Profit = Total_Price - Ingredients_Cost;
}

Product::Product(Product* other_product, bool delete_effects)
{
	this->Base_Price = other_product->Base_Price;
	this->Ingredients_Cost = other_product->Ingredients_Cost;
	this->Profit = other_product->Profit;
	this->Total_Price = other_product->Total_Price;
	this->delete_effects_set = delete_effects;
	this->effects = new std::set<std::string>(*other_product->effects);
	this->Ingredients_Chain = new std::vector<Ingredient*>(*other_product->Ingredients_Chain);
	increment_ingredient_chain_pointers(Ingredients_Chain);
}

int Product::calculate_total_price() const
{
	double multiplier = 1.00;
	for (const std::string& effect: *this->effects)
	{
		multiplier += Effects::PRICE_MULTIPLIER.at(effect);
	}
	return std::round(Base_Price * multiplier);
}

int Product::calculate_ingredients_cost()
{
	int total = 0;
	for (Ingredient* ingredient: *Ingredients_Chain)
	{
		total += ingredient->get_cost();
	}

	return total;
}

Product* Product::mix(Ingredient* additive)
{
	std::set<std::string>* new_effects = additive->process_effects(this->effects);
	// 'std::vector.emplace_back()' copies the element. So it is not possible to use it with the abstract classes.
	std::vector<Ingredient*>* new_ingredient_chain = new std::vector(*this->Ingredients_Chain);
	new_ingredient_chain->emplace_back(additive);
	increment_ingredient_chain_pointers(new_ingredient_chain);
	return new Product(this->Base_Price, new_effects, new_ingredient_chain);

}

std::set<std::string>* Product::get_effects_pointer()
{
	return this->effects;
}

int Product::get_ingredients_chain_depth()
{
	return Ingredients_Chain->size();
}

int Product::get_profit() const
{
	return Profit;
}

bool Product::contains(const Product* other_product) const
{
	return contains(other_product->effects);
}

bool Product::contains(std::set<std::string>* other_effects) const
{
	return std::includes(this->effects->begin(), this->effects->end(),
							other_effects->begin(), other_effects->end());
}

std::string Product::to_string()
{
	std::string prefix = "";
	return to_string(prefix);
}

std::string Product::to_string(std::string prefix)
{
	std::ostringstream oss;
	oss << prefix << "Base Price: " << Base_Price << "\n"
	    << prefix << "Total Price: " << Total_Price << "\n"
	    << prefix << "Ingredients Cost: " << Ingredients_Cost << "\n"
	    << prefix << "Profit: " << Profit << "\n"
	    << prefix << "Effects:\n"
		<< effects_to_string(prefix) << "\n"
		<< prefix << "Ingredients chain:\n"
		<< ingredients_to_string(prefix) << "\n";

	return std::string(oss.str());
}

std::string Product::effects_to_string(std::string& prefix) const
{
	std::string result = prefix + "\t";

	for (const std::string& effect: *this->effects)
	{
		result.append(effect + "\n" + prefix + "\t");
	}

	if (result.size() < 2)
		return "";

	return result.substr(0, result.size() - 2 - prefix.size());
}

std::string Product::ingredients_to_string(std::string& prefix) const
{
	std::string result;

	for (int i = 0; i < this->Ingredients_Chain->size(); i++)
	{
		result += prefix +  "\t" + std::to_string(i+1) + ". " + this->Ingredients_Chain->at(i)->get_type() + "\n";
	}

	if (result.size() < 2)
		return "";

	return result.substr(0, result.size() - 1);
}

void Product::increment_ingredient_chain_pointers(std::vector<Ingredient*>* ingredients_vec) const
{
	for (Ingredient* ingr: *ingredients_vec)
	{
		ingr->increment_pointer_counter();
	}
}

void Product::decrement_ingredient_chain_pointers() const
{
	for (Ingredient* ingr: *Ingredients_Chain)
	{
		ingr->decrement_pointer_counter();
	}
}

void Product::keep_effects_set()
{
	delete_effects_set = false;
}



bool Product::operator<(const Product& other) const
{
	return *this < other.effects;
}

bool Product::operator<(const std::set<std::string>* effects) const
{
	return *this->effects < *effects;
}

bool Product::operator==(const Product& other_product) const
{
	return *this == other_product.effects;
}

bool Product::operator==(const std::set<std::string>* other_effects) const
{
	return this->effects == other_effects;
}

Product::~Product()
{
	decrement_ingredient_chain_pointers();
	if (delete_effects_set)
	{
		delete effects;
	}
	delete Ingredients_Chain;
}


