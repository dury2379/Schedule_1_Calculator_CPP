//
// Created by den on 7/21/25.
//

#ifndef MAX_PROFIT_CONDITION_H
#define MAX_PROFIT_CONDITION_H
#include "Condition.h"


class Max_Profit_Condition: public Condition {
private:
	int max_depth;
	std::map<int, Product> max_profits = {};
	void fill_fulfillment_list();
public:
	explicit Max_Profit_Condition(int depth): max_depth(depth) {};
	bool test_condition(Product*) override;
};



#endif //MAX_PROFIT_CONDITION_H
