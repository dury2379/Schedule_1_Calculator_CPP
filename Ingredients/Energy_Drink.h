//
// Created by den on 6/24/25.
//

#ifndef ENERGY_DRINK_H
#define ENERGY_DRINK_H
#include "Ingredient.h"


class Energy_Drink: public Ingredient {
private:
	~Energy_Drink() override;
protected:
	void Disorienting(std::vector<std::pair<std::string, std::string>>*) override;
	void Euphoric(std::vector<std::pair<std::string, std::string>>*) override;
	void Focused(std::vector<std::pair<std::string, std::string>>*) override;
	void Foggy(std::vector<std::pair<std::string, std::string>>*) override;
	void Glowing(std::vector<std::pair<std::string, std::string>>*) override;
	void Schizophrenia(std::vector<std::pair<std::string, std::string>>*) override;
	void Sedating(std::vector<std::pair<std::string, std::string>>*) override;
	void Spicy(std::vector<std::pair<std::string, std::string>>*) override;
	void Tropic_Thunder(std::vector<std::pair<std::string, std::string>>*) override;
public:
	Energy_Drink();
	void decrement_pointer_counter() override;
	std::string get_type() override;
};



#endif //ENERGY_DRINK_H
