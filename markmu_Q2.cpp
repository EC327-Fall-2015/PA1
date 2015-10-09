//
//  main.cpp
//  Q2
//
//  Created by mu mark on 15/9/17.
//  Copyright (c) 2015年 Rong Mu. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <typeinfo>
#include <iomanip>
using namespace std;

int main()
{
    double code;
    double value;
    cout<<"Celsius to Fahrenheit (enter 0)"<<endl;      //prompt the user to choose a conversion
    cout<<"Celsius to Kelvin (enter 1)"<<endl;
    cout<<"Fahrenheit to Celsius (enter 2)"<<endl;
    cout<<"Fahrenheit to Kelvin (enter 3)"<<endl;
    cout<<"Kelvin to Celsius (enter 4)"<<endl;
    cout<<"Kelvin to Fahrenheit (enter 5)"<<endl;
    cout<<"Conversion type: ";
label:
    cin>>code;              //read the conversion type
    while (cin.fail()) {
    //if (cin.fail())
    //{
        cout<<"Wrong input, try again: ";
        cin.clear();
        cin.ignore(numeric_limits<int>::max(),'\n');
        cin>>code;
        //goto label;
    //}
    }

    if ((code==0 || code==1 || code==2 || code==3 || code==4 || code==5))   //if the conversion type is valid
    {
        switch ((int)code)
        {
            case 0:         //convert Celsius to Fahrenheit
                cout<<"Enter the amount in Celsius: ";
                cin>>value;
                while (cin.fail()) {
                    cout<<"Wrong input, try again: ";
                    cin.clear();
                    cin.ignore(numeric_limits<int>::max(),'\n');
                    cin>>value;
                }
                cout<<fixed;
                cout<<setprecision(3)<<value<<" Celsius is "<<setprecision(3)<<value*1.8+32<<" Fahrenheit.";
                break;
            case 1:         //convert Celsius to Kelvin
                cout<<"Enter the amount in Celsius: ";
                cin>>value;
                while (cin.fail()) {
                    cout<<"Wrong input, try again: ";
                    cin.clear();
                    cin.ignore(numeric_limits<int>::max(),'\n');
                    cin>>value;
                }
                cout<<fixed;
                cout<<setprecision(3)<<value<<" Celsius is "<<setprecision(3)<<value+273.150<<" Kelvin.";
                break;
            case 2:         //convert Fahrenheit to Celsius
                cout<<"Enter the amount in Fahrenheit: ";
                cin>>value;
                while (cin.fail()) {
                    cout<<"Wrong input, try again: ";
                    cin.clear();
                    cin.ignore(numeric_limits<int>::max(),'\n');
                    cin>>value;
                }
                cout<<fixed;
                cout<<setprecision(3)<<value<<" Fahrenheit is "<<setprecision(3)<<(value-32)/1.8<<" Celsius.";
                break;
            case 3:         //convert Fahrenheit to Kelvin
                cout<<"Enter the amount in Fahrenheit: ";
                cin>>value;
                while (cin.fail()) {
                    cout<<"Wrong input, try again: ";
                    cin.clear();
                    cin.ignore(numeric_limits<int>::max(),'\n');
                    cin>>value;
                }
                cout<<fixed;
                cout<<setprecision(3)<<value<<" Fahrenheit is "<<setprecision(3)<<(value+459.670)/1.8<<" Kelvin.";
                break;
            case 4:         //convert Kelvin to Celsius
                cout<<"Enter the amount in Kelvin: ";
                cin>>value;
                while (cin.fail()) {
                    cout<<"Wrong input, try again: ";
                    cin.clear();
                    cin.ignore(numeric_limits<int>::max(),'\n');
                    cin>>value;
                }
                cout<<fixed;
                cout<<setprecision(3)<<value<<" Kelvin is "<<setprecision(3)<<value-273.150<<" Celsius.";
                break;
            default:         //convert Kelvin to Fahrenheit
                cout<<"Enter the amount in Kelvin: ";
                cin>>value;
                while (cin.fail()) {
                    cout<<"Wrong input, try again: ";
                    cin.clear();
                    cin.ignore(numeric_limits<int>::max(),'\n');
                    cin>>value;
                }
                cout<<fixed;
                cout<<setprecision(3)<<value<<" Kelvin is "<<setprecision(3)<<value*1.8-459.670<<" Fahrenheit.";
                break;
        }
    }
    else               //erro check, if the conversion type is invalid
    {
        cout<<"Wrong input, try again: ";
        goto label;
        

    }
    return 0;
}
