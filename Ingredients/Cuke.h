//
// Created by den on 6/24/25.
//

#ifndef CUKE_H
#define CUKE_H
#include "Ingredient.h"


class Cuke: public Ingredient {
private:
	~Cuke() override;
protected:
	void Euphoric(std::vector<std::pair<std::string, std::string>>*) override;
	void Foggy(std::vector<std::pair<std::string, std::string>>*) override;
	void Gingeritis(std::vector<std::pair<std::string, std::string>>*) override;
	void Munchies(std::vector<std::pair<std::string, std::string>>*) override;
	void Slippery(std::vector<std::pair<std::string, std::string>>*) override;
	void Sneaky(std::vector<std::pair<std::string, std::string>>*) override;
	void Toxic(std::vector<std::pair<std::string, std::string>>*) override;
public:
	Cuke();
	void decrement_pointer_counter() override;
	std::string get_type() override;
};



#endif //CUKE_H
