#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctype.h>
using namespace std;

int main()
{
	int type;
	double t1;
	double t2;
	//Print instructions and ask the user to enter a conv. type
	cout << "Celsius to Fahrenheit (enter 0)" << endl
		 << "Celsius to Kelvin (enter 1)" << endl
		 << "Fahrenheit to Celsius (enter 2)" << endl
		 << "Fahrenheit to Kelvin (enter 3)" << endl
		 << "Kelvin to Celsius (enter 4)" << endl
		 << "Kelvin to Fahrenheit (enter 5)" << endl;
	bool correct = false;
	cout << "Conversion type: ";	 
	cin >> type;
	// Error checking using cin.fail
	while (!correct)
	{
		if (cin.fail())
		{
			cout << "Wrong input, try again: ";
			cin.clear(); //Clear the value in cin
			cin.ignore(100,'\n'); //Ignore if a string of upto 100 characters
			cin >> type;
			correct = false;
		}

		else 
		{
			if (type > 5 || type < 0)
			{
				cout << "Wrong input, try again: ";
				cin >> type;
				correct = false;
			}
			else
				correct =true;
			
		}
		
		
	}
	//Using switch to switch between 6 conversions
	switch (type)
	{
		case 0: cout << "Enter the amount in Celsius: ";
				cin >> t1;
				// Error checking with cin.fail()
				while (cin.fail())
				{
					cout << "Wrong input, try again: ";
				    cin.clear();
					cin.ignore(100,'\n');
				    cin >> t1;
				}
				t2 = t1 * 1.800 + 32;
				// Setprecision used to display output in correct format
				cout << fixed << setprecision(3) << t1 
					 << " Celsius is " << fixed << setprecision(3) << t2 
					 << " Fahrenheit." << endl;
				break;		
		case 1: cout << "Enter the amount in Celsius: ";
				cin >> t1;
				while (cin.fail())
				{
					cout << "Wrong input, try again: ";
				    cin.clear();
					cin.ignore(100,'\n');
				    cin >> t1;
				}
				t2 = t1 + 273.150;
				cout << fixed << setprecision(3) << t1 
				<< " Celsius is " << fixed << setprecision(3) << t2 
				<< " Kelvin." << endl;
				break;			
		case 2: cout << "Enter the amount in Fahrenheit: ";
				cin >> t1;
				while (cin.fail())
				{
					cout << "Wrong input, try again: ";
				    cin.clear();
					cin.ignore(100,'\n');
				    cin >> t1;
				}
				t2 = (t1 - 32) / 1.800;
				cout << fixed << setprecision(3) << t1 
				<< " Fahrenheit is " << fixed << setprecision(3) << t2 
				<< " Celsius." << endl;
				break;
		case 3: cout << "Enter the amount in Fahrenheit: ";
				cin >> t1;
				while (cin.fail())
				{
					cout << "Wrong input, try again: ";
				    cin.clear();
					cin.ignore(100,'\n');
				    cin >> t1;
				}
				t2 = ((t1 - 32) / 1.800) + 273.150;
				cout << fixed << setprecision(3) << t1 
				<< " Fahrenheit is " << fixed << setprecision(3) << t2 
				<< " Kelvin." << endl;
				break;
		case 4: cout << "Enter the amount in Kelvin: ";
				cin >> t1;
				while (cin.fail())
				{
					cout << "Wrong input, try again: ";
				    cin.clear();
					cin.ignore(100,'\n');
				    cin >> t1;
				}
				t2 = t1 - 273.150;
				cout << fixed << setprecision(3) << t1 
				<< " Kelvin is " << fixed << setprecision(3) << t2 
				<< " Celsius." << endl;
				break;			
		case 5: cout << "Enter the amount in Kelvin: ";
				cin >> t1;
				while (cin.fail())
				{
					cout << "Wrong input, try again: ";
				    cin.clear();
					cin.ignore(100,'\n');
				    cin >> t1;
				}
				t2 = (t1 - 273.150) * 1.800 + 32;
				cout << fixed << setprecision(3) << t1 
				<< " Kelvin is " << fixed << setprecision(3) << t2 
				<< " Fahrenheit." << endl;
				break;							
	}
	return 0;
}