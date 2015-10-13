
//this program allows the user to decide a temperature input unit and output unit, and then takes a temperature from the user and converts the units as specified
#include <iostream>
#include "math.h"
#include <iomanip>
using namespace std;
//include necessary libraries and header files

int main(){
	//declare the variables
	int val;
	double temp1;
	double temp2;

	//print out the unit conversions available to the user, and the corresponding index
	cout << "Celsius to Farenheit (enter 0)" << endl;
	cout << "Celsius to Kelvin (enter 1)" << endl;
	cout << "Farenheit to Celsius (enter 2)" << endl;
	cout << "Farenheit to Kelvin (enter 3)" << endl;
	cout << "Kelvin to Celsius (enter 4)" << endl;
	cout << "Kelvin to Farenheit (enter 5)" << endl;

	//prompt user for index
	cout << "Conversion type: ";
	cin >> val;

	//the loop that will repeat if an invalid conversion index is entered, an error message
	while (val < 0 || val > 5)
	{
		cout << "Wrong input, try again: ";
		cin >> val;
	}

	//if statements give the conditions based on each of the prescribed index values; each statement includes a conversion equation and a print out of the original unit temperature and new unit temperature
	if (val == 0)
	{
		cout << "Enter the amount in Celsius: ";
			cin >> temp1;
		temp2 = temp1*1.8 + 32;
		cout << fixed << setprecision(3) << temp1 << "Celsius is " << fixed << setprecision(3) << temp2 << " Farenheit." << endl;
	}
	else if (val == 1)
	{
		cout << "Enter the amount in Celsius: ";
			cin >> temp1;
		temp2 = temp1 + 273.15;
		cout << fixed << setprecision(3) << temp1 << "Celsius is " << fixed << setprecision(3) << temp2 << " Kelvin." << endl;
	}
	else if (val == 2)
	{
		cout << "Enter the amount in Farenheit: ";
			cin >> temp1;
		temp2 = (temp1 - 32)/1.8;
		cout << fixed << setprecision(3) << temp1 << "Farenheit is " << fixed << setprecision(3) << temp2 << " Celsius." << endl;
	}
	else if (val == 3)
	{
		cout << "Enter the amount in Farenheit: ";
			cin >> temp1;
		temp2 = (temp1 + 459.67)*5/9;
		cout << fixed << setprecision(3) << temp1 << "Farenheit is " << fixed << setprecision(3) << temp2 << " Kelvin." << endl;
	}
	else if (val == 4)
	{
		cout << "Enter the amount in Kelvin: ";
			cin >> temp1;
		temp2 = temp1 - 273.15;
		cout << fixed << setprecision(3) << temp1 << "Kelvin is " << fixed << setprecision(3) << temp2 << " Celsius." << endl;
	}
	else if (val == 5)
	{
		cout << "Enter the amount in Kelvin: ";
			cin >> temp1;
		temp2 = temp1*1.8 - 459.67;
		cout << fixed << setprecision(3) << temp1 << "Kelvin is " << fixed << setprecision(3) << temp2 << " Farenheit." << endl;
	}

	return 0;
}