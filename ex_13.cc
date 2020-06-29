/* This program:
 * 1. reads integers from user input_iterator
 * 2. stores them in a vector
 * 3. adds up two adjecent numbers
 * 4. prints out the sums
 * 5. sums up the first and the last numbers
 * 6. sums up the second and the second last numbers
 */
 
#include <iostream>
#include <vector>

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::vector;
	
	vector<int> vi;
	int tmp;
	
	while (cin >> tmp)
	{
		vi.push_back(tmp);
	}
	
	for(int i = 0; i<vi.size(); i++)
	{	
		int j = i+1;
		if(j<vi.size()){
			int sum = vi[i]+vi[j];
			cout << "The sum of numbers at position " << i << " and " << j << " is " << sum << endl;
		}
	}
	
	int sum_fl = vi[0]+vi[vi.size()-1];
	int sum_ssl = vi[1]+vi[vi.size()-2];
	
	cout << "The sum of numbers at the first and last positions is " << sum_fl <<endl;
	cout << "The sum of numbers at the second and the second last positions is " << sum_ssl <<endl;
}
//Finished. Tea meow meow
