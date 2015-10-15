/* Write a program that converts numbers among Celsius, Fahrenheit, and Kelvin. 
Note that your program should be capable of doing the conversion from any of these 
to the other. 
The program should start by asking the user to select the conversion type. 
If an incorrect code is entered (e.g. 6 or -1) 
an error message should be shown and the user should be prompted again. 

Celsius to Fahrenheit (enter 0)
Celsius to Kelvin (enter 1)
Fahrenheit to Celsius (enter 2)
Fahrenheit to Kelvin (enter 3)
Kelvin to Celsius (enter 4)
Kelvin to Fahrenheit (enter 5)
*/

#include <iostream>

#include <cmath>

using namespace std;

int main()

{
        float ct, c, f, k;

        cout << "Celsius to Fahrenheit (enter 0)" << endl;
        cout << "Celsius to Kelvin (enter 1)" << endl;
        cout << "Fahrenheit to Celsius (enter 2)" << endl;
        cout << "Fahrenheit to Kelvin (enter 3)" << endl;
        cout << "Kelvin to Celsius (enter 4)" << endl;
        cout << "Kelvin to Fahrenheit (enter 5)" << endl;
        cout << "Conversion Type: " << endl;

        cin >> ct;


        //Celsius to Fahrenheit
        if (ct== 0)
		{
			cout << "Enter the amount in Celsius:" << endl;
        	cin >> c;
           	f = (9/5)*c +32.00;
			cout << c << " Celsius is " << f << " Fahrenheit" << endl;
        }

        //Celsius to Kelvin
        if (ct ==1)
        {
			cout << "Enter the amount in Celsius:" << endl;
        	cin >> c;
        	k = c + 273.15;
        	cout << c << " Celsius is " << k << " Kelvin" << endl;
        }

        //Fahrenheit to Celsius
        if (ct ==2)
        {
			cout << "Enter the amount in Fahrenheit:" << endl;
        	cin >> f;
      	  	c = (5/9)*(f-32.00);
        	cout << f << " Fahrenheit is " << c << " Celsius" << endl;
        }
		
        //Fahrenheit to Kelvin
        if (ct ==3)
        {
			cout << "Enter the amount in Fahrenheit:" << endl;
        	cin >> f;
        	k = (5/9)*(f-32.00) + 273.15;
        	cout << f << " Fahrenheit is " << k << " Kelvin" << endl;
        }

        //Kelvin to Celsius
        if (ct ==4)
        {
			cout << "Enter the amount in Kelvin:" << endl;
        	cin >> k;
   		 	c = k-273.15;
        	cout << k << " Kelvin is " << c << " Celsius" << endl;
        }

        //Kelvin to Fahrenheit
        if (ct ==5)
        {
			cout << "Enter the amount in Kelvin:" << endl;
        	cin >> k;
			f = ((1.8)*(k-273.15)) + 32.00;
        	cout << k << " Kelvin is " << f << " Fahrenheit" << endl;
        }	
		
		while (ct!=0 or ct!=1 or ct!=2 or ct!=3 or ct!=4 or ct!=5)
		{
			cout << "Wrong input, try again:" << endl;
			cin >> ct;
		}
}
