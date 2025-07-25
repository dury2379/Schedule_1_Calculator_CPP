//
// Created by den on 6/24/25.
//

#ifndef BANANA_H
#define BANANA_H
#include "Ingredient.h"


class Banana: public Ingredient{
private:
	~Banana() override;
protected:
	void Calming(std::vector<std::pair<std::string, std::string>>*) override;
	void Cyclopean(std::vector<std::pair<std::string, std::string>>*) override;
	void Disorienting(std::vector<std::pair<std::string, std::string>>*) override;
	void Energizing(std::vector<std::pair<std::string, std::string>>*) override;
	void Focused(std::vector<std::pair<std::string, std::string>>*) override;
	void Long_Faced(std::vector<std::pair<std::string, std::string>>*) override;
	void Paranoia(std::vector<std::pair<std::string, std::string>>*) override;
	void Smelly(std::vector<std::pair<std::string, std::string>>*) override;
	void Toxic(std::vector<std::pair<std::string, std::string>>*) override;
public:
	Banana();
	void decrement_pointer_counter() override;
	std::string get_type() override;
};



#endif //BANANA_H
