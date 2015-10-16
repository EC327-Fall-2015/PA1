#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	int type;
	double temp, tempout;
	cout<< fixed << setprecision(3);
	
	cout<<"Celsius to Fahrenheit (enter 0)"<<endl;
	cout<<"Celsius to Kelvin (enter 1)"<<endl;
	cout<<"Fahrenheit to Celsius (enter 2)"<<endl;
	cout<<"Fahrenheit to Kelvin (enter 3)"<<endl;
	cout<<"Kelvin to Celsius (enter 4)"<<endl;
	cout<<"Kelvin to Fahrenheit (enter 5)"<<endl;
	cout<<"Conversion type: ";

	do {
		cin>> type;

		if (cin.fail()) {
			cin.clear();
			while(cin.get() != '\n');
			cout << "Wrong input, try again: ";
		}

		else if (type == 0) {
			
			cout<< "Enter the amount in Celsius: ";
			do {
				cin>> temp;

				if (cin.fail()) {
					cin.clear();
					while(cin.get() != '\n');
					cout << "Wrong input, try again: ";
				}
				else {
					cin.ignore();
					tempout = (temp * (1.8)) + 32;
					cout<< temp << " Celsius is " << tempout << " Fahrenheit." <<endl;
					return 0;
				}

			} while (1);
		}

		else if (type == 1) {
			
			cout<< "Enter the amount in Celsius: ";
			do {
				cin>> temp;

				if (cin.fail()) {
					cin.clear();
					while(cin.get() != '\n');
					cout << "Wrong input, try again: ";
				}
				else {
					cin.ignore();
					tempout = temp + 273.15;
					cout<< temp << " Celsius is " << tempout << " Kelvin." <<endl;
					return 0;
				}
				
			} while (1);
		}

		else if (type == 2) {

			cout<< "Enter the amount in Fahrenheit: ";
			do {
				cin>> temp;

				if (cin.fail()) {
					cin.clear();
					while(cin.get() != '\n');
					cout << "Wrong input, try again: ";
				}
				else {
					cin.ignore();
					tempout = (temp - 32)*(0.5555555556);
					cout<< temp << " Fahrenheit is " << tempout << " Celsius." <<endl;
					return 0;
				}
				
			} while (1);
		}

		else if (type == 3) {
			
			cout<< "Enter the amount in Fahrenheit: ";
			do {
				cin>> temp;

				if (cin.fail()) {
					cin.clear();
					while(cin.get() != '\n');
					cout << "Wrong input, try again: ";
				}
				else {
					cin.ignore();
					tempout = ((temp - 32)*(0.5555555556)) + 273.15;
					cout<< temp << " Fahrenheit is " << tempout << " Kelvin." <<endl;
					return 0;
				}
				
			} while (1);
		}

		else if (type == 4)	{

			cout<< "Enter the amount in Kelvin: ";
			do {
				cin>> temp;

				if (cin.fail()) {
					cin.clear();
					while(cin.get() != '\n');
					cout << "Wrong input, try again: ";
				}
				else {
					cin.ignore();
					tempout = temp - 273.15;
					cout<< temp << " Kelvin is " << tempout << " Celsius." <<endl;
					return 0;
				}
				
			} while (1);
		}

		else if (type == 5) {
			
			cout<< "Enter the amount in Kelvin: ";
			do {
				cin>> temp;

				if (cin.fail()) {
					cin.clear();
					while(cin.get() != '\n');
					cout << "Wrong input, try again: ";
				}
				else {
					cin.ignore();
					tempout = ((1.8)*(temp - 273.15)) + 32;
					cout<< temp << " Kelvin is " << tempout << " Fahrenheit." <<endl;
					return 0;
				}
				
			} while (1);
		}

		else {
			cout << "Wrong input, try again: ";
		}

	} while (1);

	return 0;
}
