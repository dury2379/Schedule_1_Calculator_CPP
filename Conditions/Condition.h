//
// Created by den on 7/12/25.
//

#ifndef CONDITION_H
#define CONDITION_H
#include <vector>

#include "../Products/Product.h"

/*
 * Condition test is a wrapper class for BFS. BFS can be used for two main purposes: find the shallowest mix or find optimal
 * profit for a depth. This wrapper is made so that it is easier to witch between uses.
 */

class Condition {
protected:
	// True if the condition is fulfilled and BFS should stop.
	bool fulfilled;
	// This is the vector that contains all the products that fulfill the condition. For effects search this vector
	// would contain all the product of minimal depth that have the set of desired effects. For max profit it would
	// contain a list of product with the maximum for their layer, aka product[3] is the product with max profit for
	// depth of 4 ingredients (arrays are 0 indexed while depth is 1 indexed).
	std::vector<Product*> fulfillment_list;
public:
	// Basic constructor
	Condition();
	// Checks if the condition has already been fulfilled.
	virtual bool is_fulfilled() {return fulfilled;}
	// Test if the product fulfills the condition.
	virtual bool test_condition(Product*) = 0;
	// Used for the printout. The user needs to see what product fulfills the condition that was set.
	virtual std::string to_string();
	// Basic destructor.
	virtual ~Condition();
};



#endif //CONDITION_H
