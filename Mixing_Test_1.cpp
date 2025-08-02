#include <iostream>
#include "Products/Products_Lib.h"
#include "Products/Product.h"
#include "Ingredients/Ingredients_Lib.h"


void wait_for_key();

int main()
{
	Product* weed = Products_Lib::create_OG_Kush();
	Product* new_product;

	new_product = weed->mix(Ingredients_Lib::ingredient_type::CUKE);
	delete weed;
	weed = new_product;
	// std::cout << "The product after mixing with Cuke is:\n"
	// 		  << new_product->effects_to_string() << std::endl;
	new_product = weed->mix(Ingredients_Lib::ingredient_type::MEGA_BEAN);
	delete weed;
	weed = new_product;
	// std::cout << "The product after mixing with Mega Bean is:\n"
	// 		  << new_product->effects_to_string() << std::endl;
	new_product = weed->mix(Ingredients_Lib::ingredient_type::CUKE);
	delete weed;
	// std::cout << "The product after mixing with Cuke is:\n"
	//		  << new_product->effects_to_string() << std::endl;

	std::cout << "Mixing Result:\n"
			  << new_product->to_string() << std::endl;

	wait_for_key();

	delete new_product;

	return 0;
}

void wait_for_key()
{
	std::string stub_str = "";
	std::getline(std::cin, stub_str);
}