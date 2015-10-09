#include <iostream>
#include <iomanip> //for setprevision

using namespace std;

int main()
{

double cels, fahr, kelv, temp1, temp2; //declare variables for celsius, fahrenheit, kelvin, and temperatures
int x; //conversion type variable

cout << "Celsius to Fahrehnheit (enter 0)" << endl;
cout <<" Celsius to Kelvin (enter 1)"<< endl;
cout << "Farenheit to Celsius (enter 2)" << endl;
cout << "Farenheit to Kelvin (enter 3)" << endl;
cout << "Kelvin to Celsius (enter 4)" << endl;
cout << "Kelvin to Fahrenheit (enter 5)" << endl;
cout << "Conversion type: ";
cin >> x; 

	while(cin.fail() || x < 0 || x > 5)		//error checking for non-numbers and invalid conversions
	{
		cin.clear();
		cin.ignore(250, '\n');
		cout << "Wrong input, try again: ";
		cin >> x;
	}
		if (x == 0)		//the following converts whatever input temperature into desired units
		{
			cout << "Enter the amount in Celsius: ";
			cin >> temp1; 
			temp2 = (temp1 * (9.0/5)) + 32; 

			cout << fixed;
			cout << setprecision(3) << temp1 << " Celsius is " << temp2 << " Fahrenheit"; //set precision is to set decimal amount
		}

		else if (x == 1)
		{
			cout << "Enter the amount in Celsius: ";
			cin >> temp1; 
			temp2 = temp1 + 273.15;
			cout << fixed;
			cout << setprecision(3) << temp1 << " Celsius is " << temp2 << " Kelvin";			
		}

		else if(x == 2)
		{
			cout << "Enter the amount in Fahrenheit: ";
			cin >> temp1; 
			temp2 = (temp1 - 32) * (5.0/9);
			cout << fixed;
			cout << setprecision(3) << temp1 << " Fahrenheit is " << temp2 << " Celsius";
		}

		else if(x == 3)
		{
			cout << "Enter the amount in Fahrenheit: ";
			cin >> temp1; 
			temp2 = (temp1 - 32) * 5.0/9 + 273.15;
			cout << fixed;
			cout << setprecision(3) << temp1 << " Fahrenheit is " << temp2 << " Kelvin";			
		}

		else if(x == 4)
		{
			cout << "Enter the amount in Kelvin: ";
			cin >> temp1; 
			temp2 = temp1 - 273.15;
			cout << fixed;
			cout << setprecision(3) << temp1 << " Kelvin is " << temp2 << " Celsius";			
		}

		else if(x == 5)
		{
			cout << "Enter the amount in Kelvin: ";
			cin >> temp1; 
			temp2 = (temp1 - 273.15) * 9.0/5 + 32;
			cout << fixed;
			cout << setprecision(3) << temp1 << " Kelvin is " << temp2 << " Fahrenheit";			
		}

return 0;
}
