//
// Created by den on 6/24/25.
//

#include "Horse_Semen.h"


Horse_Semen::Horse_Semen()
{
	Base_Effect = Effects::Long_Faced;
	Cost = 9;
}

void Horse_Semen::Anti_Gravity(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Anti_Gravity, Effects::Calming);
}

void Horse_Semen::Gingeritis(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Gingeritis, Effects::Refreshing);
}

void Horse_Semen::Seizure_Inducing(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Seizure_Inducing, Effects::Energizing);
}

void Horse_Semen::Thought_Provoking(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Thought_Provoking, Effects::Electrifying);
}

std::string Horse_Semen::get_type()
{
	return std::string("Horse Semen");
}

void Horse_Semen::decrement_pointer_counter()
{
	pointer_counter--;
	if (pointer_counter == 0)
	{
		delete this;
	}
}

Horse_Semen::~Horse_Semen() = default;
