//
// Created by den on 6/24/25.
//

#ifndef MOTOR_OIL_H
#define MOTOR_OIL_H
#include "Ingredient.h"


class Motor_Oil: public Ingredient {
private:
	~Motor_Oil() override;
protected:
	void Energizing(std::vector<std::pair<std::string, std::string>>*) override;
	void Euphoric(std::vector<std::pair<std::string, std::string>>*) override;
	void Foggy(std::vector<std::pair<std::string, std::string>>*) override;
	void Munchies(std::vector<std::pair<std::string, std::string>>*) override;
	void Paranoia(std::vector<std::pair<std::string, std::string>>*) override;
public:
	Motor_Oil();
	void decrement_pointer_counter() override;
	std::string get_type() override;
};



#endif //MOTOR_OIL_H
