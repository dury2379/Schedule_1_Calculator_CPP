//
// Created by den on 6/24/25.
//

#ifndef GASOLINE_H
#define GASOLINE_H
#include "Ingredient.h"


class Gasoline: public Ingredient{
private:
	~Gasoline() override;
protected:
	void Disorienting(std::vector<std::pair<std::string, std::string>>*) override;
	void Electrifying(std::vector<std::pair<std::string, std::string>>*) override;
	void Energizing(std::vector<std::pair<std::string, std::string>>*) override;
	void Euphoric(std::vector<std::pair<std::string, std::string>>*) override;
	void Gingeritis(std::vector<std::pair<std::string, std::string>>*) override;
	void Jennerising(std::vector<std::pair<std::string, std::string>>*) override;
	void Laxative(std::vector<std::pair<std::string, std::string>>*) override;
	void Munchies(std::vector<std::pair<std::string, std::string>>*) override;
	void Paranoia(std::vector<std::pair<std::string, std::string>>*) override;
	void Shrinking(std::vector<std::pair<std::string, std::string>>*) override;
	void Sneaky(std::vector<std::pair<std::string, std::string>>*) override;
public:
	Gasoline();
	void decrement_pointer_counter() override;
	std::string get_type() override;
};



#endif //GASOLINE_H
