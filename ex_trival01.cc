/* This program  tests function string s_n (num, char)
 * 1. makes such a string called temp
 * 2. prints out temp
 * 3. prints out the size of temp
 */
#include <string>
#include <iostream>

int main(){
	using std::cout;
	using std::endl;
	using std::string;
	
	string temp (100, 'w');
	cout << temp << endl;
	auto len = temp.size();
	cout << len << endl;
	return 0;
}

//Finished. Teatime meow meow
