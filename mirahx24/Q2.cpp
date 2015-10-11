#include <iostream>
#include <iomanip> //fixed decimal place
using namespace std;

int main()
{
//Display types of convertion
        cout << "Celsius to Fahrenheit (enter 0)" << endl << "Celsius to Kelvin (enter 1)" << endl << "Fahrenheit to Celsius (enter 2)" << endl << "Fahrenheit to Kelvin (enter 3)" << endl << "Kelvin to Celsius (enter 4)" << endl << "Kelvin to Fahrenheit (enter 5)" << endl;

//User choose the type of convention
        int choice = 10;
        cout << "Conversion type: ";
        cin >> choice;
//If user enter the invaild number, reprompt the user until the user enters
//choice from 0 to 5
        while (choice < 0 || choice > 5)
        {
                cout << "Wrong input, try again: ";
                cin.clear();
                cin.ignore(256,'\n');
		cin >> choice;
        }
//set up the variables that store value for Celsius, Fahrenheit, and Kelvin
//Celsius in cels, Fahrenheit in fahr, Kelvin in kelv
        double cels, fahr, kelv;
        cout << fixed;
        cout << setprecision(3);

//If user wants to convert Celsius to Fahrenheit or Kelvin

        if (choice == 0 || choice == 1)
        {
                cout << "Enter the amount in Celsius: ";
                cin >> cels;

//check if user enters a numeric value, if not, prompt again
                while (cin.fail())
                {
                        cout << "Wrong input, try again: ";
                        cin.clear();
                        cin.ignore(256,'\n');
                        cin >> cels;
 		}
//if user wants to convert Celsius to Fahrenheit
                if (choice == 0)
                {
                        fahr = cels * 1.8 + 32;
                        cout << cels << " Celsius is " << fahr << " Fahrenheit." << endl;
                }
//if user wants to convert Celsius to Kelvin
                else if (choice == 1)
                {
                        kelv = cels + 273.15;
                        cout << cels << " Celsius is " << kelv << " Kelvin." << endl;
                }
        }
//If user wants to convert Fahrenheit to Celsius or Kelvin      
        else if (choice == 2 || choice == 3)
        {
                cout << "Enter the amount in Fahrenheit: ";
                cin >> fahr;
		while (cin.fail())
                {
                        cout << "Wrong input, try again: ";
                        cin.clear();
                        cin.ignore(256,'\n');
                        cin >> fahr;
                }

//if user wants to convert Fahrenheit to Celsius                
                if (choice == 2)
                {
                        cels = (fahr -32) / 1.800;
                        cout << fahr << " Fahrenheit is " << cels << " Celsius" << endl;
                }
//if user wants to convert Fahrenheit to Kelvin
                else if (choice == 3)
                {
                        kelv == (fahr + 459.67);
			cout << fahr << " Fahrenheit is " << kelv << " Kelvin." << endl;
                }
        }
//If user wants to convert Kelvin to Celsius or Fahrenheit
        else if ( choice == 4 || choice == 5)
        {
                cout << "Enter the amount in Kelvin: ";
                cin >> kelv;
                while (cin.fail())
                {
                        cout << "Wrong input, try again:";
                        cin.clear();
                        cin.ignore(256,'\n');
                        cin >> kelv;
                }
//if user wants to convert Kelvin to Celsius
                if (choice == 4)
                {
                        cels = kelv - 273.15;
                        cout << kelv << " Kelvin is " << cels << " Celsius." << endl;
              }
//if user wants to convert Kelvin to Fahrenheit         
                else if (choice == 5)
                {
                        fahr = (kelv - 273.15) * 1.8 + 32;
                        cout << kelv << " Kelvin is " << fahr << " Fahrenheit." << endl;
                }
        }
return 0;
}

