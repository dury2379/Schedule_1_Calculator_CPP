//
// Created by den on 6/24/25.
//

#ifndef HORSE_SEMEN_H
#define HORSE_SEMEN_H
#include "Ingredient.h"


class Horse_Semen: public Ingredient{
private:
	~Horse_Semen() override;
protected:
	void Anti_Gravity(std::vector<std::pair<std::string, std::string>>*) override;
	void Gingeritis(std::vector<std::pair<std::string, std::string>>*) override;
	void Seizure_Inducing(std::vector<std::pair<std::string, std::string>>*) override;
	void Thought_Provoking(std::vector<std::pair<std::string, std::string>>*) override;
public:
	Horse_Semen();
	void decrement_pointer_counter() override;
	std::string get_type() override;
};



#endif //HORSE_SEMEN_H
