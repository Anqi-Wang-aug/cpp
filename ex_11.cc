/* This program
 * 1. reads integers from user input
 * 2. stores them in a vector
 * 3. prints out all elements in the vector
 */
#include <iostream>
#include <vector>
int main(){
	using std::cin;
	using std::cout;
	using std::endl;
	using std::vector;
	
	vector<int> vi;
	int tp;
	
	while(cin >> tp){
		vi.push_back(tp);
	}
	
	for(int i = 0; i<vi.size(); i++)
	{
		cout << vi[i] << endl;
	}
}