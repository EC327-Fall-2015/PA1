

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{

  double conversionType = 0;
  double celsius = 0;
  double fahrenheit = 0;
  double kelvin = 0;


  // Promp user to select conversion type
  cout << "Celsius to Fahrenheit (enter 0)" << endl << "Celsius to Kelvin (enter 1)" <<
    endl << "Fahrenheit to Celsius (enter 2)" << endl << "Fahrenheit to Kelvin (enter 3)" <<
    endl << "Kelvin to Celsius (enter 4)" << endl << "Kelvin to Fahrenheit (enter 5)" <<
    endl << "Conversion type: ";

 

  /* check if conversionType is a valid input, if not prompt for new value
     Reference note: I found the !(cin) check on various websites online (stackoverflow was one). 
     If !(cin >> conversionType) is true, it means that the input variable was the wrong type. cin.clear() clears the cin, and cin.ignore skips to the next new line (up to 1000 characters) */
  
  while( !(cin >> conversionType) || conversionType != 0 && conversionType != 1 && conversionType != 2 && conversionType != 3 && 
      conversionType != 4 && conversionType != 5)
  {
      
      cin.clear(); 
      cin.ignore(1000, '\n');
      cout << "Wrong input, try again: ";
  }
  
  // if conversionType is a valid input, prompt user to enter their selected temperature value. If incorrect input, prompt for new value. If correct, calculate the conversion and output the results.

  if (conversionType == 0 || conversionType == 1)
  {
    cout << "Enter the amount in Celsius: ";

    //check if input is valid
    while ( !(cin >> celsius))
    {
      cout << "Wrong input, try again: ";
      cin.clear();
      cin.ignore(1000, '\n');
    }

    switch (static_cast<int>(conversionType))
    {
      case 0: cout << fixed << setprecision(3) << celsius << " Celsius is " << (celsius * (9.0 / 5.0)) + 32.0 
		   << " Fahrenheit." << endl; break;
      case 1: cout << fixed << setprecision(3) << celsius << " Celsius is " << celsius + 273.15 << " Kelvin." << endl; 
    }
  }
  

  if (conversionType == 2 || conversionType == 3)
  {
    cout << "Enter the amount in Fahrenheit: ";
    
    while ( !(cin >> fahrenheit))
    {
      cout << "Wrong input, try again: ";
      cin.clear();
      cin.ignore(1000, '\n'); 
    }

  
    switch (static_cast<int>(conversionType))
    {
      case 2: cout << fixed << setprecision(3) << fahrenheit << " Fahrenheit is " << (5.0 / 9.0) * (fahrenheit - 32.0) << " Celsius." << endl; break;
      case 3: cout << fixed << setprecision(3) << fahrenheit << " Fahrenheit is " << (5.0 / 9.0) * (fahrenheit + 459.67) << " Kelvin." << endl; 
    }


  }

  if (conversionType == 4 || conversionType == 5)
  {
    cout << "Enter the amount in Kelvin: ";
    
    while ( !(cin >> kelvin))
    {
      cout << "Wrong input, try again: ";
      cin.clear();
      cin.ignore(1000, '\n');
    }

    switch (static_cast<int>(conversionType))
    {
      case 4: cout << fixed << setprecision(3) << kelvin << " Kelvin is " << kelvin - 273.15 << " Celsius." << endl; break;
      case 5: cout << fixed << setprecision(3) << kelvin << " Kelvin is " << (kelvin * (9.0 / 5.0)) - 459.67 << " Fahrenheit." << endl;
    }
  }
   
  
  return 0;
}
