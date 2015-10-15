#include <iostream>
#include <iomanip>
using namespace std;

int InputN() { //use function for collcting conversion type
	double x;
	cout << "Conversation Type: ";
	cin >> x;
	while (cin.fail() || x<0 || x > 5) //loop to check if x is a real condition
	{
		cout << "Wrong input, try again: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> x;
	}
	return x; //returns conversion type
}

int main() {
	cout << "Celsius to Fahrenheit (enter 0)" << endl
		<< "Celsius to Kelvin (enter 1)" << endl
		<< "Fahrenheit to Celsius (enter 2)" << endl
		<< "Fahrenheit to Kelvin (enter 3)" << endl
		<< "Kelvin to Celsius (enter 4)" << endl
		<< "Kelvin to Fahrenheit (enter 5)" << endl;
	int n = InputN();
	if (n == 0) { // conversation 0
		cout << "Enter amount in Celsius: ";
		double temp;
		cin >> temp;
		while (cin.fail()) //failcheck for initial temp
		{
			cout << "Wrong input, try again: ";
			cin.clear(); //clears user input
			cin.ignore(256, '\n');
			cin >> temp; //get user input again
		}
		double new_temp = temp*1.8 + 32; //conversion
		cout << setprecision(3) << fixed << temp << " Celsius is " << setprecision(3) << fixed << new_temp << " Fahrenheit" << endl; //final statement
	}
	if (n == 1) { //conversion 1
		cout << "Enter amount in Celsius: ";
		double temp;
		cin >> temp;
		while (cin.fail())
		{
			cout << "Wrong input, try again: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> temp;
		}
		double new_temp = temp + 273.15;
		cout << setprecision(3) << fixed << temp << " Celsius is " << setprecision(3) << fixed << new_temp << " Kelvin" << endl;
	}
	if (n == 2) { //converstion 2
		cout << "Enter amount in Fahrenheit: ";
		double temp;
		cin >> temp;
		while (cin.fail())
		{
			cout << "Wrong input, try again: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> temp;
		}
		double new_temp = (temp - 32) * 5 / 9;
		cout << setprecision(3) << fixed << temp << " Fahrenheit is " << setprecision(3) << fixed << new_temp << " Celsius" << endl;
	}
	if (n == 3) { //converstion 3
		cout << "Enter amount in Fahrenheit: ";
		double temp;
		cin >> temp;
		while (cin.fail())
		{
			cout << "Wrong input, try again: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> temp;
		}
		double new_temp = (temp + 459.67) * 5 / 9;
		cout << setprecision(3) << fixed << temp << " Fahrenheit is " << setprecision(3) << fixed << new_temp << " Kelvin" << endl;
	}
	if (n == 4) {//converstion 4
		cout << "Enter amount in Kelvin: ";
		double temp;
		cin >> temp;
		while (cin.fail())
		{
			cout << "Wrong input, try again: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> temp;
		}
		double new_temp = temp - 273.15;
		cout << setprecision(3) << fixed << temp << " Kelvin is " << setprecision(3) << fixed << new_temp << " Celsius" << endl;
	}
	if (n == 5) {//converstion 5
		cout << "Enter amount in Kelvin: ";
		double temp;
		cin >> temp;
		while (cin.fail())
		{
			cout << "Wrong input, try again: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> temp;
		}
		double new_temp = temp*1.8 - 459.67;
		cout << setprecision(3) << fixed << temp << " Kelvin is " << setprecision(3) << fixed << new_temp << " Fahrenheit" << endl;
	}
	return 0;
}