//
// Created by den on 6/24/25.
//

#ifndef DONUT_H
#define DONUT_H
#include "Ingredient.h"


class Donut: public Ingredient{
private:
	~Donut() override;
protected:
	void Anti_Gravity(std::vector<std::pair<std::string, std::string>>*) override;
	void Balding(std::vector<std::pair<std::string, std::string>>*) override;
	void Calorie_Dense(std::vector<std::pair<std::string, std::string>>*) override;
	void Focused(std::vector<std::pair<std::string, std::string>>*) override;
	void Jennerising(std::vector<std::pair<std::string, std::string>>*) override;
	void Munchies(std::vector<std::pair<std::string, std::string>>*) override;
	void Shrinking(std::vector<std::pair<std::string, std::string>>*) override;
public:
	Donut();
	void decrement_pointer_counter() override;
	std::string get_type() override;
};



#endif //DONUT_H
