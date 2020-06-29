/* This program
 * 1. reads numbers from input_iterator
 * 2. sums them upp
 * 3. prints out the result when no more numbers are input
 */
#include <iostream>
 
int main()
{
	int val, sum = 0;
	while(std::cin >> val)
	{	
		sum+=val;
	}
	std::cout << "The sum is " << sum << std::endl;
	return 0;
}
//Finished. Teatime meow meow
