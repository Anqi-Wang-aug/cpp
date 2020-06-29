/* The program
 * 1. converts all chars (and only chars) in a string to x 
 * 2. prints out the altered string at every iteration
 */
#include <iostream>
 
int main(){
	using std::cout;
	using std::endl;
	using std::string;
	
	string temp = "Hello World";
	auto total = temp.size();
	int count = 0;
	
	while(count != total){
		if(isalpha(temp[count])){
			temp[count] = 'x';
		}
		cout << temp << endl;
		count++;
	}
}
//Finished. Teatime meow meow
