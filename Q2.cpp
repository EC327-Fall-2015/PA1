#include <iostream>
using namespace std;
int main() {
	cout << "Celsius to Fahrenheit(enter 0)\n";
	cout << "Celsius to Kelvin(enter 1)\n";
	cout << "Fahrenheit to Celsius(enter 2)\n";
	cout << "Fahrenheit to Kelvin(enter 3)\n";
	cout << "Kelvin to Celsius(enter 4)\n";
	cout << "Kelvin to Fahrenheit(enter 5)\n";
	int i = 0; //just a condition for the while loop
	cout << "Conversion type: ";
	while (i == 0) {
		int conv;
		cin >> conv;
		switch (conv) {
		case 0: //make case for C->F
			{
		cout << "Enter the amount in Celsius: ";
		//initialize tempC, store as input, convert, output
		double tempC;
		cin >> tempC;
		double tempF = tempC*1.8 + 32;
		cout << tempC << " Celsius is " << tempF << " Fahrenheit" << endl;
		i++; //to make cond in while false, in all cases except default
		break;
	}
		case 1:  //C->K
			{
		//pretty much the same thing as right below 148
		cout << "Enter the amount in Celsius: ";
		double tempC;
		cin >> tempC;
		double tempK = tempC + 273.15;
		cout << tempC << " Celsius is " << tempK << " Kelvin"<<endl;
		i++;
		break;
	}
		case 2://F->C
			{
		cout << "Enter the amount in Fahrenheit: ";
		double tempF;
		cin >> tempF;
		double tempC = (tempF - 32) / 1.8;
		cout << tempF << " Fahrenheit is " << tempC << " Celsius"<<endl;
		i++;
		break;
	}
		case 3://F->K
			{
		cout << "Enter the amount in Fahrenheit: ";
		double tempF;
		cin >> tempF;
		double tempK = (tempF + 459.67) / 1.8;
		cout << tempF << " Fahrenheit is " << tempK << " Kelvin"<<endl;
		i++;
		break;
	}
		case 4: //K->C
			{
		cout << "Enter the amount in Kelvin: ";
		double tempK;
		cin >> tempK;
		double tempC = tempK - 273.15;
		cout << tempK << " Kelvin is " << tempC << " Celsius"<<endl;
		i++;
		break;
	}
		case 5: //K->F
			{
		cout << "Enter the amount in Kelvin: ";
		double tempK;
		cin >> tempK;
		double tempF = tempK*1.8 - 459.67;
		cout << tempF << " Kelvin is " << tempF << " Fahrenheit"<<endl;
		i++;
		break;
	}
		default:
			cout << "Wrong input, try again: ";
	}

}

	return 0;
}