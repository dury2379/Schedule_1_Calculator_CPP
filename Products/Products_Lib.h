//
// Created by den on 7/28/25.
//

#ifndef PRODUCTSLIB_H
#define PRODUCTSLIB_H
#include <map>


namespace Products_Lib
{
	enum class starter_product
	{
		OG_KUSH,
		SOUR_DIESEL,
		GREEN_CRACK,
		GRANDDADDY_PURPLE,
		METHAMPHETAMINE,
		COCAINE
	};

	static const std::map<starter_product, std::string> starter_product_to_str = {
		{starter_product::OG_KUSH, "OG Kush"},
		{starter_product::SOUR_DIESEL, "Sour Diesel"},
		{starter_product::GREEN_CRACK, "Green Crack"},
		{starter_product::GRANDDADDY_PURPLE, "Granddaddy Purple"},
		{starter_product::METHAMPHETAMINE, "Methamphetamine"},
		{starter_product::COCAINE, "Cocaine"}
	};

	static const std::map<starter_product, int> starter_product_costs = {
		{starter_product::OG_KUSH, 35},
		{starter_product::SOUR_DIESEL, 35},
		{starter_product::GREEN_CRACK, 35},
		{starter_product::GRANDDADDY_PURPLE, 35},
		{starter_product::METHAMPHETAMINE, 70},
		{starter_product::COCAINE, 150}
	};
}

#endif //PRODUCTSLIB_H
