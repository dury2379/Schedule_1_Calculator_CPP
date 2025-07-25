//
// Created by den on 6/21/25.
//

#include <iostream>
#include "Ingredient.h"
#include "../Effects.h"


Ingredient::Ingredient()
{
	transform = {
		{Effects::Shrinking, &Ingredient::Shrinking},
		{Effects::Zombifying, &Ingredient::Zombifying},
		{Effects::Cyclopean, &Ingredient::Cyclopean},
		{Effects::Anti_Gravity, &Ingredient::Anti_Gravity},
		{Effects::Long_Faced, &Ingredient::Long_Faced},
		{Effects::Electrifying, &Ingredient::Electrifying},
		{Effects::Glowing, &Ingredient::Glowing},
		{Effects::Tropic_Thunder, &Ingredient::Tropic_Thunder},
		{Effects::Thought_Provoking, &Ingredient::Thought_Provoking},
		{Effects::Jennerising, &Ingredient::Jennerising},
		{Effects::Bright_Eyed, &Ingredient::Bright_Eyed},
		{Effects::Spicy, &Ingredient::Spicy},
		{Effects::Foggy, &Ingredient::Foggy},
		{Effects::Slippery, &Ingredient::Slippery},
		{Effects::Athletic, &Ingredient::Athletic},
		{Effects::Balding, &Ingredient::Balding},
		{Effects::Calorie_Dense, &Ingredient::Calorie_Dense},
		{Effects::Sedating, &Ingredient::Sedating},
		{Effects::Sneaky, &Ingredient::Sneaky},
		{Effects::Energizing, &Ingredient::Energizing},
		{Effects::Gingeritis, &Ingredient::Gingeritis},
		{Effects::Euphoric, &Ingredient::Euphoric},
		{Effects::Focused, &Ingredient::Focused},
		{Effects::Refreshing, &Ingredient::Refreshing},
		{Effects::Munchies, &Ingredient::Munchies},
		{Effects::Calming, &Ingredient::Calming},
		{Effects::Disorienting, &Ingredient::Disorienting},
		{Effects::Explosive, &Ingredient::Explosive},
		{Effects::Laxative, &Ingredient::Laxative},
		{Effects::Paranoia, &Ingredient::Paranoia},
		{Effects::Schizophrenia, &Ingredient::Schizophrenia},
		{Effects::Seizure_Inducing, &Ingredient::Seizure_Inducing},
		{Effects::Smelly, &Ingredient::Smelly},
		{Effects::Toxic, &Ingredient::Toxic}
	};
}


std::set<std::string>* Ingredient::process_effects(const std::set<std::string>* old_effects)
{
	int old_size = 0;
	std::set<std::string>* new_effects = new std::set(*old_effects);
	std::vector<std::pair<std::string, std::string>> staged_transforms = std::vector<std::pair<std::string, std::string>>();

	for (const std::string& effect : *old_effects)
	{
		old_size = staged_transforms.size();
		(this->*transform[effect])(&staged_transforms);
		if (old_size != staged_transforms.size())
		{
			new_effects->erase(staged_transforms.back().first);
		}
	}

	for (std::pair<std::string, std::string>& staged_transform: staged_transforms)
	{
		if (new_effects->contains(staged_transform.second))
		{
			std::swap(staged_transform.first, staged_transform.second);
		}
		new_effects->insert(staged_transform.second);
	}

	if (new_effects->size() < 8)
	{
		new_effects->insert(Base_Effect);
	}

	return new_effects;
}

void Ingredient::increment_pointer_counter()
{
	pointer_counter++;
}


int Ingredient::get_cost()
{
	return Cost;
}

Ingredient::~Ingredient() = default;
/*
Ingredient::~Ingredient()
{

}
*/