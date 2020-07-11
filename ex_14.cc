/* This program:
 * 1. checks a given character in a given string
 */
 
#include <iostream>

int main(){
	using std::string;
	using std::cin;
	using std::cout;
	
	string s = "Have a nice day!";
	char e;
	cout << "Enter a letter: ";
	cin >> e;
	
	auto begin = s.begin(), end = s.end();
	while(*begin!=*end && *begin!=e){
		++begin;
	}
	if(*begin==*end) cout <<"Sorry but the letter is not in the string";
	else cout <<"Yeah the letter is in the string";
	return 0;
}