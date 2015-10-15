#include <iostream>
using namespace std;

int main()
{
//initialize conversion type
	int con=6;
	int init;
	int fin;
	while (con>5 ||  con<0)
	{
//Celsius to Fahrenheit(enter 0)
//Celsius to Kelvin(enter 1)
//Fahrenheit to Celsius(enter 2)
//Fahrenheit to Kelvin(enter 3)
//Kelvin to Celsius(enter 4)
//Kelvin to Fahrenheit(enter 5)
	cout<<"Conversion type: ";
	cin>>con;
	}
	if (con==0)
	{
		cout<<endl<<"Enter the amount in Celsius:";
		cin>>init;
		fin=(init*(9/5))+32;
		cout<<endl<<init<<" Celsius is "<<fin<<" Fahrenheit";
	}
	else if (con==1)
	{
		cout<<endl<<"Enter the amount in Celsius:";
		cin>>init;
		fin=init+273;
		cout<<endl<<init<<" Celsius is "<<fin<<" Kelvin";
	}
	else if (con==2)
	{
		cout<<endl<<"Enter the amount in Fahrenheit:";
		cin>>init;
		fin=(init-32)*(5/9);
		cout<<endl<<init<<" Fahrenheit is "<<fin<<" Celsius";
	}
	else if (con==3)
	{
		cout<<endl<<"Enter the amount in Fahrenheit:";
		cin>>init;
		fin=init+460)*(5/9);
		cout<<endl<<init<<" Fahrenheit is "<<fin<<" Kelvin";
	}
	else if (con==4)
	{
		cout<<endl<<"Enter the amount in Kelvin:";
		cin>>init;
		fin=init+273;
		cout<<endl<<init<<" Kelvin is "<<fin<<" Celsius";
	}
	else if (con==5)
	{
		cout<<endl<<"Enter the amount in Kelvin:";
		cin>>init;
		fin=(init*(9/5))-460;
		cout<<endl<<init<<" Kelvin is "<<fin<<" Fahrenheit";
	}
}
