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
	Products_Lib::starter_product root_prod;
	uint64_t effects;
	std::vector<Ingredients_Lib::ingredient_type> Ingredients_Chain;
	std::string effects_to_string(std::string&) const;
	std::string ingredients_to_string(std::string&);
public:
	Product(Products_Lib::starter_product, uint64_t, std::vector<Ingredients_Lib::ingredient_type>);
	Product(Product*);
	Product* mix(Ingredients_Lib::ingredient_type);
	int get_ingredients_cost();
	int get_total_price() const;
	std::string to_string();
	std::string to_string(std::string);
	uint64_t get_effects();
	int get_ingredients_chain_depth();
	bool ingredients_chain_equals(const std::vector<Ingredients_Lib::ingredient_type>&) const;
	int get_profit();
	bool contains(const Product*) const;
	bool contains(uint64_t) const;
	bool contains(std::vector<Effects_Lib::effect_enum>&) const;
	bool operator<(const Product&) const;
	bool operator<(uint64_t) const;
	bool operator==(const Product&) const;
	bool operator==(uint64_t) const;
	virtual ~Product();
};



#endif //PRODUCT_H
