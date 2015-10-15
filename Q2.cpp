#include <iostream>
#include <cmath>
using namespace std;

//Temperature conversions

int main()

{

  int conversion;

  cout << "Celsius to Fahenheit (enter 0)" << endl;
  cout << "Celsius to Kelvin (enter 1)" << endl;
  cout << "Fahrenheit to Celsius (enter 2)" << endl;
  cout << "Fahrenheit to Kelvin (enter 3)" << endl;
  cout << "Kelvin to Celsius (enter 4)" << endl;
  cout << "Kelvin to Fahrenheit (enter 5)" << endl;
  cout << "Conversion type: ";
 cin >> conversion;


 //Error checking for characters 
 
   if((conversion>='a' && conversion<='z') || (conversion>='A' && conversion<='Z'))
     {
       cout << "Wrong input, try again: ";
       cin >> conversion;
     }
      
//Define temperature conversions for each case
//Convert then print the result and exit the program
   
switch(conversion)
{

  float degrees;
  float newdegrees;
 

 case 0:
  cout << "Enter the amount in Celsius: ";
  cin >> degrees;
 
  newdegrees = (degrees * (9/5)) + 32;
  cout << printf("%.2f", degrees) << " Celsius is " << printf("%.2f", newdegrees) << " Fahrenheit." << endl;
  break;

 case 1:
  cout << "Enter the amount in Celsius: ";
  cin >> degrees; 
 
  newdegrees= degrees + 273.15;
  cout << printf("%.3f ", degrees) << " Celsius is " << printf("%.3f ", newdegrees) << " Kelvin." << endl;
  break;

 case 2:
   cout << "Enter the amount in Fahrenheit: ";
   cin >> degrees;

   newdegrees= (degrees-32) * (5/9);
   cout << printf("%.3f ", degrees) << " Fahrenheit is " << printf("%.3f ", newdegrees) << " Celsius." << endl; 
   break;

 case 3:
   cout << "Enter the amount in Fahrenheit: ";
   cin >> degrees;

   newdegrees= (degrees-32) * (5/9) + 273.15;
   cout << printf("%.3f ", degrees) << " Fahrenheit is " << printf("%.3f ", newdegrees) << " Kelvin." << endl;
   break;

 case 4:
   cout << "Enter the amount in Kelvin: ";
   cin >> degrees;

   newdegrees= degrees - 273.15;
   cout << printf("%.3f ", degrees) << " Kelvin is " << printf("%.3f ", newdegrees) << " Celsius." << endl;
   break;

 case 5:
   cout << "Enter the amount in Kelvin: ";
   cin >> degrees;
   
   newdegrees= (degrees - 273.15) * (9/5) +32; 
   cout << printf("%.3f ", degrees) << " Kelvin is " << printf("%.3f ", newdegrees) << " Fahrenheit." << endl;
   break;


}
   


    return 0;

}
