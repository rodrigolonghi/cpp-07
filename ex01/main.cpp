#include "iter.hpp"

int	main() {
	char	array[5] = {'a', 'b', 'c', 'd', 'e'};
	int		array2[3] = {1, 2, 3};

	iter(array, 5, println);
	iter(array2, 3, println);
	return 0;
}
