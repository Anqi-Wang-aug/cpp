/* This program:
 * 1. adds numbers from 50 to 100 
 * 2. prints out the value of the sum
 */

#include<iostream>

int main(){
	int val = 50, sum = 0;
	while(val <= 100){
		sum+=val;
		val++;
	}
	std::cout << "Sigma from 50 to 100 is " << sum << std::endl;
	return 0;
}

//Finished. Tea meow meow