#include <iostream>
using namespace std;

int main()
{
	int conv_type;
	float Celsius;
	float Kelvin;
	float Fahrenheit;
	cout<<"Please select a conversion type: ";
	cin>>conv_type;

	while (!cin)
	{
		//in case a user inputs a value that is not an integer
		cin.clear();
		cin.ignore(200, '\n');
		cout<<"Wrong Input, try again: "<<endl;
		cin>>conv_type;
	}

	if (conv_type == 0)
	{
		//"Celsius to Fahrenheit";
		cout<<"Enter the amount in Celsius: "<<endl;
		cin>>Celsius;
		Fahrenheit = ((9.0/5.0)*Celsius) + 32;
		cout<<Fahrenheit<<endl;
	}

	else if (conv_type == 1)
	{
		//"Celsius to Kelvin";
		cout<<"Enter the amount in Celsius: "<<endl;
		cin>>Celsius;
		Kelvin = Celsius + 273.15;
		cout<<Kelvin<<endl;
	}

	else if (conv_type == 2)
	{
		//"Fahrenheit to Celsius";
		cout<<"Enter the amount in Fahrenheit: "<<endl;
		cin>>Fahrenheit;
		Celsius = (Fahrenheit - 32) * (5.0/9.0);
		cout<<Celsius<<endl;
	}

	else if (conv_type == 3)
	{
		//"Fahrenheit to Kelvin";
		cout<<"Enter the amount in Fahrenheit"<<endl;
		cin>>Fahrenheit;
		Kelvin = (Fahrenheit + 459.67) * (5.0/9.0);
		cout<<Kelvin<<endl;
	}

	else if (conv_type == 4)
	{
		//"Kelvin to Celsius";
		cout<<"Enter the amount in Kelvin: "<<endl;
		cin>>Kelvin;
		Celsius = Kelvin - 273.15;
		cout<<Celsius<<endl;
	}

	else if (conv_type == 5)
	{
		//"Kelvin to Fahrenheit";
		cout<<"Enter the amount in Kelvin: "<<endl;
		cin>>Kelvin;
		Fahrenheit = (Kelvin-273.15)*1.8 + 32;
		cout<<Fahrenheit<<endl;
	}

	else
	{
		//in case user inputs a number > 5 or number < 0
		cout<<"Incorrect, please enter a type between 0 and 5: "<<endl;
		cin>>conv_type;
	}
}