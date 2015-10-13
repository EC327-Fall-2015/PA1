#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double choice;

    cout << "Celsius to Fahrenheit (enter 0)\n";
    cout << "Celsius to Kelvin (enter 1)\n";
    cout << "Fahrenheit to Celsius (enter 2)\n";
    cout << "Fahrenheit to Kelvin (enter 3)\n";
    cout << "Kelvin to Celsius (enter 4)\n";
    cout << "Kelvin to Fahrenheit (enter 5)" << endl;

    cout << "Conversion type: ";
    cin >> choice;


while (true)
{
    if (choice == 0)
    {
        //C to F
        double temp, ans;
        cout << "Enter the amount in Celsius: ";
        cin >> temp;
        ans = (temp*1.8)+32; //formula
        cout << setprecision(3) << fixed << setprecision(3) << temp << " Celsius is " << fixed << setprecision(3) << ans << " Fahrenheit."; //set precision only displays 3 decimal places
        break;
    }


    if (choice == 1)
    {
        //C to K
        double temp, ans;
        cout << "Enter the amount in Celsius: ";
        cin >> temp;
        ans = temp+273.15;
        cout << setprecision(3) << fixed << setprecision(3) << temp << " Celsius is " << fixed << setprecision(3) << ans << " Kelvin.";
        break;
    }

    if (choice == 2)
    {
        //F to C
        double temp, ans;
        cout << "Enter the amount in Fahrenheit: ";
        cin >> temp;
        ans = (temp - 32)/1.8;
        cout << setprecision(3) << fixed << setprecision(3) << temp << " Fahrenheit is " << fixed << setprecision(3) << ans << " Celsius.";
        break;

    }

    if (choice == 3)
    {
        //F to K
        double temp, ans;
        cout << "Enter the amount in Fahrenheit: ";
        cin >> temp;
        ans = ((temp-32)*(5/9))+273.15;
        cout << setprecision(3) << fixed << setprecision(3) << temp << " Fahrenheit is " << fixed << setprecision(3) << ans << " Kelvin.";
        break;
    }

    if (choice == 4)
    {
        //K to C
        double temp, ans;
        cout << "Enter the amount in Kelvin: ";
        cin >> temp;
        ans = temp - 273.15;
        cout << setprecision(3) << fixed << setprecision(3) << temp << " Kelvin is " << fixed << setprecision(3) << ans << " Celsius.";
        break;

    }

    if (choice == 5)
    {
        //K to F
        double temp, ans;
        cout << "Enter the amount in Kelvin: ";
        cin >> temp;
        ans = (temp*1.8)-459.7;
        cout << setprecision(3) << fixed << setprecision(3) << temp << " Kelvin is " << fixed << setprecision(3) << ans << " Fahrenheit.";
        break;
    }
    //if anything else beside 0-5 is entered...
    else if (choice<=-1 || choice >=6)
    {
        cout << "Wrong input, try again: ";
        cin >> choice;
        continue; //restart loop again
    }
}
    return 0;
}
