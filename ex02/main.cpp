#include <iostream>
#include "Array.hpp"

int main()
{
	std::cout << "\e[1;32mCreating an array of ints and populating it\n\e[0m";
	Array<int> arrayOfInt(10);
	for (unsigned int i = 0; i < arrayOfInt.getSize(); i++) {
		int	random = rand();
		if (i % 2 == 0)
			random *= -1;
		arrayOfInt[i] = random;
		std::cout  << arrayOfInt[i] << std::endl;
	}

	std::cout << "\n\e[1;32mCreating an array of chars and populating it\n\e[0m";
	Array<char> arrayOfChar(5);
	for (unsigned int i = 0; i < arrayOfChar.getSize(); i++) {
		arrayOfChar[i] = 97 + i;
		std::cout  << arrayOfChar[i] << std::endl;
	}

	std::cout << "\n\e[1;32mGet especific element\n\e[0m";
	std::cout << "arrayOfInt[7]: " << arrayOfInt[7] << std::endl;
	std::cout << "arrayOfChar[3]: " << arrayOfChar[3] << std::endl;

	std::cout << "\n\e[1;32mTest InvalidIndexException\n\e[0m";
	try {
		std::cout << arrayOfInt[11] << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
