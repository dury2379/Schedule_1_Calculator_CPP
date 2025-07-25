//
// Created by den on 6/24/25.
//

#include "Iodine.h"


Iodine::Iodine()
{
	Base_Effect = Effects::Jennerising;
	Cost = 8;
}

void Iodine::Calming(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Calming, Effects::Balding);
}

void Iodine::Calorie_Dense(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Calorie_Dense, Effects::Gingeritis);
}

void Iodine::Euphoric(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Euphoric, Effects::Seizure_Inducing);
}

void Iodine::Foggy(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Foggy, Effects::Paranoia);
}

void Iodine::Refreshing(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Refreshing, Effects::Thought_Provoking);
}

void Iodine::Toxic(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Toxic, Effects::Sneaky);
}

std::string Iodine::get_type()
{
	return std::string("Iodine");
}

void Iodine::decrement_pointer_counter()
{
	pointer_counter--;
	if (pointer_counter == 0)
	{
		delete this;
	}
}

Iodine::~Iodine() = default;
