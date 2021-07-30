#include <iostream>

int main() {

	int a{0};
	int b{0};

	std::cout << "Enter an integer: ";
	std::cin >> a;

	std::cout << "Enter another integer: ";
	std::cin >> b;

	std::cout << a << " + " << b << " is " << a + b << '\n';
	std::cout << a << " - " << b << " is " << a - b << '\n';

	return 0;
}

