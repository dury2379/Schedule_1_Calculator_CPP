//
// Created by den on 6/24/25.
//

#ifndef CHILI_H
#define CHILI_H
#include "Ingredient.h"


class Chili: public Ingredient{
private:
	~Chili() override;
protected:
	void Anti_Gravity(std::vector<std::pair<std::string, std::string>>*) override;
	void Athletic(std::vector<std::pair<std::string, std::string>>*) override;
	void Laxative(std::vector<std::pair<std::string, std::string>>*) override;
	void Munchies(std::vector<std::pair<std::string, std::string>>*) override;
	void Shrinking(std::vector<std::pair<std::string, std::string>>*) override;
	void Sneaky(std::vector<std::pair<std::string, std::string>>*) override;
public:
	Chili();
	void decrement_pointer_counter() override;
	std::string get_type() override;;
};



#endif //CHILI_H
