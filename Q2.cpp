//Emily Ubik
//Programming Assignment 1
//Question 2

#include <iostream>

#include <cmath> //I didn't use this. It's here just in case.

#include <iomanip> //I used this to provide the correct number of decimal places. It sets the precision to three.

using namespace std;

int main()
{
	double conversion;

	double input_temp;

	double fahrenheit;

	double celsius;

	double kelvin;

	cout << "Celsius to Fahrenheit (enter 0)" << endl << "Celsius to Kelvin (enter 1)" << endl << "Fahrenheit to Celsius (enter 2)" << endl << "Fahrenheit to Kelvin (enter 3)" << endl << "Kelvin to Celsius (enter 4)" << endl << "Kelvin to Fahrenheit (enter 5)" << endl;

	cout << "Conversion type: ";

do
{
	cin >> conversion;	

	if ( conversion == 0 )
	{
		cout << "Enter the amount in Celsius: ";

		cin >> input_temp;

		fahrenheit = (9.0 / 5.0) * input_temp + 32.0;

		cout << input_temp << " Celsius is ";

		std::cout << std::fixed << std::setprecision(3) << fahrenheit << " Fahrenheit." << std::endl;

		return 0;
	}

	else if ( conversion == 1)
	{
		cout << "Enter the amount in Celsius: ";

		cin >> input_temp;

		kelvin = input_temp + 273.15;

		cout << input_temp << " Celsius is ";

		std::cout << std::fixed << std::setprecision(3) << kelvin << " Kelvin." << std::endl;

		return 0;
	}

	else if ( conversion == 2)
	{
		cout << "Enter the amount in Fahrenheit: ";

		cin >> input_temp;

		celsius = (input_temp - 32.0) * (5.0 / 9.0);

		cout << input_temp << " Fahrenheit is ";

		std::cout << std::fixed << std::setprecision(3) << celsius << " Celsius." << std::endl;

		return 0;
	}

	else if ( conversion == 3)
	{
		cout << "Enter the amount in Fahrenheit: ";

		cin >> input_temp;

		kelvin = (input_temp - 32.0) * (5.0 / 9.0) + 273.15;

		cout << input_temp << " Fahrenheit is ";

		std::cout << std::fixed << std::setprecision(3) << kelvin << " Kelvin." << std::endl;

		return 0;
	}

	else if ( conversion == 4)
	{
		cout << "Enter the amount in Kelvin: ";

		cin >> input_temp;

		celsius = input_temp - 273.15;

		cout << input_temp << " Kelvin is ";

		std::cout << std::fixed << std::setprecision(3) << celsius << " Celsius." << std::endl;

		return 0;
	}

	else if ( conversion == 5)
	{
		cout << "Enter the amount in Kelvin: ";

		cin >> input_temp;

		fahrenheit = (input_temp - 273.15) * (9.0 / 5.0) + 32.0;

		cout << input_temp << " Kelvin is ";

		std::cout << std::fixed << std::setprecision(3) << fahrenheit << " Fahrenheit." << std::endl;
	
		return 0;
	}

	else
	{
		cout << "Wrong input, try again: ";
	}

}
while (conversion != 1 || conversion != 2 || conversion != 3 || conversion != 4 || conversion != 5);

return 0;	
}
