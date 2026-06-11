#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T, typename F>
void iter(T& array, const int length, F& func)
{
	for (int i = 0 ; i < length ; i++)
	{
		if (length < 1)
			return;
		func(array[i]);
	}
}

#endif
