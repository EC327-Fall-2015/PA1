#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  cout << "Celsius to Farenheit(enter 0)"<< endl;
  cout << "Celsius to Kelven(enter 1)" << endl;
  cout << "Fahrenheit to Celsius(enter 2)" << endl;
  cout << "Fahrenheit to Kelven(enter 3)" << endl;
  cout << "Kelven to Fahrenheit(enter 4)" << endl;
  cout << "Kelven to Celcius(enter 5)" << endl;
  cout << "Conversion type:"<<endl;
  int type;
  cin>> type;
  if (type == 0)
    { 
      cout<<" Enter amount in Celsius:"<<endl;
      double temp1;
      cin >> temp1;
      double temp2;
      temp2 = (temp1 * (9/5)) + 32;
      cout << fixed;
      cout << setprecision(3)<< temp1 << " Celcius is"<< temp2 << " Fahrenheit"<<endl;
    }
  if (type == 1)
    { 
      cout<<" Enter amount in Celsius:"<<endl;
      double temp1;
      cin >> temp1;
      double temp2;
      temp2 = temp1 + 273.15;
      cout << fixed;
      cout << setprecision(3) << temp1 << " Celcius is"<< temp2 << " Kelvin"<<endl;
    }
  if (type == 2)
    { 
      cout<<" Enter amount in Farenheit:"<<endl;
      double temp1;
      cin >> temp1;
      double temp2;
      temp2 = (temp1 - 32) *(5/9);
      cout << fixed;
      cout << setprecision(3) << temp1 << " Fahreinheit is"<< temp2 << " Celcius"<<endl;
    } 
  if (type == 3)
    { 
      cout<<" Enter amount in Farenheit:"<<endl;
      double temp1;
      cin >> temp1;
      double temp2;
      temp2 = (temp1 + 459.67) * (5/9);
      cout << fixed;
      cout << setprecision(3) << temp1 << " Farenheit is"<< temp2 << " Kelvin"<<endl;
    }  
  if (type == 4)
    { 
      cout<<" Enter amount in Kelvin:"<<endl;
      double temp1;
      cin >> temp1;
      double temp2;
      temp2 = temp1 - 273.15;
      cout << fixed;
      cout << setprecision(3) << temp1 << " Kelvin is"<< temp2 << " Celcius"<<endl;
    } 
  if (type == 5)
    { 
      cout<<" Enter amount in Kelvin:"<<endl;
      double temp1;
      cin >> temp1;
      double temp2;
      temp2 = (temp1 * (9/5)) - 459.67;
      cout << fixed;
      cout << setprecision(3) << temp1 << " Kelvin is"<< temp2 << " Fahrenheit"<<endl;
    } 
  return 0; 
    }
      
