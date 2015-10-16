#include <iostream>
#include <string.h>
#include <string>
#include <cctype>
#include <stdio.h>
using namespace std;

int main(){

    double celsius, fahrenheit, kelvin, round;
    int strLength, rounded;
    std::string choice;
    bool isNum;
    
    // show the user all 6 options, and prompts the user to choose one
    cout<<"Celsius to Fahrenheit (enter 0)\nCelsius to Kelvin (enter 1)\nFahrenheit to Celsius (enter 2)\nFahrenheit to Kelvin (enter 3)\nKelvin to Celsius (enter 4)\nKelvin to Fahrenheit (enter 5)\nConversion type: ";
   
    // receive the entire line of input
    std::getline (std::cin,choice);
    
    // get the length of the user's input
    strLength = choice.length();
    
    /*error check if the first character of input is between 0 and 5(ascii values), and if user inputs more than 1 number or character*/
    while(choice.at(0)<48||choice.at(0)>53||strLength != 1){
        cout<<"Wrong input, try again: ";
        std::getline (std::cin,choice);
        strLength = choice.length();
    }
    
    /* prompt user for the amount in the chosen scale, error check if the user enters something other than numbers, calculate the new value for the temperature, and output the result*/
    switch ((int)choice.at(0)) {
        case 48:
            cout<<"Enter the amount in Celsius: ";
            cin>>celsius;
            isNum = cin.fail();
            while(isNum){
                cout<<"Wrong input, try again: ";
                cin.clear();
                cin.ignore(100,'\n');
                cin>>celsius;
                isNum = cin.fail();
            }
            fahrenheit = celsius*9/5+32;
            
            printf ("%.3f Celsius is %.3f Fahrenheit.\n",celsius,fahrenheit);
            break;
            
        case 49:
            cout<<"Enter the amount in Celsius: ";
            cin>>celsius;
            isNum = cin.fail();
            while(isNum){
                cout<<"Wrong input, try again: ";
                cin.clear();
                cin.ignore(100,'\n');
                cin>>celsius;
                isNum = cin.fail();
            }
            kelvin = celsius + 273.15;
            
            printf ("%.3f Celsius is %.3f Kelvin.\n",celsius,kelvin);
            break;
            
        case 50:
            cout<<"Enter the amount in Fahrenheit: ";
            cin>>fahrenheit;
            isNum = cin.fail();
            while(isNum){
                cout<<"Wrong input, try again: ";
                cin.clear();
                cin.ignore(100,'\n');
                cin>>fahrenheit;
                isNum = cin.fail();
            }
            celsius = (fahrenheit-32)*5/9;
            
            printf ("%.3f Fahrenheit is %.3f Celsius.\n",fahrenheit,celsius);
            break;
    
        case 51:
            cout<<"Enter the amount in Fahrenheit: ";
            cin>>fahrenheit;
            isNum = cin.fail();
            while(isNum){
                cout<<"Wrong input, try again: ";
                cin.clear();
                cin.ignore(100,'\n');
                cin>>fahrenheit;
                isNum = cin.fail();
            }
            kelvin = (fahrenheit + 459.67)*5/9;
            
            printf ("%.3f Fahrenheit is %.3f Kelvin.\n",fahrenheit,kelvin);
            break;
            
        case 52:
            cout<<"Enter the amount in Kelvin: ";
            cin>>kelvin;
            isNum = cin.fail();
            while(isNum){
                cout<<"Wrong input, try again: ";
                cin.clear();
                cin.ignore(100,'\n');
                cin>>kelvin;
                isNum = cin.fail();
            }
            celsius = kelvin - 273.15;
            
            printf ("%.3f Kelvin is %.3f Celsius.\n",kelvin,celsius);
            break;
            
        case 53:
            cout<<"Enter the amount in Kelvin: ";
            cin>>kelvin;
            isNum = cin.fail();
            while(isNum){
                cout<<"Wrong input, try again: ";
                cin.clear();
                cin.ignore(100,'\n');
                cin>>kelvin;
                isNum = cin.fail();
            }
            fahrenheit = kelvin*9/5 - 459.67;
            
            printf ("%.3f Kelvin is %.3f Fahrenheit.\n",kelvin,fahrenheit);
            break;
            
            
        default:
            break;
    }
    
    
    


    return 0;

}