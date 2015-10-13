/*
	John Marcao
	EC327
	PA1 Q2
*/

#include <iostream>

using namespace std;

int main(){
	
	// Declare necesary variables
	int sel;
	double input;
	double output;
	
	cout.precision(3); // Set precision value of all digits displayed
	
	//Offer a selection of choices ot the user
	cout << "Celsius to Fahrenheit (enter 0)" << endl;
	cout << "Celsius to Kelvin (enter 1)" << endl;
	cout << "Fahrenheit to Celsius (enter 2)" << endl;
	cout << "Fahrenheit to Kelvin (enter 3)" << endl;
	cout << "Kelvin to Celsius (enter 4)" << endl;
	cout << "Kelvin to Fahrenheit (enter 5)" << endl;

	// Ask for input and check if it is valid
	// If it is not valid, ask again until the input is valid
	cout << "Conversion type: ";
	cin >> sel;
	while (cin.fail()){
			cin.clear();
			cin.ignore(10000000, '\n');
			cout << "Wrong input, try again: ";
			cin >> sel;
		}
	

	// Perform  conversion operations
	// C to F
	if (sel == 0){
		cout << "Enter the ammount in Celsius: ";
		cin >> input;
		while (cin.fail()){
			cin.clear();
			cin.ignore(10000000, '\n');
			cout << "Wrong input, try again: ";
			cin >> input;
		}
		output = input * (9/5) + 32;
		cout << input << " Celsius is " << output << " Fahrenheit." << endl;
	}
	// C to K
	else if (sel == 1){
		cout << "Enter the ammount in Celsius: ";
		cin >> input;
		while (cin.fail()){
			cin.clear();
			cin.ignore(10000000, '\n');
			cout << "Wrong input, try again: ";
			cin >> input;
		}
		output = input + 273.15;
		cout << input << " Celsius is " << output << " Kelvin." << endl;
	}
	// F to C
	else if (sel == 2){
		cout << "Enter the ammount in Fahrenheit: ";
		cin >> input;
		while (cin.fail()){
			cin.clear();
			cin.ignore(10000000, '\n');
			cout << "Wrong input, try again: ";
			cin >> input;
		}
		output = (input - 32) * 5/9;
		cout << input << " Fahrenheit is " << output << " Celsius." << endl;
	}
	// F to K
	else if (sel == 3){
		cout << "Enter the ammount in Fahrenheit: ";
		cin >> input;
		while (cin.fail()){
			cin.clear();
			cin.ignore(10000000, '\n');
			cout << "Wrong input, try again: ";
			cin >> input;
		}
		output = (input + 459.67) * 5/9;
		cout << input << " Fahrenheit is " << output << " Kelvin." << endl;
	}
	// K to C
	else if (sel == 4){
		cout << "Enter the ammount in Kelvin: ";
		cin >> input;
		while (cin.fail()){
			cin.clear();
			cin.ignore(10000000, '\n');
			cout << "Wrong input, try again: ";
			cin >> input;
		}
		output = input - 273.15;
		cout << input << " Kelvin is " << output << " Celsius." << endl;
	}
	// K to F
	else if (sel == 5){
		cout << "Enter the ammount in Kelvin: ";
		cin >> input;
		while (cin.fail()){
			cin.clear();
			cin.ignore(10000000, '\n');
			cout << "Wrong input, try again: ";
			cin >> input;
		}
		output = input * (9.5) - 459.67;
		cout << input << " Kelvin is " << output << " Fahrenheit." << endl;
	}



	return 0;
}

