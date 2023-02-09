#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T> class Array {
	private:
		T				*array;
		unsigned int	size;

	public:
		Array<T>() : array(NULL), size(0) {};

		~Array<T>() {
			if (array)
				delete[] array;
		};

		Array<T>(Array<T> const &src) {
			*this = src;
		};

		Array<T>(const unsigned int size) : size(size) {
			array = new T[size];
		};

		Array<T> &operator=(Array<T> const &src) {
			size = src.getSize();
			array = new T[size];
			for (unsigned int i=0; i<size; i++) {
				array[i] = src.array[i];
			}
			return *this;
		};

		T	&operator[](unsigned int n) {
			if (n >= 0 && n < size) {
				return array[n];
			}
			throw InvalidIndexException();
		};

		unsigned int	getSize() const { return size; };

		class InvalidIndexException : public std::exception {
			public :
				virtual const char *what() const throw() {
					return "The index is out of bounds\n";
				};
		};
};

#endif
