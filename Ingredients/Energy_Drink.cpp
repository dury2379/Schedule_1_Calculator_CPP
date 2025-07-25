//
// Created by den on 6/24/25.
//

#include "Energy_Drink.h"


Energy_Drink::Energy_Drink()
{
	Base_Effect = Effects::Athletic;
	Cost = 6;
}

void Energy_Drink::Disorienting(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Disorienting, Effects::Electrifying);
}

void Energy_Drink::Euphoric(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Euphoric, Effects::Energizing);
}

void Energy_Drink::Focused(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Focused, Effects::Shrinking);
}

void Energy_Drink::Foggy(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Foggy, Effects::Laxative);
}

void Energy_Drink::Glowing(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Glowing, Effects::Disorienting);
}

void Energy_Drink::Schizophrenia(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Schizophrenia, Effects::Balding);
}

void Energy_Drink::Sedating(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Sedating, Effects::Munchies);
}

void Energy_Drink::Spicy(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Spicy, Effects::Euphoric);
}

void Energy_Drink::Tropic_Thunder(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Tropic_Thunder, Effects::Sneaky);
}

std::string Energy_Drink::get_type()
{
	return std::string("Energy Drink");
}

void Energy_Drink::decrement_pointer_counter()
{
	pointer_counter--;
	if (pointer_counter == 0)
	{
		delete this;
	}
}

Energy_Drink::~Energy_Drink() = default;
