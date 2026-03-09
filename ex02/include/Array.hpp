#ifndef ARRAY_HPP
#define ARRAY_HPP

template <class T>
class Array
{
	private:
		T *_data;
		unsigned int _size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		~Array();

		class OutOfBoundsException : public std::exception
		{
		public:
			virtual const char *what() const throw()
			{
				return "Index is out of bounds!";
			}
		};
		Array &operator=(const Array &other);
		T &operator[](unsigned int index);

		unsigned int size() const;
};

#include "Array.tpp"

#endif
