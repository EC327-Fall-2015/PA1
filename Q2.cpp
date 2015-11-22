#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

// decimal input bug fix

int main()
{
	string userInput;
	string unitA, unitB;
	double initialTemp, finalTemp;
	int conversionKey = -1;
	cout << "Enter the integer for the conversion:" << endl << "Celsius to Farenheit (enter 0)" << endl << "Celsius to Kelvin (enter 1)" << endl << "Farenheit to Celsius (enter 2)" << endl << "Farenheit to Kelvin (enter 3)" << endl << "Kelvin to Celsius (enter 4)" << endl << "Kelvin to Farenheit (enter 5)" << endl;
	cout << "Conversion type: ";
	cin >> userInput;

	int stringLength = userInput.length();
	if (stringLength == 1)
	{
		char *cstr = &userInput[0u];
		conversionKey = static_cast<int>(*cstr);
	}



	// cout << "userInput value: " << userInput << endl;
	// cout << "stringLength value: " << stringLength << endl;
	// cout << "conversionKey value: " << conversionKey << endl;
	
	
	while( conversionKey < 48 || conversionKey > 53 )
	{
		cout << "That was not a number from 0 to 5. Try again: ";
		cin >> userInput;
		stringLength = userInput.length();
		if (stringLength == 1)
		{
			char *cstr = &userInput[0u];
			conversionKey = static_cast<int>(*cstr);
		}	
		// cout << endl;
		// cout << "userInput value: " << userInput << endl;
		// cout << "stringLength value: " << stringLength << endl;
		// cout << "conversionKey value: " << conversionKey << endl;
	}

	switch (conversionKey)
	{
		case 48: 
		  cout << "Enter the amount in Celsius: ";
			cin >> initialTemp;
			while (cin.fail()) 
			{
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "Wrong input, try again: ";
				cin >> initialTemp;
			}
			// cout << initialTemp << endl; //try 4d vs 4r
			unitA = "Celsius";
			unitB = "Farenheit";
			finalTemp = (initialTemp * 1.8) + 32;
			break;
		case 49: 
			cout << "Enter the amount in Celsius: ";
			cin >> initialTemp;
			while (cin.fail()) 
			{
				cout << "Cin entering loop: " << cin << endl;
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "Wrong input, try again: ";
				cin >> initialTemp;
			}
			unitA = "Celsius";
			unitB = "Kelvin";
			finalTemp = initialTemp + 273.15;
			break;
		case 50: 
			cout << "Enter the amount in Farenheit: ";
			cin >> initialTemp;
			while (cin.fail()) 
			{
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "Wrong input, try again: ";
				cin >> initialTemp;
			}
			unitA = "Farenheit";
			unitB = "Celsius";
			finalTemp = (initialTemp - 32) * 0.5555556;
			break;		
		case 51: 
			cout << "Enter the amount in Farenheit: ";
			cin >> initialTemp;
			while (cin.fail()) 
			{
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "Wrong input, try again: ";
				cin >> initialTemp;
			}
			unitA = "Farenheit";
			unitB = "Kelvin";
			finalTemp = (initialTemp - 32) * 0.5555556 + 273.15;
			break;
		case 52: 
			cout << "Enter the amount in Kelvin: ";
			cin >> initialTemp;
			while (cin.fail()) 
			{
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "Wrong input, try again: ";
				cin >> initialTemp;
			}
			unitA = "Kelvin";
			unitB = "Celsius";
			finalTemp = initialTemp - 273.15;
			break;
		case 53: 
			cout << "Enter the amount in Kelvin: ";
			cin >> initialTemp;
			while (cin.fail()) 
			{
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "Wrong input, try again: ";
				cin >> initialTemp;
			}
			unitA = "Kelvin";
			unitB = "Farenheit";
			finalTemp = (initialTemp - 273.15) * 1.8 + 32;
			break;
	}

	if (finalTemp)
	{
		cout << fixed << std::setprecision(3) << initialTemp << " " << unitA << " is " << fixed << std::setprecision(3) << finalTemp << " " << unitB << "." << endl;
	}

	return 0;
}