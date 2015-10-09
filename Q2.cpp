#include <iostream>

using namespace std;
double grab_temp()

{
	double temp;
	while(!(cin >> temp))
	{
		cout << "Wrong input, try again: ";
		cin.clear();
		cin.ignore(9001, '\n');
	
	
	}
	return temp;
}

int main()
{
  /* Temperature conversion:
     Program converts between user-inputted temperature
     to/from Celsius, Fahrenheit, or Kelvin */


	// Set 3 digit precision
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(3);

	// Declare Variables
	int convert_type; // set off originally
	double temp, converted_temp;

	// Prompt User for Conversion Type
	cout << "Celsius to Fahrenheit (enter 0)" << endl;
	cout << "Celsius to Kelvin (enter 1)"     << endl;
	cout << "Fahrenheit to Celsius (enter 2)" << endl;
	cout << "Fahrenheit to Kelvin (enter 3)"  << endl;
	cout << "Kelvin to Celsius (enter 4)"     << endl;
	cout << "Kelvin to Fahrenheit (enter 5)"  << endl;
	cout << "Conversion type: ";
	
	while (!(cin >> convert_type) || convert_type < 0 || convert_type > 5)
	{
		cout << "Wrong input, try again: ";
		cin.clear(); 		// reset stream state
		cin.ignore(9001, '\n'); // flush cin
		// 9001 should be INT_MAX, but wouldnt compile on BU comp.
	};
	
	// Convert
	switch(convert_type)
	{
		case 0: // C -> F
			// Get Temp in C
			cout << "Enter the amount in Celsius: ";
			temp = grab_temp();
						
			// Convert
			converted_temp = temp * (9.0 / 5.0) + 32.0;
 			
			// Give result
			cout << temp << " Celsius is " << converted_temp;
			cout << " Fahrenheit." << endl;
			break;

		case 1: // C -> K	
			// Get Temp in C
			cout << "Enter the amount in Celsius: ";
			temp = grab_temp();
			
			// Convert
			converted_temp = temp + 273.15;
 			
			// Give result
			cout << temp << " Celsius is " << converted_temp;
			cout << " Kelvin." << endl;
			break;

		case 2: // F -> C
			cout << "Enter the amount in Fahrenheit: ";
			temp = grab_temp();

			// Convert
			converted_temp = (temp - 32.0) * (5.0/9.0);
			
			// Give result
			cout << temp << " Fahrenheit is " << converted_temp;
			cout << " Celsius." << endl;
			break;

		case 3: // F -> K	
			// Get Temp in F
			cout << "Enter the amount in Fahrenheit: ";
			temp = grab_temp();
			
			// Convert
			converted_temp = (temp + 459.67)*(5.0/9.0);
 			
			// Give result
			cout << temp << " Fahrenheit is " << converted_temp;
			cout << " Kelvin." << endl;
			break;

		case 4: // K -> C
			// Get Temp in K
			cout << "Enter the amount in Kelvin: ";
			temp = grab_temp();
			
			// Convert
			converted_temp = temp -273.15;
 			
			// Give result
			cout << temp << " Kelvin is " << converted_temp;
			cout << " Celsius." << endl;
			break;

		case 5: // K -> F
			// Get Temp in K
			cout << "Enter the amount in Kelvin: ";
			temp = grab_temp();
			
			// Convert
			converted_temp = temp*(9.0/5.0)-459.67;
 			
			// Give result
			cout << temp << " Kelvin is " << converted_temp;
			cout << " Fahrenheit." << endl;
			break;
	}






}
