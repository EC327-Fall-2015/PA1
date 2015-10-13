//
//  main.cpp
//  Q2
//
//  Created by Tiffany Wu on 9/22/15.
//  Copyright © 2015 Tiffany Wu. All rights reserved.
//

#include <iostream>
using namespace std;

int main()

{
    // The code starts by asking the user to input a number that correlates to a temperature conversion
    
    int num;
    float temp, new_temp;
    cout << "Celsius to Fahrenheit (enter 0) \nCelsius to Kelvin (enter 1) \nFahrenheit to Celsius (enter 2) \nFahrenheit to Kelvin (enter 3) \nKelvin to Celsius (enter 4) \nKelvin to Fahrenheit (enter 5) \nConversion type: ";
    cin >> num;
    
    // The while loop error checks to make sure that the user inputs a number between 0 and 5
    
    while (num < 0 | num > 5 | cin.fail())
    {
        cin.clear();
        cin.ignore(200,'\n');
        cout << "Wrong input, try again: ";
        cin >> num;
    }
    
    // The if statement asks user to input number
    
    if (num == 0 | num == 1)
    {
        cout << "Enter the amount in Celsius: ";
        cin >> temp;
    }
    else if (num == 2 | num == 3)
    {
        cout << "Enter the amount in Fahrenheit: ";
        cin >> temp;
    }
    else
    {
        cout << "Enter the amount in Kelvin: ";
        cin >> temp;
    }

    // The while loop checks if the input is an actual number
    
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(200,'\n');
        cout << "Wrong input, try again: ";
        cin >> temp;
    }
    
    /* The switch statement, depending on the conversion the user chose, does the calculations for the conversion and then outputs the answer and exits
     */
    
    switch (num)
    {
        case 0:
            new_temp = (temp * (9/5.0)) + 32;
            cout << temp << " Celsius is " << new_temp << " Fahrenheit.\n";
            break;
        case 1:
            new_temp = temp + 273.150;
            cout << temp << " Celsius is " << new_temp << " Kelvin.\n";
            break;
        case 2:
            new_temp = (temp-32) * (5/9.0);
            cout << temp << " Fahrenheit is " << new_temp << " Celcius.\n";
            break;
        case 3:
            new_temp = (temp-32)*(5/9.0) + 273.150;
            cout << temp << " Fahrenheit is " << new_temp << " Kelvin.\n";
            break;
        case 4:
            new_temp = temp - 273.150;
            cout << temp << " Kelvin is " << new_temp << " Celsius.\n";
            break;
        case 5:
            new_temp = ((temp-273.150) * (9/5.0)) + 32;
            cout << temp << " Kelvin is " << new_temp << " Fahrenheit.\n";
            break;
    }
    
    return 0;
}
