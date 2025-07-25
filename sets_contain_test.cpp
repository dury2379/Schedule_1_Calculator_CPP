//
// Created by den on 7/14/25.
//


#include <algorithm>
#include <set>
#include <string>
#include <iostream>

template <typename T>
bool set_contains(const std::set<T>, const std::set<T>);

int main()
{
	std::set<std::string> big_set = {"1", "2", "3"};
	std::set<std::string> subset = {"1", "2"};

	std::cout << "contains(big_set, subset) = " << set_contains(big_set, subset) << "\n"
			  << "contains(subset, big_set) = " << set_contains(subset, big_set) << std::endl;
}

template <typename T>
bool set_contains(const std::set<T> super_set, const std::set<T> sub_set)
{
	return std::includes(super_set.begin(), super_set.end(),
							sub_set.begin(), sub_set.end());
}
