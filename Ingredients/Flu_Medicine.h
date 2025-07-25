//
// Created by den on 6/24/25.
//

#ifndef FLU_MEDICINE_H
#define FLU_MEDICINE_H
#include "Ingredient.h"


class Flu_Medicine: public Ingredient{
private:
	~Flu_Medicine() override ;
protected:
	void Athletic(std::vector<std::pair<std::string, std::string>>*) override;
	void Calming(std::vector<std::pair<std::string, std::string>>*) override;
	void Cyclopean(std::vector<std::pair<std::string, std::string>>*) override;
	void Electrifying(std::vector<std::pair<std::string, std::string>>*) override;
	void Euphoric(std::vector<std::pair<std::string, std::string>>*) override;
	void Focused(std::vector<std::pair<std::string, std::string>>*) override;
	void Laxative(std::vector<std::pair<std::string, std::string>>*) override;
	void Munchies(std::vector<std::pair<std::string, std::string>>*) override;
	void Shrinking(std::vector<std::pair<std::string, std::string>>*) override;
	void Thought_Provoking(std::vector<std::pair<std::string, std::string>>*) override;
public:
	Flu_Medicine();
	void decrement_pointer_counter() override;
	std::string get_type() override;
};



#endif //FLU_MEDICINE_H
