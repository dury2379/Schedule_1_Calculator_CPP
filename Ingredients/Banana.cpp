//
// Created by den on 6/24/25.
//

#include "Banana.h"
#include <chrono>


Banana::Banana()
{
	Base_Effect = Effects::Gingeritis;
	Cost = 2;
}

void Banana::Calming(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Calming, Effects::Sneaky);
}

void Banana::Cyclopean(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Cyclopean, Effects::Energizing);
}

void Banana::Disorienting(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Disorienting, Effects::Focused);
}

void Banana::Energizing(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Energizing, Effects::Thought_Provoking);
}

void Banana::Focused(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Focused, Effects::Seizure_Inducing);
}

void Banana::Long_Faced(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Long_Faced, Effects::Refreshing);
}

void Banana::Paranoia(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Paranoia, Effects::Jennerising);
}

void Banana::Smelly(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Smelly, Effects::Anti_Gravity);
}

void Banana::Toxic(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Toxic, Effects::Smelly);
}

std::string Banana::get_type()
{
	return std::string("Banana");
}

void Banana::decrement_pointer_counter()
{
	pointer_counter--;
	if (pointer_counter == 0)
	{
		delete this;
	}
}

Banana::~Banana() = default;
