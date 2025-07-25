//
// Created by den on 6/24/25.
//

#ifndef IODINE_H
#define IODINE_H
#include "Ingredient.h"


class Iodine: public Ingredient{
private:
	~Iodine() override;
protected:
	void Calming(std::vector<std::pair<std::string, std::string>>*) override;
	void Calorie_Dense(std::vector<std::pair<std::string, std::string>>*) override;
	void Euphoric(std::vector<std::pair<std::string, std::string>>*) override;
	void Foggy(std::vector<std::pair<std::string, std::string>>*) override;
	void Refreshing(std::vector<std::pair<std::string, std::string>>*) override;
	void Toxic(std::vector<std::pair<std::string, std::string>>*) override;
public:
	Iodine();
	void decrement_pointer_counter() override;
	std::string get_type() override;
};



#endif //IODINE_H
