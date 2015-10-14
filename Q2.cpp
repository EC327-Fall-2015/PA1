#include <iostream>
#include <iomanip> // setprecision()
using namespace std;

int main()
{

	double temp, ctemp;  // declares the input temperature and the converted temperature variables
	int ctype;		// declares the conversion type variable

	cout << "Celsius to Fahrenheit (enter 0) \nCelsius to Kelvin (enter 1) \nFahrenheit to Celsius (enter 2)"
		<< "\nFahrenheit to Kelvin (enter 3) \nKelvin to Celsius (enter 4) \nKelvin to Fahrenheit (enter 5) \nConversion type: ";
	cin >> ctype; // displays options and then prompts the user to pick one

	while (ctype < 0 || ctype > 5 || cin.fail()) // if they choose something that's not on the list
	{
		cout << "Wrong input, try again: ";
		cin.clear();
		cin.ignore(9999, '\n');
		cin >> ctype;
	}
	if (ctype == 0 || ctype == 1)	// code for the different valid options
	{
		cout << "Enter the amount in Celsius: ";
		cin >> temp;
		while (cin.fail()) // while input is not of type double
		{
			cout << "Wrong input, try again: ";
			cin.clear();
			cin.ignore(9999, '\n');
			cin >> temp;
		}
		if (ctype == 0)
		{
			ctemp = (temp * 1.8) + 32;
			cout << setprecision(3) << fixed << temp << " Celsius is " << ctemp << " Fahrenheit.";
		}
		else if (ctype == 1)
		{
			ctemp = temp + 273.15;
			cout << setprecision(3) << fixed << temp << " Celsius is " << ctemp << " Kelvin.";
		}
	}
	else if (ctype == 2 || ctype == 3)
	{
		cout << "Enter the amount in Fahrenheit: ";
		cin >> temp;
		while (cin.fail()) // while input is not of type double
		{
			cout << "Wrong input, try again: ";
			cin.clear();
			cin.ignore(9999, '\n');
			cin >> temp;
		}
		if (ctype == 2)
		{
			ctemp = ((temp - 32) * 5) / 9;
			cout << setprecision(3) << fixed << temp << " Fahrenheit is " << ctemp << " Celsius.";
		}
		else if (ctype == 3)
		{
			ctemp = ((temp + 459.67) * 5) / 9;
			cout << setprecision(3) << fixed << temp << " Fahrenheit is " << ctemp << " Kelvin.";
		}
	}
	else if (ctype == 4 || ctype == 5)
	{
		cout << "Enter the amount in Kelvin: ";
		cin >> temp;
		while (cin.fail()) // while input is not of type double
		{
			cout << "Wrong input, try again: ";
			cin.clear();
			cin.ignore(9999, '\n');
			cin >> temp;
		}
		if (ctype == 4)
		{
			ctemp = temp - 273.15;
			cout << setprecision(3) << fixed << temp << " Kelvin is " << ctemp << " Celsius.";
		}
		else if (ctype == 5)
		{
			ctemp = (temp * 1.8) - 459.67;
			cout << setprecision(3) << fixed << temp << " Kelvin is " << ctemp << " Fahrenheit.";
		}
	}
	cout << endl;
	return 0;
}