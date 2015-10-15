#include <iostream>
#include <math.h>
#include <iomanip>
#include <limits>

using namespace std;

float celToKel(float cel);
float celToFar(float cel);
float kelToCel(float kel);
float kelToFar(float kel);
float farToCel(float far);
float farToKel(float far);
void checkInt();

int main()
{
    int input;
    float result;

    bool invalid = true;
    cout<<"Celsius to Fahrenheit (enter 0)"<<endl;
    cout<<"Celsius to Kelvin (enter 1)"<<endl;
    cout<<"Fahrenheit to Celsius (enter 2)"<<endl;
    cout<<"Fahrenheit to Kelvin (enter 3)"<<endl;
    cout<<"Kelvin to Celsius (enter 4)"<<endl;
    cout<<"Kelvin to Fahrenheit (enter 5)"<<endl;
    cout<<"Conversion Type: ";
    cin>>input;
    std::cout << std::fixed;
    std::cout << std::setprecision(3);

    while (cin.fail() || input > 5 || input < 0)
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout<<"Wrong input, try again: ";
        cin>>input;
    }
    if (input == 0) //Case 1
    {
         while (cin.fail())
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout<<"Wrong input, try again: ";
            cin>>input;
        }
        cout<<"Enter amount in Celsius: ";
        cin>>result;
        cout<<result<<" Celsius is "<<celToFar(result)<<" Fahrenheit"<<endl;
    }
    else if (input == 1) //Case 2
    {
        cout<<"Enter amount in Celsius: ";
        cin>>result;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout<<"Wrong input, try again: ";
            cin>>input;
        }
        cout<<result<<" Celsius is "<<celToKel(result)<<" Kelvin"<<endl;
    }
    else if (input == 2) //Case 3
    {
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout<<"Wrong input, try again: ";
            cin>>input;
        }
        cout<<"Enter amount in Fahrenheit: ";
        cin>>result;
        cout<<result<<" Fahrenheit is "<<farToCel(result)<<" Celsius"<<endl;
    }
    else if (input == 3) //Case 4
    {
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout<<"Wrong input, try again: ";
            cin>>input;
        }
        cout<<"Enter amount in Fahrenheit: ";
        cin>>result;
        cout<<result<<" Fahrenheit is "<<farToKel(result)<<" Kelvin"<<endl;
    }
    else if (input == 4) //Case 5
    {
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout<<"Wrong input, try again: ";
            cin>>input;
        }
        cout<<"Enter amount in Kelvin: ";
        cin>>result;
        cout<<result<<" Kelvin is "<<kelToCel(result)<<" Celsius"<<endl;
    }
    else if (input == 5) //Case 6
    {
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout<<"Wrong input, try again: ";
            cin>>input;
        }
        cout<<"Enter amount in Kelvin: ";
        cin>>result;
        cout<<result<<" Kelvin is "<<kelToFar(result)<<" Fahrenheit"<<endl;
    }

    return 0;
}


float celToKel(float cel)
{
    return cel + 273.150;
}

float kelToCel(float kel)
{
    return kel - 273.150;
}

float celToFar(float cel)
{
    return cel*9/5+32;
}

float farToCel(float far)
{
    return (far-32)*5/9;
}

float kelToFar(float kel)
{
    return celToFar(kelToCel(kel));
}

float farToKel(float far)
{
    return celToKel(farToCel(far));
}
