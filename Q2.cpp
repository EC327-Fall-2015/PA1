#include <iostream>
#include <cmath>		
#include <iomanip>	

using namespace std;

int main()
{
	
	string choice;		//choice of conversion
	double before;		//number to be converted
	double after;		//number after conversion
	
	cout << "Celsius to Fahrenheit (enter 0)" << endl;
	cout << "Celsius to Kelvin (enter 1)" << endl;
	cout << "Fahrenheit to Celsius (enter 2)" << endl;
	cout << "Fahrenheit to Kelvin (enter 3)" << endl;
	cout << "Kelvin to Celsius (enter 4)" << endl;
	cout << "Kelvin to Fahrenheit (enter 5)" << endl;
	cout << "Conversion type: ";
	
	cin >> choice;
	
	cout << fixed << setprecision(3);	//displays output up to 3 places after decimal point
	
	//
	//CHECK IF INPUT IS ONE OF THE CHOICES
	//if input is not the wanted data type, error flag is set on cin.fail() and this runs until input is right data type
	while (cin.fail() || (choice!="0" && choice!="1" && choice!="2" && choice!="3" && choice!="4" && choice!="5"))
	{
		cout << "Wrong input, try again: ";
		cin.clear();					//clear the error flag
		cin.ignore(1000, '\n');			//clears up to 1000 characters from the input and/or up until a new line starts
		cin >> choice;
	}
	
	//
	//CONVERSION IF STATEMENTS BELOW
	//
	if (choice=="0")		//CELSIUS TO FAHRENHEIT
	{
		cout << "Enter the amount in Celsius: ";
		cin >> before;
		
		//INPUT CHECKING
		while(cin.fail())				//if input is not the wanted data type, error flag is set and this runs until input is right data type
		{
			cout << "Wrong input, try again: ";
			cin.clear();					//clear the error flag
			cin.ignore(1000, '\n');			//clears up to 1000 characters from the input and/or up until a new line starts
			cin >> before;
		}		
		
		after = (before * 9/5 + 32);
		
		cout << before << " Celsius is " << after << " Fahrenheit.";
	}
	
	else if (choice=="1")	//CELSIUS TO KELVIN
	{
		cout << "Enter the amount in Celsius: ";
		cin >> before;
		
		//INPUT CHECKING
		while(cin.fail())				
		{
			cout << "Wrong input, try again: ";
			cin.clear();					
			cin.ignore(1000, '\n');			
			cin >> before;
		}		
				
		after = (before + 273.15);
		
		cout << before << " Celsius is " << after << " Kelvin.";
	}
	
	else if (choice=="2")	//FAHRENHEIT TO CELSIUS
	{
		cout << "Enter the amount in Fahrenheit: ";
		cin >> before;

		//INPUT CHECKING
		while(cin.fail())				
		{
			cout << "Wrong input, try again: ";
			cin.clear();					
			cin.ignore(1000, '\n');			
			cin >> before;
		}		
				
		after = ((before - 32) * 5/9);
		
		cout << before << " Fahrenheit is " << after << " Celcius.";
	}

	else if (choice=="3")	//FAHRENHEIT TO KELVIN
	{
		cout << "Enter the amount in Fahrenheit: ";
		cin >> before;

		//INPUT CHECKING
		while(cin.fail())				
		{
			cout << "Wrong input, try again: ";
			cin.clear();					
			cin.ignore(1000, '\n');			
			cin >> before;
		}		
				
		after = ((before - 32) * 5/9);			//FAHRENHEIT TO CELSIUS
		after = (after + 273.15);				//CELSIUS TO KELVIN
		
		cout << before << " Fahrenheit is " << after << " Kelvin.";
	}

	else if (choice=="4")	//KELVIN TO CELSIUS
	{
		cout << "Enter the amount in Kelvin: ";
		cin >> before;
		
		//INPUT CHECKING
		while(cin.fail())				
		{
			cout << "Wrong input, try again: ";
			cin.clear();					
			cin.ignore(1000, '\n');			
			cin >> before;
		}		
				
		after = (before - 273.15);
		
		cout << before << " Kelvin is " << after << " Celsius.";
	}
	
	else if (choice=="5")	//KELVIN TO FAHRENHEIT
	{
		cout << "Enter the amount in Kelvin: ";
		cin >> before;

		//INPUT CHECKING
		while(cin.fail())				
		{
			cout << "Wrong input, try again: ";
			cin.clear();					
			cin.ignore(1000, '\n');			
			cin >> before;
		}		
				
		after = (before - 273.15);			//KELVIN TO CELSIUS
		
		after = (after * 9/5 + 32);			//CELSIUS TO FAHRENHEIT
		
		
		cout << before << " Kelvin is " << after << " Fahrenheit.";
	}
		
return 0;
}