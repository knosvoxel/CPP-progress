#include <cstdint>
#include <iostream>

std::int_fast64_t powint(int base, int exp) {
	std::int_fast64_t result{ 1 };
	while (exp) {
		if (exp & 1)
			result *= base;
		exp >>= 1;
		base *= base;
	}

	return result;
}

bool isEven(int value) {
	return (value % 2) == 0;
}