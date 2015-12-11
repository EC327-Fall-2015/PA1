#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	int n;
	double ideg, fdeg;
	
	cout << "Celsius to Fahrenheit (enter 0)" << endl;
	cout << "Celsius to Kelvin (enter 1)" << endl;
	cout << "Fahrenheit to Celsius (enter 2)" << endl;
	cout << "Fahrenheit to Kelvin (enter 3)" << endl;
	cout << "Kelvin to Celsius (enter 4)" << endl;
	cout << "Kelvin to Fahrenheit (enter 5)" << endl;
	cout << "Conversion type: ";
	cin >> n;
	
	// Error-checks user input. If n is < 0 or > 5, then user needs to enter another input.
	// If cin.fail() is true, then that an input of invalid type was entered.
	while (n < 0 || n > 5 || cin.fail() ) 
	{
		cin.clear(); // Clears the fail bit
		cin.ignore(10000,'\n'); // Ignores other values on same line
		cout << "Wrong input, try again: ";
		cin >> n;
	}
	
	switch (n)
	{
		case 0:
		{
			cout << "Enter the amount in Celsius: ";
			cin >> ideg;

			while (cin.fail())
			{
				cin.clear();
				cin.ignore(10000,'\n');
				cout << "Wrong input, try again: ";
				cin >> ideg;
			}
			
			
			fdeg = ideg * (9/5) + 32;
			cout << setprecision(3) << fixed << ideg << " Celsius is " << fdeg << " Fahrenheit.";
			break;
		}
		case 1:
		{
			cout << "Enter the amount in Celsius: ";
			cin >> ideg;
			
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(10000,'\n');
				cout << "Wrong input, try again: ";
				cin >> ideg;
			}
			
			fdeg = ideg + 273.15;
			cout << setprecision(3) << fixed << ideg << " Celsius is " << fdeg << " Kelvin.";
			break;
		}
		case 2:
		{
			cout << "Enter the amount in Fahrenheit: ";
			cin >> ideg;
			
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(10000,'\n');
				cout << "Wrong input, try again: ";
				cin >> ideg;
			}
			
			fdeg = ideg * ((5.0/9.0) - 32);
			cout << setprecision(3) << fixed << ideg << " Fahrenheit is " << fdeg << " Celsius.";
			break;
		}
		case 3:
		{
			cout << "Enter the amount in Fahrenheit: ";
			cin >> ideg;
			
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(10000,'\n');
				cout << "Wrong input, try again: ";
				cin >> ideg;
			}
			
			fdeg = (5.0/9.0)*(ideg - 32) + 273.15;
			cout << setprecision(3) << fixed << ideg << " Fahrenheit is " << fdeg << " Kelvin.";
			break;
		}
		case 4:
		{
			cout << "Enter the amount in Kelvin: ";
			cin >> ideg;
			
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(10000,'\n');
				cout << "Wrong input, try again: ";
				cin >> ideg;
			}
			
			fdeg = ideg - 273.15;
			cout << setprecision(3) << fixed << ideg << " Kelvin is " << fdeg << " Celsius.";
			break;
		}
		case 5:
		{
			cout << "Enter the amount in Kelvin: ";
			cin >> ideg;
			
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(10000,'\n');
				cout << "Wrong input, try again: ";
				cin >> ideg;
			}
			
			fdeg = (9.0/5.0)*(ideg - 273.15) + 32;
			cout << setprecision(3) << fixed << ideg << " Kelvin is " << fdeg << " Fahrenheit.";
			break;
		}
			
	}
	
	cout << endl;
	return 0;
}

