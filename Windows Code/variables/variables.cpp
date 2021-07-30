#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	std::cout << "Enter your full name: ";
	std::string name{};
	std::getline(std::cin >> std::ws, name);
	int nameLength = name.length();

	std::cout << "Enter your age: ";
	int age{};
	std::cin >> age;

	double ageForLetter = (double) age / nameLength;

	std::cout << "You've lived "<< ageForLetter << " years for each letter in your name" << '\n';

	return 0;
}

