#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string stringSelect;	
	string stringTemp;
	cout.precision(3);
	cout.setf(ios_base::fixed);

	cout << "Celsius to Fahrenheit (enter 0)\n"
		 << "Celsius to Kelvin (enter 1)\n"
		 << "Fahrenheit to Celsius (enter 2)\n"
		 << "Fahrenheit to Kelvin (enter 3)\n"
		 << "Kelvin to Celsius (enter 4)\n"
		 << "Kelvin to Fahrenheit (enter 5)\n"
		 << "Conversion Type: ";
	int numberSelect;
	float numberTemp;
	
	/*Error handling was inspired by http://www.cplusplus.com/forum/articles/6046/ */
	/*This handles input error when selecting conversion type*/
	while (true)
	{
		getline(cin, stringSelect);

		/***************************************
		 * String Stream is an object that holds
                 * a string. The reason it is powerful
		 * is that it allows me to use the 
		 * insertion operators that handle errors
		 * much better than the cin object does.
		 ***************************************/
		stringstream readNumber(stringSelect);
		if (readNumber >> numberSelect) // It seems unintuitive but I believe
                                                // returns a bool or such as an 
                                                // indicator that we inserted the data
		{
			if (numberSelect >= 0 && numberSelect <= 5)
			{
				break;
			}
		}
		cout << "Wrong input, try again: ";
	}

	string initialTempType;
	switch (numberSelect)
	{
	case 0:
	case 1:
		initialTempType = "Celsius";
		break; // break statements allow us to exit the switch statement
	case 2:
	case 3:
		initialTempType = "Fahrenheit";
		break;
	case 4:
	case 5:
		initialTempType = "Kelvin";
		break;
	default:
		cout << "Error numberSelect was not valid.\n";
		break;
	}

	cout << "Enter the amount in " << initialTempType << ": ";

	while (true)
	{
		getline(cin, stringTemp);
		stringstream readNumber(stringTemp);
		if (readNumber >> numberTemp)
		{
			break;
		}
		cout << "Wrong input, try again: ";
	}
	switch (numberSelect)	
	{
	case 0:
		cout << numberTemp << " Celsius is " << (numberTemp * 1.8f) + 32.0f  << " Fahrenheit.\n";
		break;
	case 1:
		cout << numberTemp << " Celsius is " << numberTemp + 273.15f << " Kelvin.\n";
		break;
	case 2:
		cout << numberTemp << " Fahrenheit is " << (numberTemp - 32.0f) / 1.8f << " Celsius.\n";
		break;
	case 3:
		cout << numberTemp << " Fahrenheit is " << (numberTemp - 32.0f) / 1.8f + 273.15f << " Kelvin.\n";
		break;
	case 4:
		cout << numberTemp << " Kelvin is " << numberTemp - 273.15f << " Celsius.\n";
		break;
	case 5:
		cout << numberTemp << " Kelvin is " << ((numberTemp - 273.15f) * 1.8f) + 32.0f << " Fahrenheit.\n";
		break;
	default:
		cout << "Error numberSelect was not valid.\n";
		break;
	}
	

	return 0;
}
