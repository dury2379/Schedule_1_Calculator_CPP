//
// Created by den on 6/29/25.
//

#ifndef GREEN_CRACK_H
#define GREEN_CRACK_H
#include "Product.h"


class Green_Crack: public Product{
private:
	int Weed_Price = 35;
	std::set<std::string> Green_Crack_Effects = {Effects::Energizing};
public:
	Green_Crack(): Product(this->Weed_Price, new std::set<std::string>(this->Green_Crack_Effects),
						new std::vector<Ingredient*>()) {}
	~Green_Crack() override;
};



#endif //GREEN_CRACK_H
