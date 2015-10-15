#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
  int a;
  cout << "Celsius to Fahrenheit (enter 0)" << endl; //check for which conversion is required
  cout << "Celsius to Kelvin (enter 1)" << endl;
  cout << "Fahrenheit to Celsius (enter 2)" << endl;
  cout << "Fahrenheit to Kelvin (enter 3)" << endl;
  cout << "Kelvin to Celsius (enter 4)" << endl;
  cout << "Kelvin to Fahrenheit (enter 5)" << endl;
  cout << "Conversion Type: ";
  cin >> a;
  double out;
  
  while (a < 0 || a > 5) // while loop to check if input is within required range
    {
      cout << "Wrong input, try again: "; // ask for a valid input
      cin >> a;
    }
  
  if (a == 0 || a == 1) // if-else statement for conversion from Celsius
    {
      double cel;
      cout << "Enter the amount in Celsius: ";
      cin >> cel;
      while (isalpha(a)) // while loop to get new input if old input was a character
	{
	  cout << "Wrong input, try again: ";
	  cin >> cel;
	}
      if (a == 0) // Celsius to Fahrenheit
	{
	  out = (cel*1.8) + 32;
	  cout << fixed << setprecision(3) << cel << " Celsius is " << out << " Fahrenheit." << endl;
	}
      else if (a == 1) // Celsius to Kelvin
	{
	  out = cel + 273.15;
	  cout << fixed << setprecision(3) << cel << " Celsius is " << out << " Kelvin." << endl;
	}
    }
  else if (a == 2 || a == 3) // if-else statement for conversion from Fahrenheit
    {
      double fah;
      cout << "Enter the amount in Fahrenheit: ";
      cin >> fah;
      while (isalpha(a))
	{
	  cout << "Wrong input, try again: ";
	  cin >> fah;
	}
      if (a == 2) // Fahrenheit to Celsius
	{
	  out = (fah - 32) * (5 / 9);
	  cout << fixed << setprecision(3) << fah << " Fahrenheit is " << out << " Celsius." << endl;
	}
      else if (a == 3) // Fahrenheit to Kelvin
	{
	  out = (fah + 459.67) * (5 / 9);
	  cout << fixed << setprecision(3) << fah << " Fahrenheit is " << out << " Kelvin." << endl;
	}
    }
  else if (a == 4 || a == 5) // if-else statement for conversion from Kelvin
    {
      double kel;
      cout << "Enter the amount in Kelvin: ";
      cin >> kel;
      while (isalpha(a))
	{
	  cout << "Wrong input, try again: ";
	  cin >> kel;
	}
      if (a == 4) //Kelvin to Celsius
	{
	  out = kel - 273.15;
	  cout << fixed << setprecision(3) << kel << " Kelvin is " << out << " Celsius." << endl;
	}
      else if (a == 5) // Kelvin to Fahrenheit
	{
	  out = (kel * 1.8) - 459.67;
	  cout << fixed << setprecision(3) << kel << " Kelvin is " << out << " Fahrenheit." << endl;
	}
    }
  return 0;
}
