#include <iostream>
#include <algorithm> // for std::sort
#include <iterator> // for std::size
#include <limits>

void sortArray()
{
	int array[]{ 30,50,20,10,40 };

	/*std::sort(std::begin(array), std::end(array));

	for (int i{ 0 }; i < static_cast<int>(std::size(array)); ++i)
	{
		std::cout << array[i] << ' ';
	}

	std::cout << '\n';*/
	constexpr int length{static_cast<int>(std::size(array))};

	for (int startIndex{ 0 }; startIndex < length - 1; ++startIndex)
	{
		int smallestIndex{ startIndex };
		for (int currentIndex{ startIndex + 1 }; currentIndex < length; ++currentIndex)
		{
			if (array[currentIndex] < array[smallestIndex])
				smallestIndex = currentIndex;
		}

		std::swap(array[startIndex], array[smallestIndex]);
	}

	for (int index{ 0 }; index < length; ++index)
		std::cout << '\n';
}

void bubbleSort() {
	int array[]{ 6,3,2,9,7,1,5,4,8 };
	constexpr int length{ static_cast<int>(std::size(array)) };

	for (int iteration{ 0 }; iteration < length - 1; ++iteration) {

		for (int currentIndex{ 0 }; currentIndex < length - 1; ++currentIndex) {
		if (array[currentIndex] > array[currentIndex+1])
			std::swap(array[currentIndex], array[currentIndex+1]);
		}
	}

	for (int index{ 0 }; index < length; ++index)
		std::cout << array[index] << ' ';

	std::cout << '\n';
}

enum StudentNames
{
	kenny,
	kyle,
	stan,
	butters,
	cartman,
	wendy,
	max_students
};

namespace Animals {
	enum Names {
		chicken,
		dog,
		cat,
		elephant,
		duck,
		snake,
		max_names
	};
}

int main()
{
	/*int prime[5]{2,3,5,7,11};
	int array[]{ 0,1,2,3,4 };


		int scores[]{ 84,92,76,81,56 };
		int numStudents{ std::size(scores) };
		int totalScore{ 0 };

		for (int student{ 0 }; student < numStudents; ++student)
			totalScore += scores[student];

		auto averageScore{ static_cast<double>(totalScore) / numStudents };


	int testScores[max_students]{};

	float highestTemperature[365]{};
	int animalLegs[Animals::max_names]{ 2,4,4,4,2,0 };


	testScores[stan] = 76;

	std::cout << "The lowest prime number is: " << prime[0] << '\n';
	std::cout << "The sum of the first 5 primes is " << prime[0] + prime[1] + prime[2] + prime[3] + prime[4] << '\n';
	*/

	/*constexpr int array[]{4,6,7,3,8,2,1,9,5};
	int arrayLength{ std::size(array) };

	int input{};

	while (true) {
		std::cout << "Enter a value between 1 and 9: ";
		std::cin >> input;
		if (input <= 9 && input >= 1) {
			break;
		}

		std::cout << '\n';
	}

	for (int i{0}; i < arrayLength; ++i)
	{
			   if (array[i] == input)
			{
				std::cout << "The number " << input << " has index " << i << '\n';
				break;
			}
	}    */

	bubbleSort();

	int number{};
	do
	{
		std::cout << "Enter a number between 1 and 9: ";
		std::cin >> number;

		if (std::cin.fail())
			std::cin.clear();


		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	} while (number < 1 || number > 9);


	constexpr int array[]{ 4,6,7,3,8,2,1,9,5 };

	for (int index{ 0 }; index < std::size(array); ++index)
	{
		std::cout << array[index] << ' ';
	}

	std::cout << '\n';

	for (int index{ 0 }; index < std::size(array); ++index)
	{
		if (array[index] == number)
		{
			std::cout << "The number " << number << " has index " << index << '\n';
			break;
		}
	}

	return 0;
}
