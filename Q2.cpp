#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
	//Define variable for conversion type and temp and temp to output
	int type;
	double temp;
	double newTemp;

	//Tell the user what options are available and get input from user
	cout << "Celsius to Fahrenheit (enter 0)\nCelsius to Kelvin (enter 1)\nFahrenheit to Celsius (enter 2)\nFahrenheit to Kelvin (enter 3)\nKelvin to Celsius (enter 4)\nKelvin to Fahrenheit (enter 5)" << endl << "Conversion type: ";
	cin >> type;

	//Check if user fails to enter a number or the number is out of range of the options
	while (cin.fail() || type < 0 || type > 5) {
		//Inform the user of their mistake and ask them to try again
		cout << "Wrong input, try again: ";
		cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cin >> type;
	}

	//Ask the user to enter the temperature they want to convert and specify what unit they should enter it in
	cout << "Enter the amount in ";
	if (type <= 1) {
		cout << "Celsius: ";
	} else if (type == 2 || type == 3) {
		cout << "Fahrenheit: ";
	} else {
		cout << "Kelvin: ";
	}
	//Get temp from user
	cin >> temp;

	//Error check if user doesn't input a number and ask them to try again
	while (cin.fail()) {
		cout << "Wrong input, try again: ";
		cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cin >> temp;
	}

	//Perform operation based on option they had chose before
	switch (type) {
		case 0:
			newTemp = temp * 9/5 + 32;
			break;
		case 1: 
			newTemp = temp + 273.15;
			break;
		case 2:
			newTemp = (temp - 32) * 5/9;
			break;
		case 3:
			newTemp = (temp + 459.67) * 5/9;
			break;
		case 4: 
			newTemp = temp - 273.15;
			break;
		case 5:
			newTemp = temp * 9/5 - 459.67;
			break;
	}

	//Output the first temp inputted by the user
	cout << fixed << setprecision(3) << temp;

	//Output the unit of the first temp inputted
	if (type <= 1) {
		cout << " Celsius";
	} else if (type == 2 || type == 3) {
		cout << " Fahrenheit";
	} else if (type >= 3) {
		cout << " Kelvin";
	}

	//Output the new temperature calculated for the user
	cout << " is " << fixed << setprecision(3) << newTemp;

	//Output the new units for the new temperature
	if (type == 2 || type == 4) {
		cout << " Celsius";
	} else if (type == 0 || type == 5) {
		cout << " Fahrenheit";
	} else {
		cout << " Kelvin";
	}

	//End with period and new line
	cout << ".\n";

	return 0;
}

