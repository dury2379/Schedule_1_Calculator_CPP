//
// Created by den on 7/12/25.
//

#ifndef CONDITION_H
#define CONDITION_H
#include <vector>

#include "../Products/Product.h"


class Condition {
protected:
	bool fulfilled;
	std::vector<Product*> fulfillment_list;
public:
	Condition();
	virtual bool is_fulfilled() {return fulfilled;}
	virtual bool test_condition(Product*) = 0;
	virtual std::string to_string();
	virtual ~Condition();
};



#endif //CONDITION_H
