//
// Created by den on 6/24/25.
//

#ifndef BATTERY_H
#define BATTERY_H
#include "Ingredient.h"


class Battery: public Ingredient {
private:
	~Battery() override;
protected:
	void Cyclopean(std::vector<std::pair<std::string, std::string>>*) override;
	void Electrifying(std::vector<std::pair<std::string, std::string>>*) override;
	void Euphoric(std::vector<std::pair<std::string, std::string>>*) override;
	void Laxative(std::vector<std::pair<std::string, std::string>>*) override;
	void Munchies(std::vector<std::pair<std::string, std::string>>*) override;
	void Shrinking(std::vector<std::pair<std::string, std::string>>*) override;
public:
	Battery();
	void decrement_pointer_counter() override;
	std::string get_type() override;
};



#endif //BATTERY_H
