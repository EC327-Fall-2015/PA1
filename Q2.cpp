//
//  main.cpp
//  PA Question 2
//
//  Created by Alyssa Myszewski on 9/26/15.
//  Copyright © 2015 Alyssa Myszewski. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    //initializes variables
    int conversion;
    double temp;
    float newtemp;
    
    //sets output to be to 3 decimal places
    
    std::cout << std::setprecision(3) << std::fixed;
    
    //prompts user for input and displays options for conversion
    
    cout<<"Celsius to Fahrenheit(enter 0)"<<endl;
    cout<<"Celsius to Kelvin(enter 1)"<<endl;
    cout<<"Fahrenheit to Celsius(enter 2)"<<endl;
    cout<<"Fahrenheit to Kelvin(enter 3)"<<endl;
    cout<<"Kelvin to Celsisus(enter 4)"<<endl;
    cout<<"Kelvin to Fahrenheit(enter 5)"<<endl;
    cout<<"Conversion Type: "<<endl;
    
    cin>>conversion;
    
    //error checks input
  
    while (cin.fail())
    {
        cout<<"Error, Please Try Again"<<endl;
        cout<<"Conversion Type: "<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        cin>> conversion;
        
    }
    
    
    while  (conversion < 0 || conversion > 5)
    {
        
       cout<<"Error: Please Try Again" <<endl;
       cout<<"Conversion Type: "<<endl;
       cin>>conversion;
        
    }
    
    //conversion calculations
    
    if (conversion==0)
        {
          cout<<"Enter the amount in Celsius: "<<endl;
            cin>> temp;
            newtemp= (temp*1.800)+32.000;
          cout<<""<<temp<<" Celsius is "<<newtemp<<" Fahrenheit."<<endl;
         
        }
    
    if (conversion==1)
        {
           cout<<"Enter the amount in Celsius: "<<endl;
            cin>>temp;
            newtemp=temp+273.150;
           cout<<""<<temp<<" Celsius is "<<newtemp<<" Kelvin."<<endl;
            
        }
            
    if (conversion==2)
        {
            cout<<"Enter the amount in Fahrenheit: "<<endl;
            cin>>temp;
            newtemp=((temp-32.000)/1.800);
            cout<<""<<temp<<" Fahrenheit is "<<newtemp<<" Celsius."<<endl;
           
        }
    
    if (conversion==3)
        {
            cout<<"Enter the amount in Fahrenheit: "<<endl;
            cin>>temp;
            newtemp=(temp+459.670)*(5/9);
            cout<<""<<temp<<" Fahrenheit is "<<newtemp<<" Kelvin."<<endl;
            
        }
    
    if (conversion==4)
        {
            cout<<"Enter the amount in Kelvin: "<<endl;
            cin>>temp;
            newtemp=(temp-273.150);
            cout<<""<<temp<<" Kelvin is "<<newtemp<<" Celsius."<<endl;
            
        }
    
    if (conversion==5)
        {
            cout<<"Enter the amount in Kelvin: ";
            cin>>temp;
            newtemp=temp*1.800-459.670;
            cout<<""<<temp<<" Kelvin is "<<newtemp<<" Fahrenheit."<<endl;
           
        }
    return 0;
}
