//
// Created by den on 6/24/25.
//

#ifndef MEGA_BEAN_H
#define MEGA_BEAN_H
#include "Ingredient.h"


class Mega_Bean: public Ingredient{
private:
	~Mega_Bean() override;
protected:
	void Athletic(std::vector<std::pair<std::string, std::string>>*) override;
	void Calming(std::vector<std::pair<std::string, std::string>>*) override;
	void Energizing(std::vector<std::pair<std::string, std::string>>*) override;
	void Focused(std::vector<std::pair<std::string, std::string>>*) override;
	void Jennerising(std::vector<std::pair<std::string, std::string>>*) override;
	void Seizure_Inducing(std::vector<std::pair<std::string, std::string>>*) override;
	void Shrinking(std::vector<std::pair<std::string, std::string>>*) override;
	void Slippery(std::vector<std::pair<std::string, std::string>>*) override;
	void Sneaky(std::vector<std::pair<std::string, std::string>>*) override;
	void Thought_Provoking(std::vector<std::pair<std::string, std::string>>*) override;
public:
	Mega_Bean();
	void decrement_pointer_counter() override;
	std::string get_type() override;
};



#endif //MEGA_BEAN_H
