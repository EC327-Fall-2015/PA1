//
//  main.cpp
//  PA1_Q2
//
//  Created by veronica celine on 9/22/15.
//  Copyright © 2015 veronica celine. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int c2f, c2k, f2c, f2k, k2c, k2f, intype;
    double numbin = 0.0, numbout;
    
    // Initialize intype values to corresponding conversion type
    c2f = 0;
    c2k = 1;
    f2c = 2;
    f2k = 3;
    k2c = 4;
    k2f = 5;
    
    
    
    //Give user list of conversion options
    cout << "Celsius to Fahrenheit (enter 0)" << endl;
    cout << "Celsius to Kelvin (enter 1)" << endl;
    cout << "Fahrenheit to Celsius (enter 2)" << endl;
    cout << "Fahrenheit to Kelvin (enter 3)" << endl;
    cout << "Kelvin to Celsius (enter 4)" << endl;
    cout << "Kelvin to Fahrenheit (enter 5)" << endl;
    cout << "Conversion type: ";
    
    
    
    //Determine whether conversion type is valid
    //Error if not 0 through 5
    while (true)
    {
        cin >> intype;
        if ((intype >= 6) || (intype <= -1))
            cout << "Error: Invalid input. Please input conversion type again: ";
        else
            break;
    }
    //Error if not an integer
    while (cin.fail())
    {
        cout << "Wrong input, try again: ";
        cin.clear();
        cin.ignore(5000, '\n');
        cin >> intype;
    }
    
    
    
    //Determine the conversion type input
    if ( intype == 0 || intype == 1 )
    {
        cout << "Enter the amount in Celsius: ";
        cin >> numbin;
    }
    else if ( intype == 2 || intype == 3 )
    {
        cout << "Enter the amount in Fahrenheit: ";
        cin >> numbin;
    }
    else if ( intype == 4 || intype == 5 )
    {
        cout << "Enter the amount in Kelvin: ";
        cin >> numbin;
    }
    
    
    
    //Determine if number input is an integer (error otherwise)
    while (cin.fail())
    {
        cout << "Wrong input, try again: ";
        cin.clear();
        cin.ignore(5000, '\n');
        cin >> numbin;
    }

    
    
    //Calculate the conversions and final print results
    if (intype == c2f)
    {
        numbout = numbin * ((9/5) + 32);
        cout << numbin << " Celsius is " << numbout << " Fahrenheit." << endl;
    }
    else if (intype == c2k)
    {
        numbout = numbin + 273.15;
        cout << numbin << " Celsius is " << numbout << " Kelvin." << endl;
    }
    else if (intype == f2c)
    {
        numbout = (numbin - 32) * (5/9);
        cout << numbin << " Fahrenheit is " << numbout << " Celsius." << endl;
    }
    else if (intype == f2k)
    {
        numbout = (numbin + 459.67) * 5/9;
        cout << numbin << " Fahrenheit is " << numbout << " Kelvin." << endl;
    }
    else if (intype == k2c)
    {
        numbout = numbin - 273.15;
        cout << numbin << " Kelvin is " << numbout << " Celsius." << endl;
    }
    else
    {
        numbout = numbin * 9/5 - 459.67;
        cout << numbin << " Kelvin is " << numbout << " Fahrenheit." << endl;
    }
    
    return 0;
}











