//
// Created by den on 6/24/25.
//

#include "Donut.h"


Donut::Donut()
{
	Base_Effect = Effects::Calorie_Dense;
	Cost = 3;
}

void Donut::Anti_Gravity(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Anti_Gravity, Effects::Slippery);
}

void Donut::Balding(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Balding, Effects::Sneaky);
}

void Donut::Calorie_Dense(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Calorie_Dense, Effects::Explosive);
}

void Donut::Focused(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Focused, Effects::Euphoric);
}

void Donut::Jennerising(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Jennerising, Effects::Gingeritis);
}

void Donut::Munchies(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Munchies, Effects::Calming);
}

void Donut::Shrinking(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Shrinking, Effects::Energizing);
}

std::string Donut::get_type()
{
	return std::string("Donut");
}

void Donut::decrement_pointer_counter()
{
	pointer_counter--;
	if (pointer_counter == 0)
	{
		delete this;
	}
}

Donut::~Donut() = default;
