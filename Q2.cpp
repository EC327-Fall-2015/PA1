#include <iostream>
#include <iomanip> //use for setprecision()
#include <locale> //use for cin.fail()
using namespace std;

int main ()
{
	//print the statements giving user options
	cout << "Celsius to Fahrenheit (enter 0)"; //enter 0 for celsius to Fahrenheit
	cout << "Celsius to Kelvin (enter 1)"; //enter 1 for celsius to Kelvin
	cout << "Fahrenheit to Celsius (enter 2)"; //enter 2 for Fahrenheit to celsius
	cout << "Fahrenheit to Kelvin (enter 3)"; //enter 3 for Fahrenheit to Kelvin
	cout << "Kelvin to Celsius (enter 4)"; //enter 4 for kelvin to Celsius
	cout << "Kelvin to Fahrenheit (enter 5)"; //enter 5 for Kelvin to Fahrenheit
	int conversion; //declare the integer conversion, which will be the users choice for an option above
	cout << "Conversion type: "; //prompt the user for a conversion type
	cin >> conversion; //user inputs their conversion choice
	double fdegree = 0; //declare and initialize the first degree variable
	double sdegree = 0; //declare and initialize the resulting degree variable
	while (cin.fail()) //if the user input for conversion fails (is not an integer), then run this while loop
	{
		cin.clear(); //reinitialize the user input so that it is empty
		cin.ignore(256, '\n'); //extract and ignore all values that were previously inputted
		cout << "Wrong input, try again: "; //tell the user they cannot input that, prompt them to input another value
		cin >> conversion; //user inputs another value
	}
	while ((conversion < 0) || (conversion > 5)) //if the conversion number is not between 0 and 5, enter the while loop and give the user an error message and prompt them to input another choice
	{
		cout << "Wrong input, try again: "; //give the user an error message and prompts them to input another value
		cin >> conversion; //user inputs another value
	}
	switch (conversion) //use a switch statement to go through the options
	{
		case 0: //enter this case if the user inputs a 0 for their conversion
		{
			cout << "Enter the amount in Celsius: "; //prompt user to input a number in degrees Celsius
			cin >> fdegree; //user inputs their first degree value
			sdegree = fdegree * 9 / 5 + 32; //Convert Celsius into Fahrenheit
			cout << fixed << setprecision(3) << fdegree << " Celsius is " << sdegree << " Fahrenheit." << endl; //set decimal precision equal to three and print statement with new and old degree values
			break; //exit switch statement
		}
		case 1: //enter this case if the user inputs a 1 for their conversion
		{
			cout << "Enter the amount in Celsius: "; //prompt user to enter their first degree value in Celsius
			cin >> fdegree; //user inputs their first degree value
			sdegree = fdegree + 273.15; //convert Celsius into Kelvin
			cout << fixed << setprecision(3) << fdegree << " Celsius is " << sdegree << " Kelvin." << endl; //set decimal precision equal to three and print statement with new and old degree values
			break; //exit switch statement
		}
		case 2: //enter this case if the user inputs a 2 for their conversion
		{
			cout << "Enter the amount in Fahrenheit: "; //prompt user to enter their first degree value in Fahrenheit
			cin >> fdegree; //user inputs their first degree value
			sdegree = (fdegree - 32) * 5 / 9; //Convert Fahrenheit into Celsius 
			cout << fixed << setprecision(3) << fdegree << " Fahrenheit is " << sdegree << " Celsius." << endl; //set decimal precision equal to three and print statement with new and old degree values
			break; //exit switch statement
		}
		case 3: //enter this case if the user inputs a 3 for their conversion
		{
			cout << "Enter the amount in Fahrenheit: "; //prompt user to enter their first degree value in Fahrenheit
			cin >> fdegree; //user inputs their first degree value
			sdegree = (fdegree + 459.67) * 5 / 9; //Convert Fahrenheit into Kelvin
			cout << fixed << setprecision(3) << fdegree << " Fahrenheit is " << sdegree << " Kelvin." << endl; //set decimal precision equal to three and print statement with new and old degree values
			break; //exit switch statement
		}
		case 4: //enter this case if the user inputs a 4 for their conversion
		{
			cout << "Enter the amount in Kelvin: "; //prompt user to enter their first degree value in Kelvin
			cin >> fdegree; //user inputs their first degree value
			sdegree = fdegree - 273.15; //Convert Kelvin into Celsius
			cout << fixed << setprecision(3) << fdegree << " Kelvin is " << sdegree << " Celsius." << endl; //set decimal precision equal to three and print statement with new and old degree values
			break; //exit switch statement
		}
		case 5: //enter this case if the user inputs a 5 for their conversion
		{
			cout << "Enter the amount in Kelvin: "; //prompt user to enter their first degree value in Kelvin
			cin >> fdegree; //user inputs their first degree value
			sdegree = fdegree * 9 / 5 - 459.67; //Convert Kelvin into Fahrenheit
			cout << fixed << setprecision(3) << fdegree << " Kelvin is " << sdegree << " Fahrenheit." << endl; //set decimal precision equal to three and print statement with new and old degree values
			break; //exit switch statement
		}
	}
	return 0; //end program
}
