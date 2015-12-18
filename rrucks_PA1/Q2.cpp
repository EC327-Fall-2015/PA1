//
//  Question 1.cpp
//
//  Created by Rebecca Rucks on 9/17/15.
//  Copyright (c) 2015 Rebecca Rucks. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int choice;
    float temp, newtemp, repeat;
    
    cout << "Celsius to Fahrenheit (enter 0)" << endl;
    cout << "Celsius to Kelvin (enter 1)"<< endl;
    cout << "Fahrenheit to Celsius (enter 2)"<< endl;
    cout << "Fahrenheit to Kelvin (enter 3)"<< endl;
    cout << "Kelvin to Celsius (enter 4)"<< endl;
    cout << "Kelvin to Fahrenheit (enter 5)"<< endl;
    cout << "Conversion type: ";
    cin >> choice; //displays menu and asks user for conversion

    
    while (cin.fail()) // while the type entered is not an integer
    {   cin.clear(); // clears the cin memory
        cin.ignore(256, '\n'); // ignores the first 256 characters entered or until the new line character, whichever comes first
        cout << "Wrong input, try again: "; // prompts user for new input
        cin >> choice;
    }
    
    
do{
    switch(choice)
    {
        case 0: cout << "Enter the amount in Celsius: ";
            cin >> temp; //reads in temperature
            while (cin.fail()) //error checks
            {   cin.clear();
                cin.ignore(256, '\n');
                cout << "Wrong input, try again: ";
                cin >> temp;
            }
            newtemp = 1.8*temp + 32; //converts temperature
            cout << fixed << std::setprecision(3) << temp << " Celsius is " << newtemp << " Fahrenheit." << endl;
            repeat = false; //ends while loop
            break;
        case 1: cout << "Enter the amount in Celsius: " << endl;
            cin >> temp; //reads in temperature
            while (cin.fail()) //error checks
            {   cin.clear();
                cin.ignore(256, '\n');
                cout << "Wrong input, try again: ";
                cin >> temp;
            }
            newtemp = temp + 273.15; //converts temp
            cout << fixed << std::setprecision(3) << temp << " Celsius is " << newtemp << " Kelvin." << endl;
            repeat = false; //ends while loop
            break;
        case 2: cout << "Enter the amount in Fahrenheit: ";
            cin >> temp; //reads in temperature
            while (cin.fail()) //error checks
            {   cin.clear();
                cin.ignore(256, '\n');
                cout << "Wrong input, try again: ";
                cin >> temp;
            }
            newtemp = (temp - 32)/1.8; //converts temp
            cout << fixed << std::setprecision(3) << temp << " Fahrenheit is " << newtemp << " Celsius." << endl;
            repeat = false; //ends while loop
            break;
        case 3: cout << "Enter the amount in Fahrenheit: ";
            cin >> temp; //reads in temperature
            while (cin.fail()) //error checks
            {   cin.clear();
                cin.ignore(256, '\n');
                cout << "Wrong input, try again: ";
                cin >> temp;
            }
            newtemp = (temp - 32)/1.8 + 273.15; //converts temp
            cout << fixed << std::setprecision(3) << temp << " Fahrenheit is " << newtemp << " Kelvin." << endl;
            repeat = false; //end while loop
            break;
        case 4: cout << "Enter the amount in Kelvin: ";
            cin >> temp; //reads in temperature
            while (cin.fail()) //error checks
            {   cin.clear();
                cin.ignore(256, '\n');
                cout << "Wrong input, try again: ";
                cin >> temp;
            }
            newtemp = temp-273.15; //converts temp
            cout << fixed << std::setprecision(3) << temp << " Kelvin is " << newtemp << " Celsius." << endl;
            repeat = false; //ends while loop
            break;
        case 5: cout << "Enter the amount in Kelvin: ";
            cin >> temp; //reads in temperature
            while (cin.fail()) //error checks
            {   cin.clear();
                cin.ignore(256, '\n');
                cout << "Wrong input, try again: ";
                cin >> temp;
            }
            newtemp = (temp-273.15)*1.8 + 32; //converts temp
            cout << fixed << std::setprecision(3) << temp << " Kelvin is " << newtemp << " Fahrenheit." << endl;
            repeat = false; //ends while loop
            break;
        default: cout << "Wrong input, try again: ";
            repeat = true; //causes loop to restart with selection of temp conversion
            cin >> choice; // reads new inputted user choice
            break;
     }
}while(repeat == true); //repeats until valid conversion has taken place 
  
    return 0;
}