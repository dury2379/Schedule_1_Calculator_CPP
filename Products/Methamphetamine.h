//
// Created by den on 6/29/25.
//

#ifndef METHAMPHETAMINE_H
#define METHAMPHETAMINE_H
#include "Product.h"


class Methamphetamine: public Product{
private:
	int Methamphetamine_Price = 70;
	std::set<std::string> Methamphetamine_Effects = {};
public:
	Methamphetamine(): Product(70, new std::set<std::string>(this->Methamphetamine_Effects),
						new std::vector<Ingredient*>()) {}
	~Methamphetamine() override;
};



#endif //METHAMPHETAMINE_H
