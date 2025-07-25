//
// Created by den on 6/24/25.
//

#include "Motor_Oil.h"


Motor_Oil::Motor_Oil()
{
	Base_Effect = Effects::Slippery;
	Cost = 6;
}

void Motor_Oil::Energizing(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Energizing, Effects::Munchies);
}

void Motor_Oil::Euphoric(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Euphoric, Effects::Sedating);
}

void Motor_Oil::Foggy(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Foggy, Effects::Toxic);
}

void Motor_Oil::Munchies(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Munchies, Effects::Schizophrenia);
}

void Motor_Oil::Paranoia(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Paranoia, Effects::Anti_Gravity);
}

std::string Motor_Oil::get_type()
{
	return std::string("Motor Oil");
}

void Motor_Oil::decrement_pointer_counter()
{
	pointer_counter--;
	if (pointer_counter == 0)
	{
		delete this;
	}
}

Motor_Oil::~Motor_Oil() = default;
