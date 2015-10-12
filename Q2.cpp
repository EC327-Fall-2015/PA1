//Derek Kenyon
//Programming Assignment: Question 2
//09.23.2015

//Preprocessor directives
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <string>
#include <sstream>

//Declares a namespace
using namespace std;

//Main function
int main()
{
	//Initializes variables
	int ctype;
	stringstream convert;
	string ctypestring;
	int stringsize;
	//0.5556, which is 5/9, is used for conversions
	// 1.8, which is 9/5, is used for conversions	

	//Informs the user of the different choices and prompts the user for a conversion type
	cout << "Celsius to Fahrenheit (enter 0)" << endl;
	cout << "Celsius to Kelvin (enter 1)" << endl;
	cout << "Fahrenheit to Celsius (enter 2)" << endl;
	cout << "Fahrenheit to Kelvin (enter 3)" << endl;
	cout << "Kelvin to Celsius (enter 4)" << endl;
	cout << "Kelvin to Fahrenheit (enter 5)" << endl;
	cout << "Conversion type: ";
	cin >> ctype; //stores the conversion type input by the user into 'ctype'
	
	//A while loop to error check the user's input using 'cin.fail()' which is true when a 'int' type is not input by the user for 'ctype'	
	while(cin.fail())
	{
		cin.clear(); //clears the error flags on cin
		cout << "Wrong input, try again: "; //prompts the user for another input
		cin.ignore(2147483647, '\n'); //ignores the rest of the characters
		cin >> ctype; //stores the new input into 'ctype'
	}

	//Error checks the user's input for being below 0 or above 5
	while(ctype<0 or ctype>5)
	{
		cout << "Wrong input, try again: ";
		cin >> ctype;
	}

	//The following if loops prompt the user for a value and return a value corresponding to the chosen conversion type
	if (ctype==0) //converts Celsius to Fahrenheit
	{
		double temp; //initializes temp
		double newtemp;	//initializes newtemp
		cout << "Enter the amount in Celsius: "; //prompts the user for a temperature input
		cin >> temp; //stores the user input in 'temp'

		//This while loop error checks the user's input as the previous while loop on line 38 does
		while(cin.fail())
		{
			cin.clear(); //clears the error flags on cin
			cout << "Wrong input, try again: "; //prompts the user for another input
			cin.ignore(2147483647, '\n'); //ignores the rest of the characters
			cin >> temp; //stores the new value in 'temp'
		}

		newtemp = ((1.8)*temp)+32.0; //conversion formula
		cout << temp << " Celsius is " << fixed << setprecision(3) << newtemp << " Fahrenheit." << endl; //outputs the answer in a fixed format with three decimal places
		return 1; //returns integer 1 to signify completion of program
	}
	else if (ctype == 1) //converts Celsius to Kelvin
	{
		double temp;
		double newtemp;
		cout << "Enter the amount in Celsius: ";
		cin >> temp;

		while(cin.fail())
		{
			cin.clear(); //clears the error flags on cin
			cout << "Wrong input, try again: "; //prompts the user for another input
			cin.ignore(2147483647, '\n'); //ignores the rest of the characters
			cin >> temp; //stores the new value in 'temp'
		}

		newtemp = temp+273.15;
		cout << temp << " Celsius is " << fixed << setprecision(3) << newtemp << " Kelvin." << endl;
		return 1; //returns integer 1 to signify completion of program
	}
	else if (ctype == 2) //converts Fahrenheit to Celsius
	{
		double temp;
		double newtemp;
		cout << "Enter the amount in Fahrenheit: ";
		cin >> temp;

		while(cin.fail())
		{
			cin.clear(); //clears the error flags on cin
			cout << "Wrong input, try again: "; //prompts the user for another input
			cin.ignore(2147483647, '\n'); //ignores the rest of the characters
			cin >> temp; //stores the new value in 'temp'
		}

		newtemp = 0.5556*(temp-32);
		cout << temp << " Fahrenheit is " << fixed << setprecision(3) << newtemp << " Celsius." << endl;
		return 1; //returns integer 1 to signify completion of program
	}
	else if (ctype == 3) //converts Fahrenheit to Kelvin
	{
		double temp;
		double newtemp;
		cout << "Enter the amount in Fahrenheit: ";
		cin >> temp;

		while(cin.fail())
		{
			cin.clear(); //clears the error flags on cin
			cout << "Wrong input, try again: "; //prompts the user for another input
			cin.ignore(2147483647, '\n'); //ignores the rest of the characters
			cin >> temp; //stores the new value in 'temp'
		}

		newtemp = (0.5556*(temp-32))+273.15;
		cout << temp << " Fahrenheit is " << fixed << setprecision(3) << newtemp << " Kelvin." << endl;
		return 1; //returns integer 1 to signify completion of program
	}
	else if (ctype == 4) //converts Kelvin to Celsius
	{
		double temp;
		double newtemp;
		cout << "Enter the amount in Kelvin: ";
		cin >> temp;

		while(cin.fail())
		{
			cin.clear(); //clears the error flags on cin
			cout << "Wrong input, try again: "; //prompts the user for another input
			cin.ignore(2147483647, '\n'); //ignores the rest of the characters
			cin >> temp; //stores the new value in 'temp'
		}

		newtemp = temp-273.15;
		cout << temp << " Kelvin is " << fixed << setprecision(3) << newtemp << " Celsius." << endl;
		return 1; //returns integer 1 to signify completion of program
	}
	else if (ctype == 5) //converts Kelvin to Fahrenheit
	{
		double temp;
		double newtemp;
		cout << "Enter the amount in Kelvin: ";
		cin >> temp;

		while(cin.fail())
		{
			cin.clear(); //clears the error flags on cin
			cout << "Wrong input, try again: "; //prompts the user for another input
			cin.ignore(2147483647, '\n'); //ignores the rest of the characters
			cin >> temp; //stores the new value in 'temp'
		}

		newtemp = (1.8*(temp-273.15))+32;
		cout << temp << " Kelvin is " << fixed << setprecision(3) << newtemp << " Fahrenheit." << endl;
		return 1; //returns integer 1 to signify completion of program
	}
	return 1; //returns integer 1 to signify completion of program
}
