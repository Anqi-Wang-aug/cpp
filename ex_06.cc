/* This program:
 * 1. asks two numbers from the user
 * 2. calculates range between the two input numbers
 * 3. prints out all numbers within the range
 */
 
#include <iostream>

int main()
{
	int low, high;
	std::cout << "Input 2 numbers" << std::endl;
	std::cin >> low >> high;

	while (low <= high-2)
	{
		low++;
		std::cout << low << std::endl;
	}
	std::cout << "Program finished" << std::endl;
}
//Finished. Tea meow meow
