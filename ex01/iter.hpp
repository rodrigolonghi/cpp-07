#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T const *array, size_t len, void(*f)(T const &)) {
	for (size_t i = 0; i < len; i++) {
		f(array[i]);
	}
};

template<typename T>
void println(T &i) {
	std::cout << i << std::endl;
};

#endif
