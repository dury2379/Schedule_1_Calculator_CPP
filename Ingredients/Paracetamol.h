//
// Created by den on 6/24/25.
//

#ifndef PARACETAMOL_H
#define PARACETAMOL_H
#include "Ingredient.h"


class Paracetamol: public Ingredient{
private:
	~Paracetamol() override;
protected:
	void Calming(std::vector<std::pair<std::string, std::string>>*) override;
	void Electrifying(std::vector<std::pair<std::string, std::string>>*) override;
	void Energizing(std::vector<std::pair<std::string, std::string>>*) override;
	void Focused(std::vector<std::pair<std::string, std::string>>*) override;
	void Foggy(std::vector<std::pair<std::string, std::string>>*) override;
	void Glowing(std::vector<std::pair<std::string, std::string>>*) override;
	void Munchies(std::vector<std::pair<std::string, std::string>>*) override;
	void Paranoia(std::vector<std::pair<std::string, std::string>>*) override;
	void Spicy(std::vector<std::pair<std::string, std::string>>*) override;
	void Toxic(std::vector<std::pair<std::string, std::string>>*) override;
public:
	Paracetamol();
	void decrement_pointer_counter() override;
	std::string get_type() override;
};



#endif //PARACETAMOL_H
