// ----------------------------------------------------------------------------
// program converts numbers between Celsius, Fahrenheit, and Kelvin depending
// on user input.
// input: conversionType, inputValue
// output: converted value
// ----------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;

float inputValue;
float checkinputvalue(float inputValue);

int main()
{
  // asks user to choose conversion type
  int conversionType;
  cout << "Celsius to Fahrenheit (enter 0)" << endl <<
      "Celsius to Kelvin (enter 1)" << endl <<
      "Fahrenheit to Celsius (enter 2)" << endl <<
      "Fahrenheit to Kelvin (enter 3)" << endl <<
      "Kelvin to Celsius (enter 4)" << endl <<
      "Kelvin to Fahrenheit (enter 5)" << endl <<
      "Conversion type: ";
  cin >> conversionType;

  // checks if input was not one of the choices
  while (conversionType < 0 || conversionType >= 6 || cin.fail())
  {
    cout << "Wrong input, try again: ";
    cin.clear();
    cin.ignore(10000, '\n');
    cin >> conversionType;
  }

  // following six "if statements" convert input to desired output
  if (conversionType == 0)
  {
    cout << "Enter the amount in Celsius: ";
    cin >> inputValue;
    inputValue = checkinputvalue(inputValue);
    float C_to_F = (inputValue * (9.000 / 5)) + 32;

    cout << setprecision(3) << fixed << inputValue << " Celsius is " <<
      setprecision(3) << fixed << C_to_F << " Fahrenheit." << endl;
  }

  if (conversionType == 1)
  {
    cout << "Enter the amount in Celsius: ";
    cin >> inputValue;
    inputValue = checkinputvalue(inputValue);
    float C_to_K = inputValue + 273.15;

    cout << setprecision(3) << fixed << inputValue << " Celsius is " <<
      setprecision(3) << fixed << C_to_K << " Kelvin." << endl;
  }

  if (conversionType == 2)
  {
    cout << "Enter the amount in Fahrenheit: ";
    cin >> inputValue;
    inputValue = checkinputvalue(inputValue);
    float F_to_C = (inputValue - 32) * (5.000 / 9);

    cout << setprecision(3) << fixed << inputValue << " Fahrenheit is " <<
     setprecision(3) << fixed << F_to_C << " Celsius." << endl;
  }

  if (conversionType == 3)
  {
    cout << "Enter the amount in Fahrenheit: ";
    cin >> inputValue;
    inputValue = checkinputvalue(inputValue);
    float F_to_K = (inputValue + 459.67) * (5.000 / 9);

    cout << setprecision(3) << fixed << inputValue << " Fahrenheit is " <<
      setprecision(3) << fixed << F_to_K << " Kelvin." << endl;
  }

  if (conversionType == 4)
  {
    cout << "Enter the amount in Kelvin: ";
    cin >> inputValue;
    inputValue = checkinputvalue(inputValue);
    float K_to_C = inputValue - 273.15;

    cout << setprecision(3) << fixed << inputValue << " Kelvin is " <<
      setprecision(3) << fixed << K_to_C << " Celsius." << endl;
  }

  if (conversionType == 5)
  {
    cout << "Enter the amount in Kelvin: ";
    cin >> inputValue;
    inputValue = checkinputvalue(inputValue);
    float K_to_F = (inputValue * (9.000/5)) - 459.67;

    cout << setprecision(3) << fixed << inputValue << " Kelvin is " <<
      setprecision(3) << fixed << K_to_F << " Fahrenheit." << endl;
  }
  return 0;
}

// function to check if inputValue is a valid entry i.e. a letter is not valid
float checkinputvalue(float inputValue)
{
  while (cin.fail())
  {
    cout << "Wrong input, try again: ";
    cin.clear();
    cin.ignore(10000, '\n');
    cin >> inputValue;
  }
    return inputValue;
}

// ----------------------------------------------------------------------------
// Celsius to Fahrenheit (enter 0)
// Celsius to Kelvin (enter 1)
// Fahrenheit to Celsius (enter 2)
// Fahrenheit to Kelvin (enter 3)
// Kelvin to Celsius (enter 4)
// Kelvin to Fahrenheit (enter 5)
// Conversion type:
// Enter the amount in ______:
// _______ is _________
// ----------------------------------------------------------------------------
