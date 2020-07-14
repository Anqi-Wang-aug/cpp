/* This program:
 * 1. creates an array
 * 2. assigns values by positions
 * 3. copies all elements in this array to another
 * 4. checks if two arrays are the same
 * 5.1. if two arrays are the same, says they are equal and prints out all elements in the array
 * 5.2. if two arrays are not the same, says they are not
 */
#include <iostream>
 
int main()
{
	using std::cout;
	using std::endl;
	
	constexpr unsigned length = 10;
	int a[length];
	int a1[length];
	int value = 0;
	
	for(int i = 0; i<length; i++)
	{
		a[i] = i;
		 a1[i] = a[i];
	}
	
	for(int i = 0; i<length; i++)
	{
		if(a[i]!=a1[i])
		{
			cout << "The two arrays are not the same" << endl;
			goto exit;
		}
	}
	
	cout << "The two arrays are the same" << endl;
	for(auto i : a)
	{
		cout << "The array element at position " << i << " is " << i << endl;
	}
	
exit:
	return 0;
}