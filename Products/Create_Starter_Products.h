//
// Created by den on 8/1/25.
//

#ifndef CREATE_STARTER_PRODUCTS_H
#define CREATE_STARTER_PRODUCTS_H

#include "Product.h"
#include "Products_Lib.h"


namespace Create_Starter_Products
{
	static Product* create_OG_Kush();
	static Product* create_Sour_Diesel();
	static Product* create_Green_Crack();
	static Product* create_Granddaddy_Purple();
	static Product* create_Methamphetamine();
	static Product* create_Cocaine();

	static const std::map<Products_Lib::starter_product, Product* (*)()> create_product = {
		{Products_Lib::starter_product::OG_KUSH, create_OG_Kush},
		{Products_Lib::starter_product::SOUR_DIESEL, create_Sour_Diesel},
		{Products_Lib::starter_product::GREEN_CRACK, create_Green_Crack},
		{Products_Lib::starter_product::GRANDDADDY_PURPLE, create_Granddaddy_Purple},
		{Products_Lib::starter_product::METHAMPHETAMINE, create_Methamphetamine},
		{Products_Lib::starter_product::COCAINE, create_Cocaine}
	};



	static Product* create_OG_Kush()
	{
		return new Product(Products_Lib::starter_product::OG_KUSH, static_cast<uint64_t>(Effects_Lib::effect_enum::CALMING), {});
	}

	static Product* create_Sour_Diesel()
	{
		return new Product(Products_Lib::starter_product::SOUR_DIESEL, static_cast<uint64_t>(Effects_Lib::effect_enum::REFRESHING), {});
	}

	static Product* create_Green_Crack()
	{
		return new Product(Products_Lib::starter_product::GREEN_CRACK, static_cast<uint64_t>(Effects_Lib::effect_enum::ENERGIZING), {});
	}

	static Product* create_Granddaddy_Purple()
	{
		return new Product(Products_Lib::starter_product::GRANDDADDY_PURPLE, static_cast<uint64_t>(Effects_Lib::effect_enum::SEDATING), {});
	}

	static Product* create_Methamphetamine()
	{
		return new Product(Products_Lib::starter_product::METHAMPHETAMINE, 0, {});
	}

	static Product* create_Cocaine()
	{
		return new Product(Products_Lib::starter_product::COCAINE, 0, {});
	}

}
#endif //CREATE_STARTER_PRODUCTS_H
