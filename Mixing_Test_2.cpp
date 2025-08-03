//
// Created by den on 8/3/25.
//
#include <iostream>
#include "Products/Products_Lib.h"
#include "Products/Product.h"
#include "Products/Create_Starter_Products.h"
#include "Ingredients/Ingredients_Lib.h"


void wait_for_key();

int main()
{
	Product* weed = Create_Starter_Products::create_OG_Kush();
	Product* new_product;

	new_product = weed->mix(Ingredients_Lib::ingredient_type::PARACETAMOL);
	delete weed;
	weed = new_product;
	// std::cout << "The product after mixing with Cuke is:\n"
	// 		  << new_product->effects_to_string() << std::endl;
	new_product = weed->mix(Ingredients_Lib::ingredient_type::CUKE);
	delete weed;
	weed = new_product;
	// std::cout << "The product after mixing with Mega Bean is:\n"
	// 		  << new_product->effects_to_string() << std::endl;
	new_product = weed->mix(Ingredients_Lib::ingredient_type::MEGA_BEAN);
	delete weed;
	weed = new_product;
	// weed = new_product;
	// std::cout << "The product after mixing with Cuke is:\n"
	//		  << new_product->effects_to_string() << std::endl;
	// new_product = weed->mix(Ingredients_Lib::ingredient_type::CUKE);
	// delete weed;
	new_product = weed->mix(Ingredients_Lib::ingredient_type::CHILI);
	delete weed;
	weed = new_product;

	std::cout << "Product after CHILI:\n"
			  << new_product->to_string() << std::endl;

	new_product = weed->mix(Ingredients_Lib::ingredient_type::ENERGY_DRINK);
	delete weed;
	// weed = new_product;


	std::cout << "Product after ENERGY_DRINK:\n"
			  << new_product->to_string() << std::endl;

	delete new_product;

	return 0;
}
