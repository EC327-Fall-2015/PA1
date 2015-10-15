#include <iostream>
#include <limits>//used when clearing the stream of a failed cin
using namespace std;

int main()
{
  double degrees = 0;//users temperature input
  double output = 0;
  int type = 0;//conversion mode
  string from = "";//Temperature standard being converted from; used to reduce the number of explicitly defined cases
  string to = "";//used in conjunction with 'from'
  int failcounter = 0;//to protect against infinite loops
  
  cout << "Celcius to Fahrenheit (enter 0)\n";
  cout << "Celcius to Kelvin (enter 1)\n";
  cout << "Fahrenheit to Celsius (enter 2)\n";
  cout << "Fahrenheit to Kelvin (enter 3)\n";
  cout << "Kelvin to Celsius (enter 4)\n";
  cout << "Kelvin to Fahrenheit (Enter 5)\n";
  cout << "Conversion type: ";
  cin >> type;
  
  while (type > 5 || type < 0 || cin.fail())//checks for invalid input
    {
	  cin.clear(); //clearing the cin from the non-numbers entered
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Wrong input, try again: ";
		cin >> type;
		failcounter++;
		if (failcounter>=30)//breaks the loop if it goes on for too long
		  {
		  cout << "Break!\n";
			break;
		}
	}
  failcounter = 0;//reseting the counter
	
	switch (type)//defining 'from' and 'to' here to reduce explicitly defined statements below
    {
    case 0:
      from = "Celsius";
      to = "Fahrenheit";
      break;
    case 1:
      from = "Celsius";
      to = "Kelvin";
      break;
    case 2:
      from = "Fahrenheit";
      to = "Celsius";
      break;
    case 3:
      from = "Fahrenheit";
      to = "Kelvin";
      break;
    case 4:
      from = "Kelvin";
      to = "Celsius";
      break;
    case 5:
      from = "Kelvin";
      to = "Fahrenheit";
      break;
    }
  
  cout << "Enter the amount in " << from <<": ";
  cin >> degrees;
  
  while (cin.fail())//checking for invalid input
    {
	  cin.clear(); //clearing the cin from the non-numbers entered
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Wrong input, try again: ";
		cin >> degrees;
		failcounter++;
		if (failcounter>=30)//breaks the loop if it goes on for too long
		  {
		  cout << "Break!\n";
			break;
		}
	}
  
  if (type == 2 || type == 3)//this section converts any value entered to Celsius, regardless of output type
    {output = (degrees -32)/1.8;}//converting F to C
  else if (type == 4 || type == 5)
    {output = degrees -273.15;}//Converting K to C
  else if (type == 0 || type == 1)
    {output = degrees;}
  
  if (type == 0 || type == 5)//This section converts the temperature to the desired output
    {output = (output * 1.8) + 32;}//converting to Fahrenheit
  else if (type == 1 || type == 3)
    {output = (output + 273.15);}//converting to Kelvin
  
  cout << degrees << " " << from << " is " << output << " " << to << ".\n";
  
  return 0;
}
