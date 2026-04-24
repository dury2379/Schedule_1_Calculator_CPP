//
// Created by den on 7/17/25.
//

#ifndef CONTAINS_H
#define CONTAINS_H
#include "Condition.h"

/*
 * This is a condition used for BFS. If is fulfilled when the product passed in as a parameter to method called
 * test_condition(Product*) contais all of the effects that are stored as concatenated 64-bit int called target.
 */
class Contains: public Condition {
private:
	// The target list of effects in concatenated 64-bit int format.
	uint64_t target;
public:
	// Constructor that initializes the target.
	Contains(uint64_t);
	// Constructor that initializes the target using a vector.
	Contains(std::vector<Effects_Lib::effect_enum>);
	// The test. Sets class member named is_fulfilled to True (the member is inherited from Condition class).
	bool test_condition(Product*);
};



#endif //CONTAINS_H
