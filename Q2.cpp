#include <iostream>
#include <cmath>
#include <iomanip>
#include <cctype>
using namespace std;

int main ()
{ 
  //Introduces variables.
  int CT;
  double celsius;
  double fahrenheit;
  double kelvin;
  double out;

  //Output statements for user interface and input for user.
  cout << "Celsius to Fahrenheit (enter 0)" << endl;
  cout << "Ceslius to Kelvin (enter 1)" << endl;
  cout << "Fahrenheit to Celsius (enter 2)" << endl;
  cout << "Fahrenheit to Kelvin (enter 3)" << endl;
  cout << "Kelvin to Celsius (enter 4)" << endl;
  cout << "Kelvin to Fahrenheit (enter 5)" <<endl;
  cout << "Conversion type: ";
  cin >> CT;
 
  //Error checking when CT is not a valid entry.
  while (CT < 0 || CT > 5)
    {
      cout << "Wrong input, try again: ";
      cin >> CT;
    }

  //If statements corresponding to what happens when CT = an integer in the range given in output.
  
  //Converting from Celsius to Fahrenheit
    if(CT == 0)
      { 
	cout << "Enter the amount in Celsius: ";
	cin >> celsius;
	out = celsius * (9/5) + 32;
	cout << std::setprecision(7) << celsius << " Celsius is " << std::setprecision(7) << out << " Fahrenheit." << endl;
      }
    //Converting from Celsius to Kelvin 
   else if(CT == 1)
      {
	cout << "Enter the amount in Celsius: ";
	cin >> celsius;
	out = celsius + 273.15;
	cout << std::setprecision(7) << celsius << " Celsius is " << std::setprecision(7) << out << " Kelvin." << endl;
       }
    //Converting from Fahrenheit to Celsius 
   else if (CT == 2)
      {
	cout << "Enter the amount in Fahrenheit: ";
	cin >> fahrenheit;
	out = (5/9) * (fahrenheit - 32);
	cout << std::setprecision(7) << fahrenheit << " Fahrenheit is " << std::setprecision(7) << out << " Celsius." << endl;
      }
    //Converting from Fahrenheit to Kelvin 
   else if (CT ==  3)
      {
	cout << "Enter the amount in Fahrenheit: ";
	cin >> fahrenheit;
	out = ((5/9) * (fahrenheit - 32)) + 273.15;
	cout << std::setprecision(7) << fahrenheit << " Fahrenheit is " << std::setprecision(7) << out << " Kelvin." << endl;
      }
    //Converting from Kelvin to Celsius
    else if (CT == 4)
      {
	cout << "Enter the amount in Kelvin: ";
	cin >> kelvin;
	out = kelvin - 273.15;
        cout << std::setprecision(7) << kelvin << " Kelvin is " << std::setprecision(7) << out << " Celsius." << endl;
      }
    //Converting from Kelvin to Fahrenheit
    else if (CT == 5)
      {
	cout << "Enter the amount in Kelvin: ";
	cin >> kelvin;
        out = (kelvin - 273.15) * 1.8 + 32;
	cout << std::setprecision(7) << kelvin << " Kelvin is " << std::setprecision(7) << out << " Fahrenheit." << endl;
      }

    return 0;
  }
