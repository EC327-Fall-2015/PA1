#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
using namespace std;

// Get the first input from the user, choosing the conversion parameters
int getConversionType()
{
	// Set type initially as double so that we can check for non-integer values
	double type;
	int result;
	bool isValidInput = true;
	
	do
	{
		// If input was invalid, then ask for new one, but the first time just ask for conversion type
		if(isValidInput)
		{
			cout << "Conversion type: ";
			cin >> type;

		} 
		else 
		{
			cout << "Wrong input, try again: ";
			cin >> type;

		}

		// Set cin fail to a variable
		bool intFail = cin.fail();

		// Check if the input type-matches as an integer
		if(intFail == false) 
		{
			if(type == static_cast<int>(type))
			{
				// Then explicitly set the result number into an integer value
				result = static_cast<int>(type);

				if( (result == 0) || (result == 1) || (result == 2) || (result == 3) || (result == 4) || (result == 5) )
				{
					// Then it's a valid input, so can continue to conversion
					isValidInput = true;

				}
				else 
				{
					// Needs an integer between 0 and 5.
					isValidInput = false;
					
				}
			}
			else
			{
				// Value entered was not an integer
				isValidInput = false;
			}
		}
		else
		{
			// Value that was entered was not an integer
			isValidInput = false;

		}
		// Clear the error flag so that cin will be ready for the next round of input
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		
	} while( !isValidInput );

	return result;
}

// Getting the second input from the user, the starting degrees to convert
double getStartingDegrees(string startName)
{
	double startingDegrees;
	bool isValidInput = true;
	
	// We will use isValidInput variable to check input is valid
	do
	{

		if(!isValidInput)
		{
			cout << "Wrong input, try again: ";
		}
		else
		{
			cout << "Enter the amount in " << startName << ": ";
		}

		// Get starting degree value
		cin >> startingDegrees;

		// Set cin fail to a variable
		bool intFail = cin.fail();

		// Check if the input type-matches as an double
		if(intFail == false) 
		{
			// Then it's a valid input, so can continue to conversion
			isValidInput = true;

		}
		else
		{
			// Value that was entered was not a double
			isValidInput = false;

		}
		// Clear the error flag so that it will be ready for the next round
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

	} while( !isValidInput );

	return startingDegrees;
}


int main()
{
	cout << "Celsius to Fahrenheit (enter 0)" << endl;
	cout << "Celsius to Kelvin (enter 1)" << endl;
	cout << "Fahrenheit to Celsius (enter 2)" << endl;
	cout << "Fahrenheit to Kelvin (enter 3)" << endl;
	cout << "Kelvin to Celsius (enter 4)" << endl;
	cout << "Kelvin to Fahrenheit (enter 5)" << endl;
	
	// Get the conversion type
	int type = getConversionType();

	// Get names of systems to convert
	string startName;
	string finalName;

	switch(type)
	{
		case 0:
			startName = "Celsius";
			finalName = "Fahrenheit";
			break;
		case 1:
			startName = "Celsius";
			finalName = "Kelvin";
			break;
		case 2:
			startName = "Fahrenheit";
			finalName = "Celsius";
			break;
		case 3:
			startName = "Fahrenheit";
			finalName = "Kelvin";
			break;
		case 4:
			startName = "Kelvin";
			finalName = "Celsius";
			break;
		case 5:
			startName = "Kelvin";
			finalName = "Fahrenheit";
			break;
		default:
			break;

	}

	// Get the starting degrees
	double startingDegrees = getStartingDegrees(startName);
	double finalDegrees;

	// Depending on the type chosen, do the conversion
	switch(type)
	{
		case 0:
			// "Celsius" to "Fahrenheit";
			finalDegrees = ( ( startingDegrees * (9.00/5.00) ) + 32.000 );
			break;
		case 1:
			// "Celsius" to "Kelvin";
			finalDegrees = ( startingDegrees + 273.150 );
			break;
		case 2:
			// "Fahrenheit" to "Celsius";
			finalDegrees = ( ( startingDegrees - 32.000 ) * (5.000/9.000) );
			break;
		case 3:
			// "Fahrenheit" to "Kelvin";
			finalDegrees = ( ( ( startingDegrees - 32.000 ) * (5.000/9.000) ) + 273.150 );
			break;
		case 4:
			// "Kelvin" to "Celsius";
			finalDegrees = ( startingDegrees - 273.150 );
			break;
		case 5:
			// "Kelvin" to "Fahrenheit";
			finalDegrees = ( ( ( startingDegrees - 273.150 ) * (9.000/5.000) ) + 32.000 );
			break;
		default:
			break;

	}

	// Print out the resulting conversion
	cout << std::fixed << setprecision(3) << startingDegrees << " " << startName << " is " << finalDegrees << setprecision(3) << " " << finalName << "." << endl;

	return 0;

}