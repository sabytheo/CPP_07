#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename F>
void iter(T& array, const unsigned int length, F& func)
{
	if (length < 1)
			return;
	for (unsigned int i = 0 ; i < length ; i++)
	{
		func(array[i]);
	}
}

#endif
