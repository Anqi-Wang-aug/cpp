/* This program:
 * 1. reads a chemical formula from the input
 * 2. calculates the molecular mass 
 */
 
#include <iostream>
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	
	float mass;
	char formula[100];
	char *atom, *num;
	const float c_mass = 12.01, h_mass = 1.008, o_mass = 16.00, n_mass = 14.01;
	const char carbon = 'C', hydro = 'H', oxy = 'O', nitro = 'N';
	const int ascii_interval = 48;
	
	cout << "Enter a chemical formula: \n";
	cin >> formula;
	
	atom = formula;
	num = atom+1;
	
	//Read char from the string
	while (*num != '\0' && *atom != '\0')
	{
		//case 1: single element
		if(*num==carbon || *num==hydro || *num==oxy || *num==nitro)
		{
			if(*atom==carbon )
			{
				mass = mass+c_mass;
			}
			else if (*atom==hydro)
			{
				mass = mass+h_mass;
			}
			else if (*atom==oxy)
			{
				mass = mass+o_mass;
			}
			else 
			{
				mass = mass+n_mass;
			}
			atom++;
			num++;
		}
		//case2: multiple elements
		else
		{
			int n = (*num)-ascii_interval;
			if(*atom==carbon )
			{
				mass = mass+c_mass*n;
			}
			else if (*atom==hydro)
			{
				mass = mass+h_mass*n;
			}
			else if (*atom==oxy)
			{
				mass = mass+o_mass*n;
			}
			else 
			{
				mass = mass+n_mass*n;
			}
			atom = atom+2;
			num = num+2;
		}
	}
	
	//dealing with the ending char if it is a single element
	if(*atom==carbon)
	{
		mass = mass+c_mass;
	}
	else if (*atom==hydro)
	{
		mass = mass+h_mass;
	}
	else if (*atom==oxy)
	{
		mass = mass+o_mass;
	}
	else if (*atom==nitro)
	{
		mass = mass+n_mass;
	}
	cout << "The molecular mass of the input chemical formula is : " << mass << endl;
	return 0;
}