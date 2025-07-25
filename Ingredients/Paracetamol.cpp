//
// Created by den on 6/24/25.
//

#include "Paracetamol.h"


Paracetamol::Paracetamol()
{
	Base_Effect = Effects::Sneaky;
	Cost = 3;
}

void Paracetamol::Calming(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Calming, Effects::Slippery);
}

void Paracetamol::Electrifying(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Electrifying, Effects::Athletic);
}

void Paracetamol::Energizing(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Energizing, Effects::Paranoia);
}

void Paracetamol::Focused(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Focused, Effects::Gingeritis);
}

void Paracetamol::Foggy(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Foggy, Effects::Calming);
}

void Paracetamol::Glowing(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Glowing, Effects::Toxic);
}

void Paracetamol::Munchies(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Munchies, Effects::Anti_Gravity);
}

void Paracetamol::Paranoia(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Paranoia, Effects::Balding);
}

void Paracetamol::Spicy(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Spicy, Effects::Bright_Eyed);
}

void Paracetamol::Toxic(std::vector<std::pair<std::string, std::string>>* staged_transforms)
{
	staged_transforms->emplace_back(Effects::Toxic, Effects::Tropic_Thunder);
}

std::string Paracetamol::get_type()
{
	return std::string("Paracetamol");
}

void Paracetamol::decrement_pointer_counter()
{
	pointer_counter--;
	if (pointer_counter == 0)
	{
		delete this;
	}
}

Paracetamol::~Paracetamol() = default;
