//
// Created by den on 6/21/25.
//

#ifndef PRODUCT_H
#define PRODUCT_H

#include <set>
#include <string>
#include <vector>

#include "../Ingredients/Ingredients.h"



class Product {
private:
	int Base_Price;
	int Total_Price;
	int Ingredients_Cost;
	int Profit;
	bool delete_effects_set = true;
	std::set<std::string>* effects;
	std::vector<Ingredient*>* Ingredients_Chain;
	int calculate_ingredients_cost();
	int calculate_total_price() const;
	void increment_ingredient_chain_pointers(std::vector<Ingredient*>*) const;
	void decrement_ingredient_chain_pointers() const;
	std::string effects_to_string(std::string&) const;
	std::string ingredients_to_string(std::string&) const;
public:
	Product(int, std::set<std::string>*, std::vector<Ingredient*>*);
	Product(Product*, bool=true);
	Product* mix(Ingredient*);
	std::string to_string();
	std::string to_string(std::string);
	std::set<std::string>* get_effects_pointer();
	int get_ingredients_chain_depth();
	int get_profit() const;
	bool contains(const Product*) const;
	bool contains(std::set<std::string>*) const;
	void keep_effects_set();
	bool operator<(const Product&) const;
	bool operator<(const std::set<std::string>*) const;
	bool operator==(const Product&) const;
	bool operator==(const std::set<std::string>*) const;
	virtual ~Product();
};



#endif //PRODUCT_H
