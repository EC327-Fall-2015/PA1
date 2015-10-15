#include <iostream>
#include <ctype.h>
#include <string>
#include <iomanip>
using namespace std;
//Function prototyping, all conversion functions
void celToFah();
void celToKel();
void fahToCel();
void fahToKel();
void kelToCel();
void kelToFah();

int main()
{
	int choice;
	//asks what the conversion type would be
	cout<<"Celsius to Fahrenheit (enter 0)"<<endl<<"Celsius to Kelvin (enter 1)"<<endl<<"Fahrenheit to Celsius (enter 2)"<<endl<<"Fahrenheit to Kelvin (enter 3)"<<endl<<"Kelvin to Celsius (enter 4)"<<endl<<"Kelvin to Fahrenheit (enter 5)"<<endl<<"Conversion type: ";
	cin>>choice;
	//this while loop continues to ask the user for a correct input when its not between 0 and 5 or if not an integer.
	while ( ((choice<0) || (choice>=6)) || !cin)
	{
		cout<<"Wrong input, try again: ";
		cin.clear();
		cin.ignore(1000,'\n');
		cin>>choice;
	} 
	//switch case block to determine which conversion function to run.
	switch(choice)
	{
		case 0:
			celToFah();
			break;
		case 1:
			celToKel();
			break;
		case 2:
			fahToCel();
			break;
		case 3: 
			fahToKel();
			break;
		case 4: 
			kelToCel();
			break;
		case 5:
			kelToFah();
			break;
	}
	return 0;
}
//converts from celsius to Fahrenheit
void celToFah()
{	//declare Celsius entered and fahrenheit end
	double entCel;
	double endFah;
	cout<<"Enter the amount in Celsius: ";
	cin>>entCel;
	//continues to ask for a double if they don't enter one.
	while (cin.fail())
	{
		cout<<"Wrong input, try again: ";
		cin.clear();
		cin.ignore(1000,'\n');
		cin>>entCel;
	}
	//conversion calculation
	endFah=(((entCel*9)/5)+32);
	//prints out the desired output
	cout<<fixed<<setprecision(3)<<entCel<<" Celsius is "<<fixed<<setprecision(3)<<endFah<<" Fahrenheit."<<endl;
	
}
//converts from celsius to kelvin
void celToKel()
{	
	//declare Celsius entered and Kelvin end
	double entCel;
	double endKel;
	cout<<"Enter the amount in Celsius: ";
	cin>>entCel;
	//continues to ask for double if they dont enter one
	while (cin.fail())
	{
		cout<<"Wrong input, try again: ";
		cin.clear();
		cin.ignore(1000,'\n');
		cin>>entCel;
	}
	//conversion calculation
	endKel=entCel+273.15;
	//prints out the desired output
	cout<<fixed<<setprecision(3)<<entCel<<" Celsius is "<<fixed<<setprecision(3)<<endKel<<" Kelvin."<<endl;
}
//converts fahrenheit to celsius
void fahToCel()
{
	//declare Fahrenheit entered and Celsius end
	double entFah;
	double endCel;
	cout<<"Enter the amount in Fahrenheit: ";
	cin>>entFah;
	//continues to ask for double if they dont enter one
	while (cin.fail())
	{
		cout<<"Wrong input, try again: ";
		cin.clear();
		cin.ignore(1000,'\n');
		cin>>entFah;
	}
	//conversion calculation
	endCel=(((entFah-32)*5)/9);
	//prints out the desired output
	cout<<fixed<<setprecision(3)<<entFah<<" Fahrenheit is "<<fixed<<setprecision(3)<<endCel<<" Celsius."<<endl;
}
//converts fahrenheit to kelvin
void fahToKel()
{
	//declare Fahrenheit entered and Celsius end
	double entFah;
	double endKel;
	cout<<"Enter the amount in Fahrenheit: ";
	cin>>entFah;
	//continues to ask for a double if they don't enter one.
	while (cin.fail())
	{
		cout<<"Wrong input, try again: ";
		cin.clear();
		cin.ignore(1000,'\n');
		cin>>entFah;
	}
	//conversion calculation
	endKel=(((entFah+459.67)*5)/9);
	//prints out the desired output
	cout<<fixed<<setprecision(3)<<entFah<<" Fahrenheit is "<<fixed<<setprecision(3)<<endKel<<" Kelvin."<<endl;
}
//converts kelvin to celsius
void kelToCel()
{
	//declare Kelvin entered and Celsius end.
	double entKel;
	double endCel;
	cout<<"Enter the amount in Kelvin: ";
	cin>>entKel;
	//continues to ask for a double if they don't enter one.
	while (cin.fail())
	{
		cout<<"Wrong input, try again: ";
		cin.clear();
		cin.ignore(1000,'\n');
		cin>>entKel;
	}
	//conversion calculation
	endCel=entKel-273.15;
	//prints out the desired output
	cout<<fixed<<setprecision(3)<<entKel<<" Kelvin is "<<fixed<<setprecision(3)<<endCel<<" Celsius."<<endl;
}
//converts kelvin to fahrenheit
void kelToFah()
{
	//declare Kelvin entered and Fahrenheit end.
	double entKel;
	double endFah;
	cout<<"Enter the amount in Kelvin: ";
	cin>>entKel;
	//continues to ask for a double if they don't enter one.
	while (cin.fail())
	{
		cout<<"Wrong input, try again: ";
		cin.clear();
		cin.ignore(1000,'\n');
		cin>>entKel;
	}
	//conversion calculation
	endFah=(((entKel*9)/5)-459.67);
	//prints out the desired output
	cout<<fixed<<setprecision(3)<<entKel<<" Kelvin is "<<fixed<<setprecision(3)<<endFah<<" Fahrenheit."<<endl;
}
