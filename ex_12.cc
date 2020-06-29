/* The program: 
 * 1. reads words from input
 * 2. ->uppercase
 * 3. stores them in a vector
 * 4. prints out eight words each line
 */
 
#include <iostream>
#include <string>
#include <vector>
#define LINE 8
#define NEW_LINE '\n'

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::vector;
	using std::string;
	
	string tmp;
	int count = 0;
	vector<string> vs;
	
	while(cin >> tmp){
		for(int i = 0; i<tmp.size(); i++)
		{
			tmp[i] = toupper(tmp[i]);
		}
		vs.push_back(tmp);
		
	}		
	
	for(int i = 0; i<vs.size(); i++){
		cout << vs[i] << " ";
		count++;
		if(count == LINE){
			cout << NEW_LINE;
			count = 0;
		}
	}
}
//Finished. Tea meow meow

