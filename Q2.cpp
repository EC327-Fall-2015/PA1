#include <iostream>
#include <math.h> 
#include <cstdlib> //used for system("pause"), not needed on lab computers
using namespace std;
 
int main()
{
    double fahrenheit, celsius, kelvin;
    int choice;
 
 
    cout << "Celsius to Fahrenheit (enter 0)" << endl;
    cout << "Celsius to Kelvin (enter 1)" << endl;
    cout << "Fahrenheit to Celsius (enter 2)" << endl;
    cout << "Fahrenheit to Kelvin (enter 3)" << endl;
    cout << "Kelvin to Celsius (enter 4)" << endl;
    cout << "Kelvin to Farhenheit (enter 5)" << endl;
    cout << "Conversion type: ";
    cin >> choice;
    cout << endl;
 
    switch (choice)
    {
    case 0:
        cout << "Enter temperature Celsius: ";
        cin >> celsius;
        cout << endl;
        fahrenheit = (celsius * (9 / 5)) + 32;
        cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit.";
	cout << endl;
        break;
 
    case 1:
        cout << "Enter temperature Celsius: ";
        cin >> celsius;
        cout << endl;
        kelvin = celsius + 273.15;
        cout << celsius << " Celsius is " << kelvin << " Kelvin.";
	cout << endl;
        break;
 
    case 2:
        cout << "Enter temperature Fahrenheit: ";
        cin >> fahrenheit;
        cout << endl;
        celsius = (fahrenheit - 32) * (5 / 9);
        cout << fahrenheit << " Fahrenheit is " << celsius << " Celsius.";
	cout << endl;
        break;
 
    case 3:
        cout << "Enter temperature Fahrenheit: ";
        cin >> fahrenheit;
        cout << endl;
        kelvin = (fahrenheit - 32) * (5 / 9) + 273.15;
        cout << fahrenheit << " Fahrenheit is " << kelvin << " Kelvin.";
	cout << endl;
        break;
 
    case 4:
        cout << "Enter temperature Kelvin: ";
        cin >> kelvin;
        cout << endl;
        celsius = kelvin - 273.15;
        cout << kelvin << " Kelvin is " << celsius << " Celsius." << endl;
	cout << endl;
        break;
 
    case 5:
        cout << "Enter temperature Kelvin: ";
        cin >> kelvin;
        cout << endl;
        fahrenheit = ((kelvin - 273.15) * 18) + 32;
        cout << kelvin << " Kelvin is " << fahrenheit << " Fahrenheit." << endl;
	cout << endl;
        break;
 
    }
     
 
}
