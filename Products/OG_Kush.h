//
// Created by den on 6/29/25.
//

#ifndef OG_KUSH_H
#define OG_KUSH_H
#include "Product.h"


class OG_Kush: public Product{
private:
	int Weed_Price = 35;
	std::set<std::string> OG_Kush_Effects = {Effects::Calming};
public:
	OG_Kush(): Product(35, new std::set<std::string>({Effects::Calming}),
						new std::vector<Ingredient*>()) {}
	~OG_Kush() override;
};



#endif //OG_KUSH_H
