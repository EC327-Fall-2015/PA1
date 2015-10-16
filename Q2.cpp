#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
#include <iomanip>

/* reference: http://www.rapidtables.com/convert/temperature/celsius-to-kelvin.htm */

using namespace std;

int main(){
  int n;
  double temp1;   // temp1 is the input temperature
  double temp2;   // temp2 is the output temperature

  cout << "Celsius to Fahrenheit (enter 0)" << endl;
  cout << "Celsius to Kelvin (enter 1)" << endl;
  cout << "Fahrenheit to Celsius (enter 2)" << endl;
  cout << "Fahrenheit to Kelvin (enter 3)" << endl;
  cout << "Kelvin to Celsius (enter 4)" << endl;
  cout << "Kelvin to Fahrenheit (enter 5)" << endl;


  cout << "Conversion type: ";       // ask the user to select the conversion type
  cin >> n;
  while ((n!=0) && (n!=1) && (n!=2) && (n!=3) && (n!=4) && (n!=5))  // if an incorrect code is entered
  {
    cout << "Wrong input, try again: ";                             // an error message should be shown               
    cin >> n;                                                       // the user will be prompted again
  }
   

  cout << "Enter the amount in Celsius: ";
  cin >> temp1;
  while (cin.fail()){
	  cout << "Wrong input, try again: ";
	  cin >> temp1;
  }
  
  switch (n)                 // perform the temperature conversion in the switch statement
    {
    case 0: temp2 = 1.8 * temp1 + 32;
      cout << fixed << setprecision(3) << temp1 << " Celsius is " << fixed << setprecision(3) << temp2 << " Fahrenheit." << endl;
	  break;

    case 1: temp2 = temp1 + 273.15;
      cout << fixed << setprecision(3) << temp1 << " Celsius is " << fixed << setprecision(3) << temp2 << " Kelvin." << endl;
	  break;

    case 2: temp2 = (temp1 - 32)/ 1.8;
      cout << fixed << setprecision(3) << temp1 << " Fahrenheit is " << fixed << setprecision(3) << temp2 << " Celsius." << endl;
	  break;

    case 3: temp2 = (temp1 + 459.67) * 5 / 9;
      cout << fixed << setprecision(3) << temp1 << " Fahrenheit is " << fixed << setprecision(3) << temp2 << " Kelvin." << endl;
	  break;
 
    case 4: temp2 = temp1 - 273.15;
      cout << fixed << setprecision(3) << temp1 << " Kelvin is " << fixed << setprecision(3) << temp2 << " Celsius." << endl;
	  break;

    case 5: temp2 = temp1 * 1.8 - 459.67;
      cout << fixed << setprecision(3) << temp1 << " Kelvin is " << fixed << setprecision(3) << temp2 << " Fahrenheit." << endl;
	  break;

    }

  return 0;
}













