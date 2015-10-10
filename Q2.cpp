#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Next 6 lines informing the user of conversion options
    cout << "Celsius to Fahrenheit (enter 0)";
    cout << "\nCelsius to Kelvin (enter 1)";
    cout << "\nFahrenheit to Celsius (enter 2)";
    cout << "\nFahrenheit to Kelvin (enter 3)";
    cout << "\nKelvin to Celsius (enter 4)";
    cout << "\nKelvin to Fahrenheit (enter 5)";
    double usernum;                      //Creating variable for user input for conversion type
    cout << "\nConversion type: ";    //User enters number 0-5 to determine conversion
    cin >> usernum;

    //If the user input is not in the range from 0 to 5 and is not a number, the code asks the user to enter the conversion type again
    if (cin.fail())
        {
            cout << "Wrong input, try again: ";
            cin >> usernum;
        }
    while (usernum != 0 && usernum != 1 && usernum != 2 && usernum != 3 && usernum != 4 && usernum != 5)
        {
            cout << "Wrong input, try again: ";
            cin >> usernum;
        }

    //Next lines convert the user input into what conversion type they chose
    //Starts off with an if statement and then goes into if-else statements
    //Each segment determines what the user enter and jumps to the type they chose and asks for a temperature
    //After the temperature is entered, the code calculates the conversion
        if (usernum == 0) //Converts from Celsius to Fahrenheit
        {
            cout << "Enter the amount in Celsius: ";
            double wantedconversion0;
            double conversion0;
            cin >> wantedconversion0;
            conversion0 = ((wantedconversion0*9)/5)+32;
            cout << std::fixed << std::setprecision(3) << wantedconversion0 << " Celcius is " << std::setprecision(3) << conversion0 << " Fahrenheit";
            return 0;
        }
    
        else if (usernum == 1) //Converts from Celsius to Kelvin
        {
            cout << "Enter the amount in Celsius: ";
            double wantedconversion1;
            double conversion1;
            cin >> wantedconversion1;
            conversion1 = wantedconversion1+273.15;
            cout << std::fixed << std::setprecision(3) << wantedconversion1 << " Celcius is " << std::setprecision(3) << conversion1 << " Kelvin";
            return 0;
        }
    
        else if (usernum == 2) //Converts from Fahrenheit to Celsius
        {
            cout << "Enter the amount in Fahrenheit: ";
            double wantedconversion2;
            double conversion2;
            cin >> wantedconversion2;
            conversion2 = ((wantedconversion2-32)*5)/9;
            cout << std::fixed << std::setprecision(3) << wantedconversion2 << " Fahrenheit is " << std::setprecision(3) << conversion2 << " Celsius";
            return 0;
        }
    
        else if (usernum == 3) //Converts from Fahrenheit to Kelvin
        {
            cout << "Enter the amount in Fahrenheit: ";
            double wantedconversion3;
            double conversion3;
            cin >> wantedconversion3;
            conversion3 = ((wantedconversion3+459.67)*5)/9;
            cout << std::fixed << std::setprecision(3) << wantedconversion3 << " Fahrenheit is " << std::setprecision(3) << conversion3 << " Kelvin";
            return 0;
        }
    
        else if (usernum == 4) //Converts from Kelvin to Celsius
        {
            cout << "Enter the amount in Kelvin: ";
            double wantedconversion4;
            double conversion4;
            cin >> wantedconversion4;
            conversion4 = wantedconversion4-273.15;
            cout << std::fixed << std::setprecision(3) << wantedconversion4 << " Kelvin is " << std::setprecision(3) << conversion4 << " Celsius";
            return 0;
        }
    
        else if (usernum == 5) //Converts from Kelvin to Fahrenheit
        {
            cout << "Enter the amount in Kelvin: ";
            double wantedconversion5;
            double conversion5;
            cin >> wantedconversion5;
            conversion5 = ((wantedconversion5*9)/5)-459.67;
            cout << std::fixed << std::setprecision(3) << wantedconversion5 << " Kelvin is " << std::setprecision(3) << conversion5 << " Fahrenheit";
            return 0;
        }

            return 0;

}//End of program
