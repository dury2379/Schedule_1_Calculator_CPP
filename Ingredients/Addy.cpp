//
// Created by den on 6/24/25.
//

#include "Addy.h"


Addy::Addy()
{
	Base_Effect = Effects::Thought_Provoking;
	Cost = 9;
}

void Addy::Explosive(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Explosive, Effects::Euphoric);
}

void Addy::Foggy(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Foggy, Effects::Energizing);
}

void Addy::Glowing(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Glowing, Effects::Refreshing);
}

void Addy::Long_Faced(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Long_Faced, Effects::Electrifying);
}

void Addy::Sedating(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Sedating, Effects::Gingeritis);
}

std::string Addy::get_type()
{
	return std::string("Addy");
}

void Addy::decrement_pointer_counter()
{
	pointer_counter--;
	if (pointer_counter == 0)
	{
		delete this;
	}
}

Addy::~Addy() = default;
