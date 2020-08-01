//This program replace a character with another character also in the string and vice versa. 
#include<iostream>
#include<string>
using namespace std;

string swap(string s, char c1, char c2);
bool check(string s, char c1, char c2);

int main()
{
	
	char c1;
	char c2;
	string s;
	
	cout << "Enter a string: ";
	getline(cin, s);
	cout << "Enter swap character no.1: ";
	cin >> c1;
	cout << "Enter swap character no.2: ";
	cin >> c2;
	if(check(s, c1, c2)==false) cout << "String invalid. cannot be swapped\n";
	else cout << "Swapped string: " << swap(s, c1, c2) << endl;
	
	return 0;
}

//The swapping function
string swap(string s, char c1, char c2)
{
	for(int i = 0; i<s.length(); i++)
	{
		if(s[i]==c1) s[i]=c2;
		else if(s[i]==c2) s[i]=c1;
	}
	return s;
}

//Check if two characters 
bool check(string s, char c1, char c2)
{
	auto r = s.find(c1);
	if(r==string::npos) return false;
	else
	{
		r=s.find(c2);
		if(r==string::npos) return false;
		else return true;
	}
}