//
// Created by den on 6/24/25.
//

#ifndef VIAGRA_H
#define VIAGRA_H
#include "Ingredient.h"


class Viagra: public Ingredient {
private:
	~Viagra() override;
protected:
	void Athletic(std::vector<std::pair<std::string, std::string>>*) override;
	void Disorienting(std::vector<std::pair<std::string, std::string>>*) override;
	void Euphoric(std::vector<std::pair<std::string, std::string>>*) override;
	void Laxative(std::vector<std::pair<std::string, std::string>>*) override;
	void Shrinking(std::vector<std::pair<std::string, std::string>>*) override;
public:
	Viagra();
	void decrement_pointer_counter() override;
	std::string get_type() override;
};



#endif //VIAGRA_H
