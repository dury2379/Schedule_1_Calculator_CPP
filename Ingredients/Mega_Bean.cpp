//
// Created by den on 6/24/25.
//

#include "Mega_Bean.h"
#include <iostream>


Mega_Bean::Mega_Bean()
{
	Base_Effect = Effects::Foggy;
	Cost = 7;
}

void Mega_Bean::Athletic(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Athletic, Effects::Laxative);
}

void Mega_Bean::Calming(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Calming, Effects::Glowing);
}

void Mega_Bean::Energizing(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Energizing, Effects::Cyclopean);
}

void Mega_Bean::Focused(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Focused, Effects::Disorienting);
}

void Mega_Bean::Jennerising(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Jennerising, Effects::Paranoia);
}

void Mega_Bean::Seizure_Inducing(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Seizure_Inducing, Effects::Focused);
}

void Mega_Bean::Shrinking(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Shrinking, Effects::Electrifying);
}

void Mega_Bean::Slippery(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Slippery, Effects::Toxic);
}

void Mega_Bean::Sneaky(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Sneaky, Effects::Calming);
}

void Mega_Bean::Thought_Provoking(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Thought_Provoking, Effects::Energizing);
}

std::string Mega_Bean::get_type()
{
	return std::string("Mega Bean");
}

void Mega_Bean::decrement_pointer_counter()
{
	pointer_counter--;
	if (pointer_counter == 0)
	{
		delete this;
	}
}

Mega_Bean::~Mega_Bean() = default;
