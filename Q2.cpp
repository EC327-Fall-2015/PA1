#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int conversion;
	double amount;
	double final;
	cout << "Celsius to Fahrenheit (0)" << endl;
	cout << "Celsius to Kelvin (1)" << endl;
	cout << "Fahrenheit to Celsius (2)" << endl;
	cout << "Fahrenheit to Kelvin (3)" << endl;
	cout << "Kelvin to Celsius (4)" << endl;
	cout << "Kelvin to Fahrenheit (5)" << endl;
	cout << "Conversion type: ";
	cin >> conversion;
	// Check the input to make sure it's between 0 and 5 for the conversion
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(20, '\n');
		cout << "Wrong input, try again; ";
		cin >> conversion;
	} while (cin.fail()) ; //For letters
	
	while (conversion < 0 || conversion > 5) // For numbers
	{
		cout << "Wrong input, try again: ";
		cin >> conversion;
	}		
	
	if (conversion == 0)
	{
		cout << "Enter the amount in Celsius" << endl;
		cin >> amount;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(20, '\n');
			cout << "Wrong input, try again; ";
			cin >> amount;
		} 
		final = (amount * 9/5) + 32;  //Celsius to Fahrenheit
		cout << amount << " Celsius is " << final << " in Fahrenheit" << endl;
	}
	if (conversion == 1)
	{
		cout << "Enter the amount in Celsius" << endl;
		cin >> amount;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(20, '\n');
			cout << "Wrong input, try again; ";
			cin >> amount;
		}
		final = amount + 273.15;
		cout << amount << " Celsius is " << final << " in Kelvin" << endl;

	}
	if (conversion == 2)
	{
		cout << "Enter the amount in Fahrenheit" << endl;
		cin >> amount;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(20, '\n');
			cout << "Wrong input, try again; ";
			cin >> amount;
		} 
		final = (amount - 32) * 5/9;
		cout << amount << " Fahrenheit is " << final << " in Celsius" << endl;
	}
	if (conversion == 3)
	{
		cout << "Enter the amount in Fahrenheit" << endl;
		cin >> amount;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(20, '\n');
			cout << "Wrong input, try again; ";
			cin >> amount;
		} 
		final = ((amount - 32) * 5/9) +273.15;
		cout << amount << " Fahrenheit is " << final << " in Kelvin" << endl;
	}
	if (conversion == 4)
	{
		cout << "Enter the amount in Kelvin" << endl;
		cin >> amount;
		while (cin.fail()) 
		{
			cin.clear();
			cin.ignore(20, '\n');
			cout << "Wrong input, try again; ";
			cin >> amount;
		} 
		final = amount - 273.15;
		cout << amount << " Kelvin is " << final << " in Celsius" << endl;
	}
	if (conversion == 5)
	{
		cout << "Enter the amount in Kelvin" << endl;
		cin >> amount;
		while (cin.fail()) 
		{
			cin.clear();
			cin.ignore(20, '\n');
			cout << "Wrong input, try again; ";
			cin >> amount;
		} while (cin.fail()) ;
		final = ((amount - 273.15) * 9/5) +32;
		cout << amount << " Kelvin is " << final << " in Fahrenheit" << endl;
	}
	


return 0;






}