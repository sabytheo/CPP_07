#include "Array.hpp"

template <typename T>
Array<T>::Array() : _size(0)
{
	_data = new T[_size]();
	// _data = NULL;
}
template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	_data = new T[_size]();
}

template <typename T>
Array<T>::Array(const Array &copy) : _size(copy.size())
{
	this->_data = new T[this->_size]();
	for (unsigned int i = 0; i < this->_size; i++)
	{
		this->_data[i] = copy._data[i];
	}
}
template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		delete[] this->_data;
		this->_size = other._size;
		this->_data = new T[this->_size]();
		for (unsigned int i = 0; i < this->_size; i++)
		{
			this->_data[i] = other._data[i];
		}
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size)
		throw Array<T>::OutOfBoundsException();
	return _data[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
	if (index >= this->_size)
		throw Array<T>::OutOfBoundsException();
	return _data[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return this->_size;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _data;
}
