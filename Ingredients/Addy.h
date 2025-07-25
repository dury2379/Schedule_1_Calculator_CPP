//
// Created by den on 6/24/25.
//

#ifndef ADDY_H
#define ADDY_H
#include "Ingredient.h"


class Addy: public Ingredient{
private:
	~Addy() override;
protected:
	void Explosive(std::vector<std::pair<std::string, std::string>>*) override;
	void Foggy(std::vector<std::pair<std::string, std::string>>*) override;
	void Glowing(std::vector<std::pair<std::string, std::string>>*) override;
	void Long_Faced(std::vector<std::pair<std::string, std::string>>*) override;
	void Sedating(std::vector<std::pair<std::string, std::string>>*) override;
public:
	Addy();
	void decrement_pointer_counter() override;
	std::string get_type() override;
};



#endif //ADDY_H
