#include <iostream>
#include <iomanip>

using namespace std;

double CtoF(double degrees);
double CtoK(double degrees);
double FtoC(double degrees);
double FtoK(double degrees);
double KtoC(double degrees);
double KtoF(double degrees);

int main()
{
	cout << "Celsius to Fahrenheit (enter 0)\nCelsius to Kelvin (enter 1)\nFahrenheit to Celsius (enter 2)\nFahrenheit to Kelvin (enter 3)\nKelvin to Celsius (enter 4)\nKelvin to Fahrenheit (enter 5)\nConversion type: ";
	int input;
	cin >> input;
	
	while(cin.fail() || input > 5 || input < 0){
		cout << "Wrong input, try again: ";
		cin.clear();
		cin.ignore(256,'\n');
		cin >> input;
	}
	
	double degrees;
	cout << fixed;
	cout << setprecision(3);
	switch(input)
	{
		case 0:
			cout << "Enter the amount in Celsius: ";
			cin >> degrees;
			while(cin.fail()){
				cout << "Wrong input, try again: ";
				cin.clear();
				cin.ignore(256,'\n');
				cin >> degrees;
			}
			cout << degrees << " Celsius is "  << CtoF(degrees) << " Fahrenheit." << endl;
		break;
		case 1:
			cout << "Enter the amount in Celsius: ";
			cin >> degrees;
			while(cin.fail()){
				cout << "Wrong input, try again: ";
				cin.clear();
				cin.ignore(256,'\n');
				cin >> degrees;
			}
			cout << degrees << " Celsius is " << CtoK(degrees) <<" Kelvin." << endl;
		break;
		case 2:
			cout << "Enter the amount in Fahrenheit: ";
			cin >> degrees;
			while(cin.fail()){
				cout << "Wrong input, try again: ";
				cin.clear();
				cin.ignore(256,'\n');
				cin >> degrees;
			}
			cout << degrees << " Fahrenheit is " << FtoC(degrees) << " Celsius." << endl;
		break;
		case 3:
			cout << "Enter the amount in Fahrenheit: ";
			cin >> degrees;
			while(cin.fail()){
				cout << "Wrong input, try again: ";
				cin.clear();
				cin.ignore(256,'\n');
				cin >> degrees;
			}
			cout << degrees << " Fahrenheit is " << FtoK(degrees) << " Kelvin." << endl;
		break;
		case 4:
			cout << "Enter the amount in Kelvin: ";
			cin >> degrees;
			while(cin.fail()){
				cout << "Wrong input, try again: ";
				cin.clear();
				cin.ignore(256,'\n');
				cin >> degrees;
			}
			cout << degrees << " Kelvin is " << KtoC(degrees) << " Celsius." << endl;
		break;
		case 5:
			cout << "Enter the amount in Kelvin: ";
			cin >> degrees;
			while(cin.fail()){
				cout << "Wrong input, try again: ";
				cin.clear();
				cin.ignore(256,'\n');
				cin >> degrees;
			}
			cout << degrees << " Kelvin is " << KtoF(degrees) << " Fahrenheit." << endl;
		break;
		default:
			cout << "Invalid input.";
		break;
	}
	return 0;
}

double CtoF(double degrees){
	return degrees * (9.0/5.0) + 32;
}
double CtoK(double degrees){
	return degrees + 273.15;
}
double FtoC(double degrees){
	return (degrees - 32)*(5.0/9.0);
}
double FtoK(double degrees){
	return CtoK(FtoC(degrees));
}
double KtoC(double degrees){
	return degrees - 273.15;
}
double KtoF(double degrees){
	return CtoF(KtoC(degrees));
}
