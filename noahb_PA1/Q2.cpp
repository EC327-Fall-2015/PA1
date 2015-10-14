//executable file is named "conversion.exe"

// Program that converts input numbers between Celsius, Fahrenheit, and Kelvin
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//ask user to input a code to determine units for conversion
	
	short conversion_type;

	cout << "Celsius to Fahrenheit (enter 0)\nCelsius to Kelvin (enter 1)\nFahrenheit to Celsius (enter 2)\nFahrenheit to Kelvin (enter 3)\nKelvin to Celsius (enter 4)\nKelvin to Fahrenheit (enter 5)\nConversion type: ";
	
	cin >> conversion_type;

	//give error message if user input a wrong code
	while (cin.fail() || (conversion_type != 0  && conversion_type != 1 && conversion_type != 2 && conversion_type != 3 && conversion_type != 4 && conversion_type != 5))
	{
		cin.clear();
		cin.ignore(999,'\n');
		cout << "Wrong input, try again: ";
		cin >> conversion_type;
	}

	double temperature;
	double new_temperature;
	
	//starting with Celsius
	if (conversion_type == 0 || conversion_type == 1)
	{
		//prompt the user for the value to be converted
		cout << "Enter the amount in Celsius: ";

		cin >> temperature;
		while (cin.fail())
		{
			cin.clear();
                	cin.ignore(999,'\n');			
			cout << "Wrong input, try again: ";
                	cin >> temperature;
		}

		if (conversion_type == 0)
		{
			new_temperature = temperature * 9 / 5 + 32;
			
			//inform the user of the converted value
                	cout << fixed << showpoint;
			cout << setprecision(3);
			cout << temperature << " Celsius is " << new_temperature << " Fahrenheit." << endl;
		}
		
		if (conversion_type == 1)
		{
			new_temperature = temperature + 273.150;
			
			cout << fixed << showpoint;
                        cout << setprecision(3);
			//inform the user of the converted value
                	cout << temperature << " Celsius is " << new_temperature << " Kelvin." << endl;
		}
		return 0;
	}
	
	//starting with Fahrenheit
	if (conversion_type == 2 || conversion_type == 3)
	{
		//prompt the user for the value to be converted
                cout << "Enter the amount in Fahrenheit: ";

                cin >> temperature;
		while (cin.fail())
                {
                        cin.clear();
                        cin.ignore(999,'\n');
                        cout << "Wrong input, try again: ";
                        cin >> temperature;
		}

                if (conversion_type == 2)
                {
                        new_temperature = (temperature - 32) * 5 / 9; 
			
			cout << fixed << showpoint;
                        cout << setprecision(3);

			//inform the user of the converted value
                	cout << temperature << " Fahrenheit is " << new_temperature << " Celsius." << endl;
                }

                if (conversion_type == 3)
                {
                        new_temperature = (temperature + 459.670) * 5 / 9; 
			
			cout << fixed << showpoint;
                        cout << setprecision(3);

			//inform the user of the converted value
                	cout << temperature << " Fahrenheit is " << new_temperature << " Kelvin." << endl;
                }

		return 0;
	}

	//starting with Kelvin
	if (conversion_type == 4 || conversion_type == 5)
	{
		//prompt the user for the value to be converted
                cout << "Enter the amount in Kelvin: ";

                cin >> temperature;
		while (cin.fail())
                {
                        cin.clear();
                        cin.ignore(999,'\n');
                        cout << "Wrong input, try again: ";
                        cin >> temperature;
                }        

                if (conversion_type == 4)
                {
                        new_temperature = temperature - 273.150;

			cout << fixed << showpoint;
                        cout << setprecision(3);

                	//inform the user of the converted value
                	cout << temperature << " Kelvin is " << new_temperature << " Celsius." << endl;
		}

                if (conversion_type == 5)
                {
                        new_temperature = temperature * 9 / 5 - 459.670; 
               
			cout << fixed << showpoint;
                        cout << setprecision(3);
				
			//inform the user of the converted value
        		cout << temperature << " Kelvin is " << new_temperature << " Fahrenheit." << endl;
		
		}
		return 0;
	}

	return 0;
}
