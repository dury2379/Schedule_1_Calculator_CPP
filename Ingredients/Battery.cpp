//
// Created by den on 6/24/25.
//

#include "Battery.h"


Battery::Battery()
{
	Base_Effect = Effects::Bright_Eyed;
	Cost = 8;
}

void Battery::Cyclopean(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Cyclopean, Effects::Glowing);
}

void Battery::Electrifying(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Electrifying, Effects::Euphoric);
}

void Battery::Euphoric(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Euphoric, Effects::Zombifying);
}

void Battery::Laxative(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Laxative, Effects::Calorie_Dense);
}

void Battery::Munchies(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Munchies, Effects::Tropic_Thunder);
}

void Battery::Shrinking(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Shrinking, Effects::Munchies);
}

std::string Battery::get_type()
{
	return std::string("Battery");
}

void Battery::decrement_pointer_counter()
{
	pointer_counter--;
	if (pointer_counter == 0)
	{
		delete this;
	}
}

Battery::~Battery() = default;
