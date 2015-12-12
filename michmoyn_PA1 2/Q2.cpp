//
//  main.cpp
//  PA1- Q2
//
//  Created by Michaela Moynihan on 9/29/15.
//  Copyright © 2015 Michaela Moynihan. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    //Declares variables
    int conv;
    float numbin;
    float numbout;
    
    //Gives user options
    cout << "Celsius to Fahrenheit (enter 0)" << endl;
    cout << "Celsius to Kelvin (enter 1)" << endl;
    cout << "Fahrenheit to Celsius (enter 2)" <<endl;
    cout << "Fahrenheit to Kelvin (enter 3)" << endl;
    cout << "Kelvin to Celsius (enter 4)" << endl;
    cout << "Kelvin to Fahrenheit (enter 5)" << endl;
    cout << "Conversion type: ";
    //If the use inputs a number greater than 5 or less than zero or an incorrect variable type, error occurs.
    while (true)
    {
        cin >> conv;
        while (cin.fail())
        { cout << "Wrong input, try again: ";
            cin.clear();
            cin.ignore(5000, '\n');
            cin >> conv;
        }
        
        if (conv < 0 || conv > 5)
        {
            cout << "Wrong input, try again: ";
        }
        else
        {
           break;
        }
    }
        
    //Checks the conversion type, then proceeds to make the conversion of the temperature given.
    if (conv == 0 || conv == 1)
    {
        cout << "Enter the amount in Celsius: ";
        cin >> numbin;
        
        if (conv == 0)
        {
            numbout = numbin * (1.8) + 32;
            cout << numbin << " Celsius is " << numbout << " Fahrenheit." << endl;
        }
        else
        {
            numbout = numbin + 273.15;
            cout << numbin << " Celsius is " << numbout << " Kelvin." << endl;
        }

    }
    else if (conv == 2 || conv == 3)
    {   cout << "Enter the amount in Fahrenheit: ";
        cin >> numbin;
        if (conv == 2)
        {
            numbout = ((numbin- 32)/ 1.8);
            cout << numbin << " Fahrenheit is " << numbout << " Celsius." << endl;
            
        }
        else
        {
            numbout = (((numbin -32)/1.8) + 273.15) ;
            cout << numbin << " Fahrenehit is " << numbout << " Kelvin." << endl;
        }
    
    }
    else if (conv == 4 || conv == 5)
    {
        cout << "Enter the amount in Kelvin: ";
        cin >> numbin;
        
        if (conv == 4)
        {
            numbout = (numbin - 273.15);
            cout << numbin << " Kelvin is " << numbout << " Celsius." << endl;
        }
        else
            {
                numbout = (((numbin - 273.15)*1.8) + 32);
                cout << numbin << " Kelvin is " << numbout << " Fahrenehit." << endl;
            }
        
        
    return 0;
}
}
