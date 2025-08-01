//
// Created by den on 7/31/25.
//
#include "Products_Lib.h"
#include "Product.h"

namespace Products_Lib
{
	static Product* create_OG_Kush()
	{
		return new Product(starter_product::OG_KUSH, static_cast<uint64_t>(Effects_Lib::effect_enum::CALMING), {});
	}

	static Product* create_Sour_Diesel()
	{
		return new Product(starter_product::SOUR_DIESEL, static_cast<uint64_t>(Effects_Lib::effect_enum::REFRESHING), {});
	}

	static Product* create_Green_Crack()
	{
		return new Product(starter_product::GREEN_CRACK, static_cast<uint64_t>(Effects_Lib::effect_enum::ENERGIZING), {});
	}

	static Product* create_Granddaddy_Purple()
	{
		return new Product(starter_product::GRANDDADDY_PURPLE, static_cast<uint64_t>(Effects_Lib::effect_enum::SEDATING), {});
	}

	static Product* create_Methamphetamine()
	{
		return new Product(starter_product::METHAMPHETAMINE, 0, {});
	}

	static Product* create_Cocaine()
	{
		return new Product(starter_product::COCAINE, 0, {});
	}
}