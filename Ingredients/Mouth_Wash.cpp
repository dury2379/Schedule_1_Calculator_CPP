//
// Created by den on 6/24/25.
//

#include "Mouth_Wash.h"


Mouth_Wash::Mouth_Wash()
{
	Base_Effect = Effects::Balding;
	Cost = 4;
}

void Mouth_Wash::Calming(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Calming, Effects::Anti_Gravity);
}

void Mouth_Wash::Calorie_Dense(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Calorie_Dense, Effects::Sneaky);
}

void Mouth_Wash::Explosive(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Explosive, Effects::Sedating);
}

void Mouth_Wash::Focused(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Focused, Effects::Jennerising);
}

std::string Mouth_Wash::get_type()
{
	return std::string("Mouth Wash");
}

void Mouth_Wash::decrement_pointer_counter()
{
	pointer_counter--;
	if (pointer_counter == 0)
	{
		delete this;
	}
}

Mouth_Wash::~Mouth_Wash() = default;