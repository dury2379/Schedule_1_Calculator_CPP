//
// Created by den on 6/21/25.
//

#ifndef PRODUCT_H
#define PRODUCT_H

#include <set>
#include <string>
#include <vector>

#include "Products_Lib.h"
#include "../Ingredients/Ingredients_Lib.h"



class Product {
private:
	// Original, "raw", product.
	Products_Lib::starter_product root_prod;
	// List of effects. It is in format of a 64-bit concatenated int.
	uint64_t effects;
	// Chain of ingredients that lead to this product, starting at root_prod.
	std::vector<Ingredients_Lib::ingredient_type> Ingredients_Chain;
	// This function is used to create a tabbed list of effects. Only used by to_string method.
	std::string effects_to_string(std::string&) const;
	// This function is used to create a tabbed indexed list of ingredients. Only used by to_string method.
	std::string ingredients_to_string(std::string&);
public:
	// Classic constructor. Initializes all class members.
	Product(Products_Lib::starter_product, uint64_t, std::vector<Ingredients_Lib::ingredient_type>);
	// A copy constructor.
	Product(Product*);
	// Mixes current product with the ingredient. Generates new Product.
	// IS NOT RESPONSIBLE FOR NEW PRODUCT'S MEMORY MANAGEMENT!!!
	Product* mix(Ingredients_Lib::ingredient_type);
	// Goes through all ingredients and adds up their costs.
	int get_ingredients_cost();
	// Calculates the normal price (street value) of the product.
	int get_total_price() const;
	// Generates a nice looking print out string for the product.
	std::string to_string();
	// Generates a print out string for the product with std::string prefix attached.
	std::string to_string(std::string);
	// Returns effects list in 64-bit concatenated int format.
	uint64_t get_effects();
	// Length of ingredients chain.
	int get_ingredients_chain_depth();
	// Compares these products ingredients chain to another ingredient chain, in vector form.
	bool ingredients_chain_equals(const std::vector<Ingredients_Lib::ingredient_type>&) const;
	// Calculates profit (margin) for this product.
	int get_profit();
	// Compares this product to another product. Returns true if this product contains all effects of the other product.
	bool contains(const Product*) const;
	// Same as contains(const Product*) but it uses concatenated 64-bit int.
	bool contains(uint64_t) const;
	// Same as contains(const Product*), but it uses vector of effects.
	bool contains(std::vector<Effects_Lib::effect_enum>&) const;
	// Less than comparison of concatenated 64-bit ints of each product.
	// This is a less than operation use by hash maps and hash sets.
	bool operator<(const Product&) const;
	// Same as operator<(const Product&), but uses concatenated 64-bit int.
	bool operator<(uint64_t) const;
	// Equals comparison of concatenated 64-bit ints of each product. Used for hash maps and hash sets.
	bool operator==(const Product&) const;
	// Same as operator==(const Product&), but takes in concatenated 64-bit int.
	bool operator==(uint64_t) const;
	// Destructor. Does memory deallocation.
	virtual ~Product();
};



#endif //PRODUCT_H
