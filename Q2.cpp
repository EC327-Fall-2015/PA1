#include <iostream>

#include <iomanip>

using namespace std;

//Selection function

int selection()
{
	//Initialize choice variable
	
	int choice;
	
	//Requests the conversion type
	
	cout<<"Please select a conversion type:"<<endl;
	
	cout<<"Celsuis to Fahrenheit (enter 0)"<<endl;
	
	cout<<"Celsius to Kelvin (enter 1)"<<endl;
	
	cout<<"Fahrenheit to Celsius (enter 2)"<<endl;
	
	cout<<"Fahrenheit to Kelvin (enter 3"<<endl;
	
	cout<<"Kelvin to Celsius (enter 4)"<<endl;
	
	cout<<"Kelvin to Fahrenheit (enter 5)"<<endl;
	
	cout<<"Conversion type:";
	
	//Input choice and return
	
	cin>>choice;
	
	return (choice);
}

//Functions for conversion using conversion formulas, prints the conversion

void celsius_fahrenheit()
{
	long double temp_in;
	
	long double temp_out;
	
	cout<<"Enter the amount in Celsius:";
	
	cin>>temp_in;
	
	temp_out = ((temp_in*1.8)+32);
	
	cout<<temp_in<<" Celsius is "<<temp_out<<" Fahrenheit"<<endl;
}

void celsius_kelvin()
{
	long double temp_in;
	
	long double temp_out;
	
	cout<<"Enter the amount in Celsius:";
	
	cin>>temp_in;
	
	temp_out = (temp_in + 273.15);
	
	cout<<temp_in<<" Celsius is "<<temp_out<<" Kelvin"<<endl;
}

void fahrenheit_celsius()
{
	long double temp_in;
	
	long double temp_out;
	
	cout<<"Enter the amount in Fahrenheit:";
	
	cin>>temp_in;
	
	temp_out = ((temp_in-32)/1.8);
	
	cout<<temp_in<<" Fahrenheit is "<<temp_out<<" Celsius"<<endl;
}

int fahrenheit_kelvin()
{
	long double temp_in;
	
	long double temp_out;
	
	cout<<"Enter the amount in Fahrenheit:";
	
	cin>>temp_in;
	
	temp_out = (((temp_in-32)/1.8)+273.15);
	
	cout<<temp_in<<" Fahrenheit is "<<temp_out<<" Kelvin"<<endl;
}

void kelvin_celsius()
{
	long double temp_in;
	
	long double temp_out;
	
	cout<<"Enter the amount in Kelvin:";
	
	cin>>temp_in;
	
	temp_out = (temp_in-273.15);
	
	cout<<temp_in<<" Kelvin is "<<temp_out<<" Celsius"<<endl;
}

void kelvin_fahrenheit()
{
	long double temp_in;
	
	long double temp_out;
	
	cout<<"Enter the amount in Kelvin:";
	
	cin>>temp_in;
	
	temp_out = (((temp_in-273.15)*1.8)+32);
	
	cout<<temp_in<<" Kelvin is "<<temp_out<<" Fahrenheit"<<endl;
}

int main()
{
	//Set the precision to be based on the fixed point, and make it include 3 places.
  
  	cout<<fixed;
  	
  	cout<<setprecision(3);
  	
  	//Initialize variable choice

	int choice;
	
	//Runs choice function and outputs the choice
	
	//The choice is checked, and the appropiate conversion function runs
	
	//Else, the error message is printed and the main function runs
	
	choice = selection();
	
	if (choice==0)
	{
		celsius_fahrenheit();
		
		return (0);
	}
	else if (choice==1)
	{
		celsius_kelvin();
		
		return (0);
	}
	else if (choice==2)
	{
		fahrenheit_celsius();
		
		return (0);
	}
	else if (choice==3)
	{
		fahrenheit_kelvin();
		
		return (0);
	}
	else if (choice==4)
	{
		kelvin_celsius();
		
		return (0);
	}
	else if (choice==5)
	{
		kelvin_fahrenheit();
		
		return (0);
	}
	else
	{
		cout<<"Wrong input, try again:"<<endl;
		
		main();
		
		return (0);
	}
	
	cout<<endl;
}
