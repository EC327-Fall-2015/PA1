#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int error_check(int choice, int low_bound, int up_bound)
{
    while (!(cin >> choice) || choice < low_bound || choice > up_bound)
    {
    cout << "Wrong input, try again: ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return choice;
}

double error_check(double temp)
{
    while (!(cin >> temp))
    {
    cout << "Wrong input, try again: ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return temp;
}


int main()
{
    cout << "Celsius to Fahrenheit (enter 0)" <<endl;
    cout << "Celsius to Kelvin (enter 1)" <<endl;
    cout << "Fahrenheit to Celsius (enter 2)" <<endl;
    cout << "Fahrenheit to Kelvin (enter 3)" <<endl;
    cout << "Kelvin to Celsius (enter 4)" <<endl;
    cout << "Kelvin to Fahrenheit (enter 5)" <<endl;
    cout << "Conversion type: ";

    int choice = error_check(choice, 0, 5);

    double out;
    double temp;
    switch (choice)
    {
        case 0: cout << "Enter the amount in Celsius: ";
                temp = error_check(temp);
                out = (temp * 9 / 5) + 32;
                cout << fixed << setprecision(3) << temp << " Celsius is " <<out << " Fahrenheit.";
                break;

        case 1: cout << "Enter the amount in Celsius: ";
                temp = error_check(temp);
                out = (temp + 273.15);
                cout << fixed << setprecision(3) << temp << " Celsius is " <<out << " Kelvin.";
                break;

        case 2: cout << "Enter the amount in Fahrenheit: ";
                temp = error_check(temp);
                out = (temp - 32) * 5 / 9;
                cout << fixed << setprecision(3) << temp << " Fahrenheit is " << out << " Celsius.";
                break;

        case 3: cout << "Enter the amount in Fahrenheit: ";
                temp = error_check(temp);
                out = ((temp - 32) * 5 / 9) + 273.15;
                cout << fixed << setprecision(3) << temp << " Fahrenheit is " << out << " Kelvin.";
                break;

        case 4: cout << "Enter the amount in Kelvin: ";
                temp = error_check(temp);
                out = (temp - 273.15);
                cout << fixed << setprecision(3) << temp << " Kelvin is " << out << " Celsius.";
                break;

        case 5: cout << "Enter the amount in Kelvin: ";
                temp = error_check(temp);
                out = ((temp - 273.15) * 9 / 5) + 32;
                cout << fixed << setprecision(3) << temp << " Kelvin is " << out << " Fahrenheit.";
                break;
    }
    return 0;
}

