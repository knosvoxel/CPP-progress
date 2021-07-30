#include <iostream>
#include "PRNG.h"

unsigned int PRNG()
{
	static unsigned int seed{ 5236 };

	seed = 8254729 * seed + 2396403;

	return seed % 32768;
}

void printRandomNumbers(int amount)
{
	for (int count{ 1 }; count <= amount; ++count)
	{
		std::cout << PRNG() << '\t';

		if (count % 5 == 0)
			std::cout << '\n';
	}
}