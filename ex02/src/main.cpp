#include <iostream>
#include "Array.hpp"


void printArray(const Array<int>& arr) {
    for (unsigned int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << std::endl;
    }
}


int main(void)
{

	try
	{
		Array<int> first;
		std::cout << "first size: " << first.size() << std::endl;
		std::cout << first[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		int *a = new int();
		std::cout << "Value of a: " << *a << std::endl;
		unsigned int len = 5;
		Array<int> second(len);

		Array<int> fourth;
		std::cout << "Second[2] before: " << second[2] << std::endl;
		second[2] = 48;
		second[3] = 56;
		std::cout << "Second size: " << second.size() << std::endl;
		Array<int> third(second);
		std::cout << "Third[2]: " << third[2] << std::endl;
		third[2] = 100;
		std::cout << "Second[2] after changing third: " << second[2] << std::endl;
		std::cout << "third size: " << third.size() << std::endl;
		std::cout << "Third[2]: " << third[2] << std::endl;
		std::cout << "Third[3]: " << third[3] << std::endl;
		std::cout << "------------------------" << std::endl;
		printArray(third);
		fourth = third;
		std::cout << "------------------------" << std::endl;
		printArray(fourth);
		delete a;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
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
