//PA1
//Q2 Converting Units

#include <iostream>
#include <cmath>

using namespace std;

void CtoF(float Cels);
void CtoK(float Cels);
void FtoC(float Fah);
void FtoK(float Fah);
void KtoC(float Kel);
void KtoF(float Kel);
float intro(int type);

int checkPrec(float num);

bool fin = false;

//////////////////////
//		Main 		//
//////////////////////


int main()
{
	cout << "Celsius to Fahrenheit (enter 0)\nCelsius to Kelvin (enter 1)\nFahrenheit to Celsius (enter 2)\nFahrenheit to Kelvin (enter 3)\nKelvin to Celsius (enter 4)\nKelvin to Fahrenheit (enter 5)\nConversion type: ";
	do
	{
		cout.precision(3);				//Precision 3 requested
		int cvt;

		cin >> cvt;						//User selects conversion type

		do
		{
			if (cin.fail())				//If user entered something other than a number, throw up the error, prompt them to try again. 
			{
				cin.clear();			//FYI, checking if number is in range is handled by switch statement.
				cin.ignore(255,'\n');
			}
			else
			{
				break;
			}
			cout << "Wrong input, try again: ";
			cin >> cvt;
		}while (cin.fail());
		switch( cvt )
		{
			case 0:
			CtoF(intro(cvt));
			fin = true;
			break;

			case 1:
			CtoK(intro(cvt));
			fin = true;
			break;

			case 2:
			FtoC(intro(cvt));
			fin = true;
			break;

			case 3:
			FtoK(intro(cvt));
			fin = true;
			break;

			case 4:
			KtoC(intro(cvt));
			fin = true;
			break;

			case 5:
			KtoF(intro(cvt));
			fin = true;
			break;

			default:
			cout << "Wrong input, try again:";		//If number not in 0-5, move back to top of do-while loop and try again.
		}
	}while(fin != true);

	return 0;
}

//////////////////////////
//		Functions		//
//////////////////////////

float intro(int type)				// Enter amount in -unit based on conversion type-
{									// Checks to see if actual numbers are put in.
	float amt;

	if (type == 1 || type ==0)
	{
		cout << "Enter the amount in Celsius: ";				//Celsius
		cin >> amt;
		do
		{
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(255,'\n');
			}
			else
			{
				break;
			}
			cout << "Wrong input, try again: ";
			cin >> amt;
		}while (cin.fail());
	}
	else if (type == 2 || type == 3)
	{
		cout << "Enter the amount in Fahrenheit: ";				//Fahrenheit
		cin >> amt;
		do
		{
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(255,'\n');
			}
			else
			{
				break;
			}
			cout << "Wrong input, try again: ";
			cin >> amt;
		}while (cin.fail());
	}
	else
	{
		cout << "Enter the amount in Kelvin: ";					//Kelvin
		cin >> amt;
		do
		{
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(255,'\n');
			}
			else
			{
				break;
			}
			cout << "Wrong input, try again: ";
			cin >> amt;
		}while (cin.fail());
	}
	return amt;
}


//////////////////////////////
//		Calc. Functions		//	//I commented out my precision checker since it wasn't needed
//////////////////////////////	//These functions perform my calculations for me.


void CtoF(float Cels)									//Celsius to Fahrenheit
{
	float Fahr = Cels*1.8 +32;
	//cout.precision(checkPrec(Cels));
	cout << fixed << Cels << " Celsius is ";

	//cout.precision(checkPrec(Fahr));
	cout << fixed << Fahr << " Fahrenheit." << endl;
	return;
}
void CtoK(float Cels)									//Celsius to Kelvin
{
	float Kel = Cels + 273.15;
	//cout.precision(checkPrec(Cels));
	cout << fixed << Cels << " Celsius is ";

	//cout.precision(checkPrec(Kel));
	cout << fixed << Kel << " Kelvin." << endl;
	return;
}	
void FtoC(float Fahr)									//Fahrenheit to Celsius
{	
	float Cels = (Fahr-32)*5/9;
	//cout.precision(checkPrec(Fahr));
	cout << fixed << Fahr << " Fahrenheit is ";

	//cout.precision(checkPrec(Cels));
	cout << fixed << Cels << " Celsius." << endl;
	return;
}
void FtoK(float Fahr)									//Fahrenheit to Kelvin
{
	float Kel = (Fahr - 32)*5/9 + 273.15;
	//cout.precision(checkPrec(Fahr));
	cout << fixed << Fahr << " Fahrenheit is ";

	//cout.precision(checkPrec(Kel));
	cout << fixed << Kel << " Kelvin." << endl;
	return;
}
void KtoC(float Kel)									//Kelvin to Celsius
{
	float Cels = Kel - 273.15;
	//cout.precision(checkPrec(Kel));
	cout << fixed << Kel << " Kelvin is ";

	//cout.precision(checkPrec(Cels));
	cout << fixed << Cels << " Celsius." << endl;
	return;
}
void KtoF(float Kel)									//Kelvin to Fahrenheit
{
	float Fahr = (Kel-273.15)*1.8+32;
	//cout.precision(checkPrec(Kel));
	cout << fixed << Kel << " Kelvin is ";

	//cout.precision(checkPrec(Fahr));
	cout << fixed << Fahr << " Fahrenheit." << endl;
	return;
}

/*								/////Sample runs show precision 3 no matter what, unlike assignment.
int checkPrec(float num)
{
	int intForm;
	intForm = num;
	if (pow(num,2) > pow(intForm,2) != 0) // Casting a float into an int always truncates, so the float > int if it has any fractional part, square to be rid of negatives
	{
		return 3;
	}
	else
	{
		return 0;
	}
}

*/