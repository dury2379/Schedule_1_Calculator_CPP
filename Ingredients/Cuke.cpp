//
// Created by den on 6/24/25.
//

#include "Cuke.h"

#include <iostream>
#include <string>


Cuke::Cuke()
{
	Base_Effect = Effects::Energizing;
	Cost = 2;
}

void Cuke::Euphoric(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Euphoric, Effects::Laxative);
}

void Cuke::Foggy(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Foggy, Effects::Cyclopean);
}

void Cuke::Gingeritis(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Gingeritis, Effects::Thought_Provoking);
}

void Cuke::Munchies(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Munchies, Effects::Athletic);
}

void Cuke::Slippery(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Slippery, Effects::Munchies);
}

void Cuke::Sneaky(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Sneaky, Effects::Paranoia);
}

void Cuke::Toxic(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Toxic, Effects::Euphoric);
}

std::string Cuke::get_type()
{
	return std::string("Cuke");
}

void Cuke::decrement_pointer_counter()
{
	pointer_counter--;
	if (pointer_counter <= 0)
	{
		delete this;
	}
}

Cuke::~Cuke() = default;
