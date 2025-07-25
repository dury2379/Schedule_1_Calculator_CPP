//
// Created by den on 6/21/25.
//

#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <functional>
#include <map>
#include <set>
#include "../Effects.h"
#include <vector>


class Ingredient {
protected:
	int Cost = 0;
	std::string Base_Effect;
	int pointer_counter = 0;
	Ingredient();
	virtual void Shrinking(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Zombifying(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Cyclopean(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Anti_Gravity(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Long_Faced(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Electrifying(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Glowing(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Tropic_Thunder(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Thought_Provoking(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Jennerising(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Bright_Eyed(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Spicy(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Foggy(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Slippery(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Athletic(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Balding(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Calorie_Dense(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Sedating(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Sneaky(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Energizing(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Gingeritis(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Euphoric(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Focused(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Refreshing(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Munchies(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Calming(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Disorienting(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Explosive(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Laxative(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Paranoia(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Schizophrenia(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Seizure_Inducing(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Smelly(std::vector<std::pair<std::string, std::string>>*){};
	virtual void Toxic(std::vector<std::pair<std::string, std::string>>*){};
	std::map<std::string, void (Ingredient::*)(std::vector<std::pair<std::string, std::string>>*)> transform ;

public:
	std::set<std::string>* process_effects(const std::set<std::string>*);
	virtual int get_cost();
	virtual std::string get_type() = 0;
	void increment_pointer_counter();
	virtual void decrement_pointer_counter() = 0;
	virtual ~Ingredient();
};



#endif //INGREDIENT_H
