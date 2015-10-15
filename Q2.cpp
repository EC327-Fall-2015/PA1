//
//  main.cpp
//  PA1_Q2
//
//  Created by Srilalitha Kumaresan on 9/30/15.

// preprocessor directives
#include <iostream>// needed for cin cout
#include <iomanip>// needed for setting precision
using namespace std;

int main()
{
    int conversionType;// To hold integer representing conversion type
    double temp;// To hold temperature value
    bool done = 0;// To check if program is finished runnint
    
    // Prompt user for input
    cout<<" Select a conversion type "<<endl<<" Celsius to Fahrenheit (enter 0)"<<endl;
    cout<< " Celsius to Kelvin (enter 1)" << endl<< " Fahrenheit to Celsius (enter 2)" <<endl;
    cout<< " Fahrenheit to Kelvin (enter 3)"<< endl<< " Kelvin to Celsius (enter 4)"<<endl;
    cout<< " Kelvin to Fahrenheit (enter 5)"<<endl;
    cout<< " Conversion type: ";
   
   
    // do while loop to loop if incorrect conversion type chosen, while done not equal to 1
    do {
         cin>> conversionType;// user input
   
        switch (conversionType)// switch over conversion type value
        {
            case 0 :
            {   cout<< "Enter the amount in Celsius: ";
                cin>> temp;
                cout<<fixed;
                cout<<setprecision(2);
                cout<< temp<<" Celsius is ";
                temp = (9*temp/5) + 32;
                cout<<fixed;
                cout<<setprecision(2);
                cout<< temp << " Fahrenheit."<<endl;
                done = 1;
                break;
            }
            case 1:
            {   cout<< "Enter the amount in Celsius: ";
                cin>> temp;
                cout<<fixed;
                cout<<setprecision(2);
                cout<< temp<< " Celsius is ";
                temp += 273.15;
                cout<<fixed;
                cout<<setprecision(2);
                cout<< temp << " Kelvin."<<endl;
                done = 1;
                break;
            }
            case 2:
            {   cout<< "Enter the amount in Fahrenheit: ";
                cin>> temp;
                cout<<fixed;
                cout<<setprecision(2);
                cout<< temp<< " Fahrenheit is ";
                temp = (temp - 32)*5/9;
                cout<<fixed;
                cout<<setprecision(2);
                cout<< temp << " Celsius."<<endl;
                done = 1;
                break;
            }
            case 3:
            {   cout<< "Enter the amount in Fahrenheit: ";
                cin>> temp;
                cout<<fixed;
                cout<<setprecision(2);
                cout<< temp<< " Fahrenheit is ";
                temp = (temp +459.67)*5/9;
                cout<<fixed;
                cout<<setprecision(2);
                cout<< temp << " Kelvin."<<endl;
                done = 1;
                break;
            }
            case 4:
            {   cout<< "Enter the amount in Kelvin: ";
                cin>> temp;
                cout<<fixed;
                cout<<setprecision(2);
                cout<< temp<< " Kelvin is ";
                temp -=273.15;
                cout<<fixed;
                cout<<setprecision(2);
                cout<< temp << " Celsius."<<endl;
                done = 1;
                break;
            }
            case 5:
            {   cout<< "Enter the amount in Kelvin: ";
                cin>> temp;
                cout<<fixed;
                cout<<setprecision(2);
                cout<< temp<< " Kelvin is ";
                temp = (temp*9/5) - 459.67;
                cout<<fixed;
                cout<<setprecision(2);
                cout<< temp << " Fahrenheit."<<endl;
                done = 1;
                break;
            }
            default:// if conversion type is invalid, loop again
            {   cout<<"Wrong input, try again: ";
                break;}
        }

    } while (done != 1);// if done, exit
    
            
            
    

    return 0;
}

