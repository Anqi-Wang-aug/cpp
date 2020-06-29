/* This is a trival test
 */
 
#include <iostream>
int main(){
	using std::cout;
	using std::endl;
	using std::string;
	
	string s;
	cout << s[0] <<endl;
	return 0;
}

/* I just wanted to see if something would be printed. 
 * And, as my hypothesis, nothing. Presumably it's because it is just an empty string.
 * Tried using s[1] instead of s[0]. Result is the same
 * However, it also does not throw any errors in either case.
 * As a lazy programmer, this is called finished. Tea meow meow
 */