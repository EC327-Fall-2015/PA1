#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//output all of the options
	cout << "Celsius to Fahrenheit (enter 0)" << endl
		<< "Celsius to Kelvin (enter 1)" << endl
		<< "Fahrenheit to Celsius (enter 2)" << endl
		<< "Fahrenheit to Kelvin (enter 3)" << endl
		<< "Kelvin to Celsius (enter 4)" << endl
		<< "Kelvin to Fahrenheit (enter 5)" << endl;

	bool repeat = false;

	do {
		cout << "Conversion type: ";
		//variable for input
		int conv;
		cin >> conv;

		double temp;

		double finTemp;

		repeat = false;

		//switch statement to determine which math
		switch (conv)
		{
		case 0:		//C to F
			cout << "Enter the amount in Celcius: ";
			cin >> temp;
			while (cin.fail()) //if input is notvalid, clear it
			{
				cin.clear();
				cin.ignore(256, '\n');
				cout << "Wrong input, try again: ";
				cin >> temp;
			}
			finTemp = temp*(1.8) + 32;
			cout << setprecision(3) << fixed<< temp << " Celcius is " << finTemp << " Fahrenheit." << endl;
			break;
		case 1:		//C to K
			cout << "Enter the amount in Celcius: ";
			cin >> temp;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(256, '\n');
				cout << "Wrong input, try again: ";
				cin >> temp;
			}
			finTemp = temp + 273;
			cout << setprecision(3) << fixed << temp << " Celcius is " << finTemp << " Kelvin." << endl;
			break;
		case 2:		//F to C
			cout << "Enter the amount in Fahrenheit: ";
			cin >> temp;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(256, '\n');
				cout << "Wrong input, try again: ";
				cin >> temp;
			}
			finTemp = (temp - 32) * 5 / 9;
			cout << setprecision(3) << fixed << temp << " Fahrenheit is " << finTemp << " Celsius." << endl;
			break;
		case 3:		//F to K
			cout << "Enter the amount in Fahrenheit: ";
			cin >> temp;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(256, '\n');
				cout << "Wrong input, try again: ";
				cin >> temp;
			}
			finTemp = (temp + 459.67) * 5 / 9;
			cout << setprecision(3) << fixed << temp << " Fahrenheit is " << finTemp << " Kelvin." << endl;
			break;
		case 4:		//K to C
			cout << "Enter the amount in Kelvin: ";
			cin >> temp;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(256, '\n');
				cout << "Wrong input, try again: ";
				cin >> temp;
			}
			finTemp = temp - 273;
			cout << setprecision(3) << fixed << temp << " Kelvin is " << finTemp << " Celsius." << endl;
			break;
		case 5:		//K to F
			cout << "Enter the amount in Kelvin: ";
			cin >> temp;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(256, '\n');
				cout << "Wrong input, try again: ";
				cin >> temp;
			}
			finTemp = temp*(1.8) - 459.67;
			cout << setprecision(3) << fixed << temp << " Kelvin is " << finTemp << " Fahrenheit." << endl;
			break;
		default: cout << "Wrong input, try again:" << endl;
			cin.clear();
			cin.ignore(256, '\n');
			repeat = true;
		}
	} while (repeat); //while the conversion type is invalid, ask again

	return 0;
}