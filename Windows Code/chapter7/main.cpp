#include <iostream>

int calculate(int x, int y, char c) {
	switch (c)
	{
	case '+': return x + y; break;
	case '-': return x - y; break;
	case '*': return x * y; break;
	case '/': return x / y; break;
	case '%': return x % y; break;
	default: std::cout << "calculate(): Unhandled case\n";
		return 0;
	}
}

bool isVowel(char c) {
	switch (c)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'O':
	case 'U':
		return true;
	default:
		return false;
	}
}

void writeLetters() {
	char myChar{ 'a' };
	while (myChar <= 'z' )
	{
		std::cout << myChar << ' ' << static_cast<int>(myChar) << '\n';
		++myChar;
	}
}

void nestedLoopInverted() {
	int outer{ 5 };
	while (outer >= 1) {
		int inner{ outer };
		while (inner >= 1) {
			std::cout << inner-- << ' ';
		}

		std::cout << '\n';
		--outer;
	}
}

int pow(int base, int exponent) {
	int total{ 1 };

	for (int count{ 0 }; count < exponent; ++count) {
		total *= base;
	}
	return total;
}

void multipleVariablesForLoop() {
	for (int x{ 0 }, y{ 9 }; x < 10; ++x, --y) {
		std::cout << x << ' ' << y << '\n';
	}
}

void question4() {
	int amount{ 1 };
	while (amount <= 5) {
		int blanks{ 5 - amount };
		while (blanks >= 1) {
			std::cout << "  ";
			--blanks;
		}
		int number = amount;
		while (number >= 1){
			std::cout << number << ' ';
			--number;
		}
		std::cout << '\n';
		amount++;
	}
}

void numbersOneToTwenty() {
	for (int i{ 0 }; i <= 20; i += 2) {
		std::cout << i << ' ';
	}
}

int sumTo(int value) {
	int result{ 0 };

	for (int i = 1; i <= value; ++i)
		result += i;

	return result;
}

void divisibleByFour() {
	for(int count{0}; count < 10; ++count){
		if ((count % 4) == 0)
			continue;

		std::cout << count << '\n';
	}
}

int main()
{
	/*switch (2)
	{
	case 1:
		std::cout << 1 << '\n';
		break;
	case 2:
		std::cout << 2 << '\n';
		[[fallthrough]]; //prevent warnings when you use a fallthrough 
	case 3:
		std::cout << 3 << '\n';
		break;
	}*/
	//std::cout << calculate(10, 5, 'a');

/*	double x{};
tryAgain:
	std::cout << "Enter a non-negative number: ";
	std::cin >> x;

	if (x < 0.0)
		goto tryAgain;

	std::cout << "The square root of " << x << " is " << std::sqrt(x) << '\n';*/
	//nestedLoopInverted();
	//question4();
	//multipleVariablesForLoop();
	//numbersOneToTwenty();
	std::cout << "Enter a value: ";
	int value{};
	std::cin >> value;

	std::cout << sumTo(value);
    return 0;
}