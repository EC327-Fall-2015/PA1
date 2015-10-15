#include <iostream>
#include <iomanip>              // for precision function
using namespace std;

int main() 
{
	std::cout << std :: fixed;
    std::cout << std :: setprecision(3);    //output will print to 3 decimal places
    double choice;
	double n;
	double con; 
	cout << "Celsius to Fahrenheit (enter 0)" << endl;
	cout << "Celsius to Kelvin (enter 1)" << endl;
	cout << "Fahrenheit to Celsius (enter 2)" << endl;
	cout << "Fahrenheit to Kevin (enter 3)" << endl;
	cout << "Kelvin to Celsius (enter 4)" << endl;
	cout << "Kelvin to Fahrenheit (enter 5)" << endl;
    cout << "Conversion type: ";
	cin >> choice;                       //asking for what kind of conversiion
	while (cin.fail() or choice < 0 or choice > 5) //checks that choice is integer and in the range
    {
        cout << "Wrong input, try again: ";
        cin.clear();
        cin.ignore(5000, '\n');
        cin >> choice;
    }
    if (choice == 0) // C to F 
	{
		cout << "Enter the amount in Celsius: ";
		cin >> n; 
        while (cin.fail())
        {
            cout << "Wrong input, try again: ";
            cin.clear();
            cin.ignore(5000, '\n');
            cin >> n;
        }
		con = (n * (9.0/5)) + 32;
		cout << n << " Celsius is " << con << " Fahrenheit." << endl; 
	}
	else if (choice == 1) // C to K
    {
        cout << "Enter the amount in Celsius: ";
        cin >> n; 
        while (cin.fail())          // checks n is an integer 
        {
            cout << "Wrong input, try again: ";
            cin.clear();
            cin.ignore(5000, '\n');
            cin >> n;
        }
        con = n + 273.15;
        cout << n << " Celsius is " << con  << " Kelvin." << endl;
    }
	else if (choice == 2) // F to C
    {
        cout << "Enter the amount in Fahrenheit:  ";
        cin >> n;
        while (cin.fail())
        {
            cout << "Wrong input, try again: ";
            cin.clear();
            cin.ignore(5000, '\n');
            cin >> n;
        }
        con = (n - 32) * (5.0 / 9);
        cout << n << " Fahrenheit is " << con << " Celsius." << endl;   
        }
	else if (choice == 3) // F to K
    {
        cout << "Enter the amount in Fahrenheit:  ";
        cin >> n;
        while (cin.fail())
        {
            cout << "Wrong input, try again: ";
            cin.clear();
            cin.ignore(5000, '\n');
            cin >> n;
        }
        con = (n - 32) * (5.0/ 9) + 273.15;
        cout << n << " Fahrenheit is " << con << " Kelvin." << endl; 
    }
	else if (choice == 4) // K to C
    {
        cout << "Enter the amount in Kelvin:  ";
        cin >> n;
        while (cin.fail())
        {
            cout << "Wrong input, try again: ";
            cin.clear();
            cin.ignore(5000, '\n');
            cin >> n;
        }
        con = n - 273.15;
        cout << n << " Kelvin is " << con << " Celsius." << endl; 
    }
	else if (choice == 5)  // K to F
        {
            cout << "Enter the amount in Kelvin:  ";
            cin >> n;
            while (cin.fail())
            {
                cout << "Wrong input, try again: ";
                cin.clear();
                cin.ignore(5000, '\n');
                cin >> n;
            }
            con = (n * (9.0 / 5)) - 459.67;
            cout <<  n << " Kelvin is " << con << " Fahrenheit." << endl;
        }
	return 0;
}
