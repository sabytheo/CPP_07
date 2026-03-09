#include <iostream>
#include "Array.hpp"

int main(void)
{
	try
	{
		int *a = new int();
		Array<int> first;
		unsigned int len = 5;
		Array<int> second(len);

		std::cout << "Value of a: " << *a << std::endl;
		std::cout << first[0] << std::endl;
		std::cout << "Second[2] before: " << second[2] << std::endl;
		second[2] = 48;
		Array<int> third(second);
		std::cout << "Third[2] (copy): " << third[2] << std::endl;
		third[2] = 100;
		std::cout << "Second[2] after changing third: " << second[2] << " (should be 48)" << std::endl;
		delete a;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}

// int main(void)
// {
// 	try
// 	{
// 		Array<char> first;
// 		unsigned int len = 5;
// 		Array<char> second(len);

// 		// std::cout << first[0] << std::endl;
// 		std::cout << "Second[2] before: " << static_cast<int>(second[2]) << std::endl;
// 		second[2] = 'b';
// 		Array<char> third(second);
// 		std::cout << "Third[2] (copy): " << third[2] << std::endl;
// 		third[2] = 'c';
// 		std::cout << "Second[2] after changing third: " << second[2] << " (should be b)" << std::endl;
// 	}
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << "Error: " << e.what() << std::endl;
// 	}

// 	return 0;
// }
