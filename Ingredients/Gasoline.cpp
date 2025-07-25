//
// Created by den on 6/24/25.
//

#include "Gasoline.h"


Gasoline::Gasoline()
{
	Base_Effect = Effects::Toxic;
	Cost = 5;
}

void Gasoline::Disorienting(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Disorienting, Effects::Glowing);
}

void Gasoline::Electrifying(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Electrifying, Effects::Disorienting);
}

void Gasoline::Energizing(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Energizing, Effects::Euphoric);
}

void Gasoline::Euphoric(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Euphoric, Effects::Spicy);
}

void Gasoline::Gingeritis(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Gingeritis, Effects::Smelly);
}

void Gasoline::Jennerising(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Jennerising, Effects::Sneaky);
}

void Gasoline::Laxative(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Laxative, Effects::Foggy);
}

void Gasoline::Munchies(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Munchies, Effects::Sedating);
}

void Gasoline::Paranoia(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Paranoia, Effects::Calming);
}

void Gasoline::Shrinking(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Shrinking, Effects::Focused);
}

void Gasoline::Sneaky(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Sneaky, Effects::Tropic_Thunder);
}

std::string Gasoline::get_type()
{
	return std::string("Gasoline");
}

void Gasoline::decrement_pointer_counter()
{
	pointer_counter--;
	if (pointer_counter == 0)
	{
		delete this;
	}
}

Gasoline::~Gasoline() = default;
