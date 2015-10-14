//
//  Programming Assignment.cpp
//  Created by Kaitlin Walsh on 9/24/15.


#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    
    int convType;
    double tempConv;
    double finalTemp;


    
    cout<<"Celsius to Fahrenheit (enter 0)\nCelsius to Kelvin (enter 1)\nFahrenheit to Celsius (enter 2)\nFahrenheit to Kelvin (enter 3)\nKelvin to Celsius (enter 4)\nKelvin to Fahrenheit (enter 5) \n";
    cout<< "Conversion type: ";
    cin>> convType;
    
    while (convType > 5 || convType < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout<< "Wrong input, try again: ";
        cin>>convType;
    }
    
    if (convType == 0)      //C to F
    {
        cout<<"Enter the amount in Celcius: ";
        cin>>tempConv;
        
        while (cin.fail())
        {
            
            cin.clear();
            cin.ignore(1000, '\n');
            cout<< "Wrong input, try again: ";
            cin>>tempConv;
            
        }
        
        finalTemp = tempConv * 9.0/5 +32;
        cout<< setprecision(3) << fixed<< tempConv<< " Celcius is "<< finalTemp << " Fahrenheit.\n";
    }
    
    else if (convType == 1) //C to K
    {
        cout<<"Enter the amount in Celcius: ";
        cin>>tempConv;
        
        while (cin.fail())
        {
            
            cin.clear();
            cin.ignore(1000, '\n');
            cout<< "Wrong input, try again: ";
            cin>>tempConv;
            
        }
        
        finalTemp = tempConv + 273.15;
        cout<< setprecision(3) << fixed<< tempConv<< " Celcius is "<< finalTemp << " Kelvin.\n";
    }
    else if (convType == 2) //F to C
    {
        cout<<"Enter the amount in Fahrenheit: ";
        cin>>tempConv;
        
        while (cin.fail())
        {
            
            cin.clear();
            cin.ignore(1000, '\n');
            cout<< "Wrong input, try again: ";
            cin>>tempConv;
            
        }
        
        finalTemp = (tempConv - 32)*5.0/9;
        cout<< setprecision(3) << fixed<< tempConv<< " Fahrenheit is "<< finalTemp << " Celcius.\n";
    }
    else if (convType == 3) //F to K
    {
        cout<<"Enter the amount in Fahrenheit: ";
        cin>>tempConv;
        
        while (cin.fail())
        {
            
            cin.clear();
            cin.ignore(1000, '\n');
            cout<< "Wrong input, try again: ";
            cin>>tempConv;
            
        }
        
        finalTemp = (tempConv + 459.67)*5.0/9;
        cout<< setprecision(3) << fixed<< tempConv<< " Fahrenheit is "<< finalTemp << " Kelvin.\n";
        
    }
    else if (convType == 4) //K to C
    {
        cout<<"Enter the amount in Kelvin: ";
        cin>>tempConv;
        
        while (cin.fail() || tempConv < 0)
        {
            
            cin.clear();
            cin.ignore(1000, '\n');
            cout<< "Wrong input, try again: ";
            cin>>tempConv;
            
        }
            
        if (tempConv >= 0)
        {
            finalTemp = tempConv - 273.15;
            cout<< setprecision(3) << fixed<< tempConv<< " Kelvin is "<< finalTemp << " Celcius.\n";
        }

        
    }
    else if (convType == 5) //K to F
    {
        cout<<"Enter the amount in Kelvin: ";
        cin>>tempConv;
        
        while (cin.fail() || tempConv < 0)
        {

            cin.clear();
            cin.ignore(1000, '\n');
            cout<< "Wrong input, try again: ";
            cin>>tempConv;
            
        }

        
        if (tempConv >= 0)
        {
            finalTemp = tempConv * 9.0/5 - 459.67;
            cout<< setprecision(3) << fixed<< tempConv<< " Kelvin is "<< finalTemp << " Fahrenheit.\n";
        }
        
        
    }



    return 0;
    
}