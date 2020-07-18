/* This program:
 * 1. reads a string from input
 * 2. counts number of o and x in the string
 * 3. adds number of occurance of o to score 
 * 4. do nothing when read an x
 */
 
#include <iostream>
#include <cstring>
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	
	int score = 0;
	int o_occured = 0;
	char readable[100];
	
	cout << "Enter a string with only o and x\n";
	cin >> readable;
	
	for(int i = 0; i<strlen(readable); i++)
	{
		if(readable[i]=='o')
		{
			o_occured++;
			score = score+o_occured;
		}
	}
	
	cout << "The score of the string is " << score << endl;
}