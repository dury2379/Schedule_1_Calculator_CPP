//
// Created by den on 7/8/25.
//

#include <iostream>

#include "Products/Cocaine.h"
#include "Products/OG_Kush.h"
#include "Products/Product.h"

void wait_for_key();


int main()
{
	long n = 4500000;
	std::vector<Product*> vec = {};
	Product* temp;
	Product* temp2;

	/*
	for (long i = 0; i < n; i++)
	{
		temp = new OG_Kush();
		temp2 = temp->mix(new Cuke);

		delete temp;
		delete temp2;
	}
	*/

	for (long i = 0; i < n; i++)
	{
		vec.emplace_back(new OG_Kush);
		Product* temp = vec.back()->mix(new Cuke);
		delete vec.back();
		vec[i] = temp;
	}
	std::cout << "'vec' is full." << std::endl;

	wait_for_key();

	for (long i = n-1; i >= 0; i--)
	{
		delete vec[i];
		vec.pop_back();
	}
	std::cout << "'vec' is empty." << std::endl;

	wait_for_key();

	for (long i = 0; i < n; i++)
	{
		vec.emplace_back(new OG_Kush);
		Product* temp = vec.back()->mix(new Cuke);
		delete vec.back();
		vec[i] = temp;
	}
	std::cout << "'vec' is full again." << std::endl;

	wait_for_key();

	return 0;
}

void wait_for_key()
{
	std::string stub_str = "";
	std::getline(std::cin, stub_str);
}
