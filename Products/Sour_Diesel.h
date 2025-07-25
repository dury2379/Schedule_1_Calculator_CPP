//
// Created by den on 6/29/25.
//

#ifndef SOUR_DIESEL_H
#define SOUR_DIESEL_H
#include "Product.h"


class Sour_Diesel: public Product{
private:
	int Weed_Price = 35;
	std::set<std::string> Sour_Diesel_Effects = {Effects::Refreshing};
public:
	Sour_Diesel(): Product(this->Weed_Price, new std::set<std::string>(this->Sour_Diesel_Effects),
							new std::vector<Ingredient*>()) {}
	~Sour_Diesel() override;
};



#endif //SOUR_DIESEL_H
