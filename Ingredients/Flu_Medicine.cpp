//
// Created by den on 6/24/25.
//

#include "Flu_Medicine.h"


Flu_Medicine::Flu_Medicine()
{
	Base_Effect = Effects::Sedating;
	Cost = 5;
}

void Flu_Medicine::Athletic(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Athletic, Effects::Munchies);
}

void Flu_Medicine::Calming(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Calming, Effects::Bright_Eyed);
}

void Flu_Medicine::Cyclopean(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Cyclopean, Effects::Foggy);
}

void Flu_Medicine::Electrifying(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Electrifying, Effects::Refreshing);
}

void Flu_Medicine::Euphoric(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Euphoric, Effects::Toxic);
}

void Flu_Medicine::Focused(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Focused, Effects::Calming);
}

void Flu_Medicine::Laxative(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Laxative, Effects::Euphoric);
}

void Flu_Medicine::Munchies(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Munchies, Effects::Slippery);
}

void Flu_Medicine::Shrinking(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Shrinking, Effects::Paranoia);
}

void Flu_Medicine::Thought_Provoking(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Thought_Provoking, Effects::Gingeritis);
}

std::string Flu_Medicine::get_type()
{
	return std::string("Flu Medicine");
}

void Flu_Medicine::decrement_pointer_counter()
{
	pointer_counter--;
	if (pointer_counter == 0)
	{
		delete this;
	}
}

Flu_Medicine::~Flu_Medicine() = default;
