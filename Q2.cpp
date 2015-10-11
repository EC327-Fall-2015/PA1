#include <iostream>
using namespace std;
#include <math.h>
#include <iomanip> //Set precision

int main() {

	int choice;
	double output;
	double input;

	cout.setf(ios::fixed); // Fixed output decimal
	cout.precision(3); // Set output digit length

	cout << "Celsius to Fahrenheit (enter 0)\n" << "Celsius to Kelvin (enter 1)\n"
		<< "Fahrenheit to Celsius (enter 2)\n"
		<< "Fahrenheit to Kelvin (enter 3)\n" << "Kelvin to Celsius (enter 4)\n"
		<< "Kelvin to Fahrenheit (enter 5)\n";

	cout<< "Conversion type: ";
	cin>> choice; 

	
	while (choice <0 || choice >5 || !cin)
	{
		cin.clear();
		cin.ignore(500,'\n');
		cout << "Wrong input, try again: ";
		cin >> choice;
	} 

	
	switch (choice)
	{

	case 0:
	{
		cout << "Enter the amount in Celsius: ";
		cin >> input;
		
		while (!cin)
		{
			cin.clear();
			cin.ignore(500,'\n');
			cout << "Wrong input, try again: ";
			cin >> input;
		} 
		
		output = input * 1.8 + 32.0;
		cout << input << " Celsius is " << output << " Fahrenheit.\n";
		return 0;
	}

	case 1:
	{
		cout << "Enter the amount in Celsius: ";
		cin >> input;

		while (!cin)
		{
			cin.clear();
			cin.ignore(500,'\n');
			cout << "Wrong input, try again: ";
			cin >> input;
			
		} 

		output = input + 273.15;
		cout << input << " Celsius is " << output << " Kelvin.\n";
		return 0;
	}

	case 2:
	{
		cout << "Enter the amount in Fahrenheit: ";
		cin >> input;

		while (!cin)
		{
			cin.clear();
			cin.ignore(500,'\n');
			cout << "Wrong input, try again: ";
			cin >> input;
		} 

		output = (input - 32) / 1.8;
		cout << input << " Fahrenheit is " << output << " Celsius.\n";
		return 0;
	}

	case 3:
	{
		cout << "Enter the amount in Fahrenheit: ";
		cin >> input;

		while (!cin)
		{
			cin.clear();
			cin.ignore(500,'\n');
			cout << "Wrong input, try again: ";
			cin >> input;
		} 

		output = (input + 459.67) * (5.0 / 9);
		cout << input << " Fahrenheit is " << output << " Kelvin.\n";
		return 0;
	}

	case 4:
	{
		cout << "Enter the amount in Kelvin: ";
		cin >> input;

		while (!cin)
		{
			cin.clear();
			cin.ignore(500,'\n');
			cout << "Wrong input, try again: ";
			cin >> input;
		} 

		output = input - 273.15;
		cout << input << " Kelvin is " << output << " Celsius.\n";
		return 0;
	}

	case 5:
	{
		cout << "Enter the amount in Kelvin: ";
		cin >> input;

		while (!cin)
		{
			cin.clear();
			cin.ignore(500,'\n');
			cout << "Wrong input, try again: ";
			cin >> input;
		} 

		output = input * (9.0 / 5) - 459.67;
		cout << input << " Kelvin is " << output << " Fahrenheit.\n";
		return 0;
	}


	return 0;
	}
}
