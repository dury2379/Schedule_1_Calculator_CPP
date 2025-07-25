//
// Created by den on 6/24/25.
//

#include "Viagra.h"


Viagra::Viagra()
{
	Base_Effect = Effects::Tropic_Thunder;
	Cost = 4;
}

void Viagra::Athletic(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Athletic, Effects::Sneaky);
}

void Viagra::Disorienting(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Disorienting, Effects::Toxic);
}

void Viagra::Euphoric(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Euphoric, Effects::Bright_Eyed);
}

void Viagra::Laxative(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Laxative, Effects::Calming);
}

void Viagra::Shrinking(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Shrinking, Effects::Gingeritis);
}

std::string Viagra::get_type()
{
	return std::string("Viagra");
}

void Viagra::decrement_pointer_counter()
{
	pointer_counter--;
	if (pointer_counter == 0)
	{
		delete this;
	}
}

Viagra::~Viagra() = default;
