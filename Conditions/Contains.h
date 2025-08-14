//
// Created by den on 7/17/25.
//

#ifndef CONTAINS_H
#define CONTAINS_H
#include "Condition.h"


class Contains: public Condition {
private:
	uint64_t target;
public:
	Contains(uint64_t);
	Contains(std::vector<Effects_Lib::effect_enum>);
	bool test_condition(Product*);
};



#endif //CONTAINS_H
