#include <iostream>
#include "whatever.hpp"

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
	const int len = 10;
	int array[len] = {0,1,2,3,4,5,6,7,8,9};
	::iter(array,len,incr);
	for(int i = 0 ; i < len ; i++)
	{
		std::cout << array[i] << std::endl;
	}

	const int le2 = 10;
	std::string array2[le2] = {"a","b","c","d","e","f","g","h","i","j"};
	::iter(array2,len,upcase);
	for(int i = 0 ; i < le2 ; i++)
	{
		std::cout << array2[i] << std::endl;
	}
}
