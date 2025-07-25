//
// Created by den on 6/24/25.
//

#include "Chili.h"


Chili::Chili()
{
	Base_Effect = Effects::Spicy;
	Cost = 7;
}

void Chili::Anti_Gravity(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Anti_Gravity, Effects::Tropic_Thunder);
}

void Chili::Athletic(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Athletic, Effects::Euphoric);
}

void Chili::Laxative(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Laxative, Effects::Long_Faced);
}

void Chili::Munchies(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Munchies, Effects::Toxic);
}

void Chili::Shrinking(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Shrinking, Effects::Refreshing);
}

void Chili::Sneaky(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Sneaky, Effects::Bright_Eyed);
}

std::string Chili::get_type()
{
	return std::string("Chili");
}

void Chili::decrement_pointer_counter()
{
	pointer_counter--;
	if (pointer_counter == 0)
	{
		delete this;
	}
}

Chili::~Chili() = default;
