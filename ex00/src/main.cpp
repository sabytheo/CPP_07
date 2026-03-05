#include <iostream>
#include "whatever.hpp"

int iter2 (int nb)
{
	return(++nb);
}

int main(void)
{
	const int len = 10;
	int array[10] = {0,1,2,3,4,5,6,7,8,9};

	::iter(array, len, iter2);

}
