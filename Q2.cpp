#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int conversiontype;
	double temperature;
	double conversion;
	
	//Prompting user to enter conversion type
	cout << "Celsius to Fahrenheit (enter 0)" << endl;
	cout << "Celsius to Kelvin (enter 1)" << endl;
	cout << "Fahrenheit to Celsius (enter 2)" << endl;
	cout << "Fahrenheit to Kelvin (enter 3)" << endl;
	cout << "Kelvin to Celsius (enter 4)" << endl;
	cout << "Kelvin to Fahrenheit (enter 5)" << endl;
	cout << "Conversion type: ";
	cin >> conversiontype;

	//Checking to see if user entered correct conversion type
	while (conversiontype < 0 || conversiontype > 5 || cin.fail())
	{
		cin.clear();
		cin.ignore(20, '\n');
		cout << "Wrong input, try again: ";
		cin >> conversiontype;
	}
	
	//Prompting user to enter in temperature based on conversion type
	switch (conversiontype)
	{
		case 0:
		{
			cout << "Enter the amount in Celsius: ";
			cin >> temperature;
			//checking to see if user is entering in a temperature
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(20, '\n');
				cout << "Wrong input, try again: ";
				cin >> temperature;
			}
			//converting celsius to fahrenheit
			conversion = temperature*(1.8) + 32;
			cout << fixed << setprecision(3) << temperature <<
			" Celsius is " << conversion << " Fahrenheit." << endl;
			break;
		}
		case 1:
		{
			cout << "Enter the amount in Celsius: ";
			cin >> temperature;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(20, '\n');
				cout << "Wrong input, try again: ";
				cin >> temperature;
			}
			//converting celsius to kelvin
			conversion = temperature + 273.15;
			cout << fixed << setprecision(3) << temperature <<
			" Celsius is " << conversion << " Kelvin." << endl;
			break;
		}
		case 2:
		{
			cout << "Enter the amount in Fahrenheit: ";
			cin >> temperature;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(20, '\n');
				cout << "Wrong input, try again: ";
				cin >> temperature;
			}
			//converting fahrenheit to celsius
			conversion = (temperature - 32)*(0.555556);
			cout << fixed << setprecision(3) << temperature <<
			" Fahrenheit is " << conversion << " Celsius." << endl;
			break;
		}
		case 3:
		{
			cout << "Enter the amount in Fahrenheit: ";
			cin >> temperature;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(20, '\n');
				cout << "Wrong input, try again: ";
				cin >> temperature;
			}
			//converting fahrenheit to kelvin
			conversion = (temperature - 32)*(0.555556) + 273.15;
			cout << fixed << setprecision(3) << temperature <<
			" Fahrenheit is " << conversion << " Kelvin." << endl;
			break;
		}
		case 4:
		{
			cout << "Enter the amount in Kelvin: ";
			cin >> temperature;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(20, '\n');
				cout << "Wrong input, try again: ";
				cin >> temperature;
			}
			//converting kelvin to celsius
			conversion = temperature - 273.15;
			cout << fixed << setprecision(3) << temperature <<
			" Kelvin is " << conversion << " Celsius." << endl;
			break;
		}
		case 5:
		{
			cout << "Enter the amount in Kelvin: ";
			cin >> temperature;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(20, '\n');
				cout << "Wrong input, try again: ";
				cin >> temperature;
			}
			//converting kelvin to fahrenheit
			conversion = (temperature - 273.15)*(1.8) + 32;
			cout << fixed << setprecision(3) << temperature <<
			" Kelvin is " << conversion << " Fahrenheit." << endl;
			break;
		} 	
	}
	return 0;
}

