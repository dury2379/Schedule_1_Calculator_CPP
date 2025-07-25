//
// Created by den on 6/29/25.
//

#ifndef GRANDDADDY_PURPLE_H
#define GRANDDADDY_PURPLE_H
#include "Product.h"


class Granddaddy_Purple: public Product{
private:
	int Weed_Price = 35;
	std::set<std::string> Granddaddy_Purple_Effects = {Effects::Sedating};
public:
	Granddaddy_Purple(): Product(this->Weed_Price, new std::set<std::string>(this->Granddaddy_Purple_Effects),
									new std::vector<Ingredient*>()) {}
	~Granddaddy_Purple() override;
};



#endif //GRANDDADDY_PURPLE_H
