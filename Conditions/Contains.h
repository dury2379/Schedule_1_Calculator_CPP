//
// Created by den on 7/17/25.
//

#ifndef CONTAINS_H
#define CONTAINS_H
#include "Condition.h"


class Contains: public Condition {
private:
	std::set<std::string> target;
public:
	Contains(std::set<std::string>);
	bool test_condition(Product*);
};



#endif //CONTAINS_H
