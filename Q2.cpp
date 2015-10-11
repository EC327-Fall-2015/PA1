//
//  Q2_unit_conversion.cpp
//  PA_1
//
//  Created by Tess Gauthier on 9/18/15.
//  Copyright (c) 2015 Tess Gauthier. All rights reserved.
//  Takes temperature from user and converts between Celsius, Fahrenheit, or Kelvin
// 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int converter;
    
    // Provides user with conversion options
    
    cout << "Celsius to Fahrenheit (enter 0)" << endl;
    cout << "Celsius to Kelvin (enter 1)" << endl;
    cout << "Fahrenheit to Celsius (enter 2)" << endl;
    cout << "Fahrenheit to Kelvin (enter 3)" << endl;
    cout << "Kelvin to Celsius (enter 4)" << endl;
    cout << "Kelvin to Fahrenheit (enter 5)" << endl;
    cout << "Conversion type: ";
    cin >> converter;
    
    // Error checks for correct input type
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Wrong input, try again: ";
        cin >> converter;
    }
    
    // Error checks for correct input range
    while ((converter > 5) || (converter < 0))
    {
        cout << "Wrong input, try again: ";
        cin >> converter;
    }
    
    // Performs desired conversion based on user input
    switch (converter)
    {
        case 0:
        {
            double celsius;
            cout << "Enter the amount in Celsius: ";
            cin >> celsius;
            
            // Error checks for correct input type
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Wrong input, try again: ";
                cin >> celsius;
            }
            
            double fahrenheit = (9.0 / 5) * celsius + 32;
            cout << fixed << setprecision(3) << celsius << " Celsius is " << fixed << setprecision(3) << fahrenheit << " Fahrenheit." << endl;
            break;
        }
        case 1:
        {
            double celsius;
            cout << "Enter the amount in Celsius: ";
            cin >> celsius;
            
            // Error checks for correct input type
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Wrong input, try again: ";
                cin >> celsius;
            }
            
            double kelvin = celsius + 273.15;
            cout << fixed << setprecision(3) << celsius << " Celsius is " << fixed << setprecision(3) << kelvin << " Kelvin." << endl;
            break;
        }
        case 2:
        {
            double fahrenheit;
            cout << "Enter the amount in Fahrenehit: ";
            cin >> fahrenheit;
            
            // Error checks for correct input type
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Wrong input, try again: ";
                cin >> fahrenheit;
            }
            
            double celsius = (5.0 / 9) * (fahrenheit - 32);
            cout << fixed << setprecision(3) << fahrenheit << " Fahrenheit is " << fixed << setprecision(3) << celsius << " Celsius." << endl;
            break;
        }
        case 3:
        {
            double fahrenheit;
            cout << "Enter the amount in Fahrenheit: ";
            cin >> fahrenheit;
            
            // Error checks for correct input type
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Wrong input, try again: ";
                cin >> fahrenheit;
            }
            
            double kelvin = (fahrenheit + 459.67) * (5.0 / 9);
            cout << fixed << setprecision(3) << fahrenheit << " Fahrenheit is " << fixed << setprecision(3) << kelvin << " Kelvin." << endl;
            break;
            
        }
        case 4:
        {
            double kelvin;
            cout << "Enter the amount in Kelvin: ";
            cin >> kelvin;
            
            // Error checks for correct input type
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Wrong input, try again: ";
                cin >> kelvin;
            }
            
            double celsius = kelvin - 273.15;
            cout << fixed << setprecision(3) << kelvin << " Kelvin is " << fixed << setprecision(3) << celsius << " Celsius." << endl;
            break;
            
        }
        case 5:
        {
            double kelvin;
            cout << "Enter the amount in Kelvin: ";
            cin >> kelvin;
            
            // Error checks for correct input type
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Wrong input, try again: ";
                cin >> kelvin;
            }
            
            double fahrenheit = kelvin * (9.0/5) - 459.67;
            cout << fixed << setprecision(3) << kelvin << " Kelvin is " << fixed << setprecision(3) << fahrenheit << " Fahrenheit." << endl;
            break;
        }
    }
    return 0;
}