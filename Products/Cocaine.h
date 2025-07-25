//
// Created by den on 6/29/25.
//

#ifndef COCAINE_H
#define COCAINE_H
#include "Product.h"


class Cocaine: public Product{
private:
	int Cocaine_Price = 150;
	std::set<std::string> Cocaine_Effects = {};
public:
	Cocaine(): Product(this->Cocaine_Price, new std::set<std::string>(this->Cocaine_Effects),
						new std::vector<Ingredient*>()) {}
	~Cocaine() override;
};



#endif //COCAINE_H
