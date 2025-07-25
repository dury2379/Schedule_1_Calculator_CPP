//
// Created by den on 6/24/25.
//

#ifndef MOUTH_WASH_H
#define MOUTH_WASH_H
#include "Ingredient.h"


class Mouth_Wash: public Ingredient {
private:
	~Mouth_Wash() override;
protected:
	void Calming(std::vector<std::pair<std::string, std::string>>*) override;
	void Calorie_Dense(std::vector<std::pair<std::string, std::string>>*) override;
	void Explosive(std::vector<std::pair<std::string, std::string>>*) override;
	void Focused(std::vector<std::pair<std::string, std::string>>*) override;
public:
	Mouth_Wash();
	void decrement_pointer_counter() override;
	std::string get_type() override;
};



#endif //MOUTH_WASH_H
