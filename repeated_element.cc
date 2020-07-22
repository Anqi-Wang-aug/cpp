/* find the length of a repeated element in a string
 * e.g. wordforword, repeated element = "word", length = 2
 * The program finds out the length of period inside a string
 */
 
#include<iostream>

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	
	char input_string[100];
	char *f, *s;
	int length = 0;

	cout << "Enter something: " << endl;
	cin >> input_string;
	f = input_string;
	s = f+1;
	
	while(*s!='\0')
	{
		if(*f==*s && *(f-1)!=*f)
		{
			length++;
			f++;
		}
		s++;
	}
	
	cout << "Period: " << length << endl;
	
	return 0;
}