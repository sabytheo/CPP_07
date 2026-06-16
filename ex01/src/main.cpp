#include <iostream>
#include "iter.hpp"

int incr(int& nb)
{
	nb = nb + 1;
	return (nb);
}

void upcase(std::string& str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		str[i] = std::toupper(str[i]);
	}
}

int main(void)
{
	const unsigned int len = 10;
	int array[len] = {0,1,2,3,4,5,6,7,8,9};
	::iter(array,len,incr);
	for(unsigned int i = 0 ; i < len ; i++)
	{
		std::cout << array[i] << std::endl;
	}

	const int len2 = 10;
	std::string array2[len2] = {"a","b","c","d","e","f","g","h","i","j"};
	::iter(array2,len2,upcase);
	for(int i = 0 ; i < len2 ; i++)
	{
		std::cout << array2[i] << std::endl;
	}
}
