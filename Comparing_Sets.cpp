//
// Created by den on 7/7/25.
//


#include <set>
#include <string>
#include <iostream>

int main()
{
	std::set<std::string*> a = {};
	std::set<std::string*> b = {};

	a.emplace(new std::string("Hello"));
	a.emplace(new std::string("No."));

	b.emplace(new std::string("Hello"));
	b.emplace(new std::string("No."));

	std::cout << "a == b ?:\n\t"
			  << (a == b) << "\n" << std::endl;
	std::cout << "b == a ?:\n\t"
			  << (b == a) << "\n" << std::endl;

	for (const std::string* s: a)
	{
		delete s;
	}

	for (const std::string* s: b)
	{
		delete s;
	}

	return 0;
}
