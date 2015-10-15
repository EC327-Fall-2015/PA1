#include <iostream> 
#include <iomanip>
using namespace std;
int main()
{
	int input;
	cout << "Celsius to Fahrenheit (enter 0)" << endl //conversion types
	<< "Celsius to Kelvin (enter 1)" << endl 
	<<"Fahrenheit to Celsius (enter 2)" << endl
	<<"Fahrenheit to Kelvin (enter 3)" << endl
	<<"Kelvin to Celsius (enter 4)" << endl 
	<<"Kelvin to Fahrenheit (enter 5)" << endl 
	<<"Conversion type: ";
	cin >> input;

	double temp;
	double Far;
	double Kel;
	double Cel;
while (cin.fail() || input < 0 || input > 5) //error check if not in valid range or if string/character
{
	cout <<"Wrong input, try again: ";
	cin.clear(); //if any characters entered, clear values before
	cin.ignore(256, '\n');//ignore everythign after until newline character
	cin >> input; //ask for input again
}
	switch (input)
	{
		case 0: //Celsius to Fahrenheit
		cout << "Enter the amount in Celsius: ";
		cin >> temp;
		while (cin.fail()) //error check if not number
		{
			cout <<"Wrong input, try again: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> temp;
		}
		Far= (temp*1.8)+32;
		cout << fixed << setprecision(3) << temp << " Celsius is " << fixed << setprecision(3) << Far << " Fahrenheit." << endl;
		break;

		case 1: //Celsius to Kelvin
		cout << "Enter the amount in Celsius: ";
		cin >> temp;
		while (cin.fail()) //error check if not number
		{
			cout <<"Wrong input, try again: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> temp;
		}
		Kel= temp + 273.15;
		cout << fixed << setprecision(3) << temp << " Celsius is " << fixed << setprecision(3) << Kel << " Kelvin." << endl;
		break;

		case 2: //Fahrenheit to Celsius
		cout << "Enter the amount in Fahrenheit: ";
		cin >> temp;
		while (cin.fail()) //error check if not number
		{
			cout <<"Wrong input, try again: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> temp;
		}
		Cel= (temp-32)/1.8;
		cout << fixed << setprecision(3) << temp << " Fahrenheit is " << fixed << setprecision(3) << Cel << " Celsius." << endl;
		break;
		
		case 3: //Fahrenheit to Kelvin
		cout << "Enter the amount in Fahrenehit: ";
		cin >> temp;
		while (cin.fail()) //error check if not number
		{
			cout <<"Wrong input, try again: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> temp;
		}
		Kel= ((temp-32)/1.8)+273.15;
		cout << fixed << setprecision(3) << temp << " Fahrenheit is " << fixed << setprecision(3) << Kel << " Kelvin." << endl;
		break;
		
		case 4: //Kelvin to Celsius
		cout << "Enter the amount in Kelvin: ";
		cin >> temp;
		while (cin.fail()) //error check if not number
		{
			cout <<"Wrong input, try again: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> temp;
		}
		Cel= temp-273.15;
		cout << fixed << setprecision(3) << temp << " Kelvin is " << fixed << setprecision(3) << Cel << " Celsius." << endl;
		break;
		
		case 5: //Kelvin to Fahrenheit
		cout << "Enter the amount in Kelvin: ";
		cin >> temp;
		while (cin.fail()) //error check if not number
		{
			cout <<"Wrong input, try again: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> temp;
		}
		Far= ((temp-273.15)*1.8)+32;
		cout << fixed << setprecision(3) << temp << " Kelvin is " << fixed << setprecision(3) << Far << " Fahrenheit." << endl;
		break;
		
	}
return 0;
}
