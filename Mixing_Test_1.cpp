#include <iostream>


void wait_for_key();

int main()
{
	Product* weed = new OG_Kush();
	Product* new_product;
	Cuke* c = new Cuke();

	new_product = weed->mix(c);
	delete weed;
	weed = new_product;
	// std::cout << "The product after mixing with Cuke is:\n"
	// 		  << new_product->effects_to_string() << std::endl;
	new_product = weed->mix(new Mega_Bean);
	delete weed;
	weed = new_product;
	// std::cout << "The product after mixing with Mega Bean is:\n"
	// 		  << new_product->effects_to_string() << std::endl;
	new_product = weed->mix(new Cuke);
	delete weed;
	// std::cout << "The product after mixing with Cuke is:\n"
	//		  << new_product->effects_to_string() << std::endl;

	std::cout << "Mixing Result:\n"
			  << new_product->to_string() << std::endl;

	wait_for_key();

	delete new_product;

	return 0;
}

void wait_for_key()
{
	std::string stub_str = "";
	std::getline(std::cin, stub_str);
}