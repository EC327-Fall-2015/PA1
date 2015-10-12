//PA1
//Q1 Perimeter & Area of Triangles.

#include <iostream>
#include <cmath> //For sqrt function and power function


using namespace std;


int checkPrec(float num)
{
	int intForm;
	intForm = num;
	if (pow(num,2) > pow(intForm,2) != 0) // Casting a float into an int always truncates, so the float > int if it has any fractional part
	{
		return 2;
	}
	else
	{
		return 0;
	}
}

//////////////////////
//		Main 		//
//////////////////////

int main()
{
	float s1;				// Need floats in case people wanna use fractions
	float s2;
	float s3;

	cout << "Enter the dimensions of the triangle:" <<endl;
	cout << "Side-1: ";
	cin >> s1;
	if (cin.fail()){										//Checks after each entry if a number was entered.
		cout << "That is not a number, exiting \n";
		return -1;
	}
	cout << "Side-2: ";
	cin >> s2;
	if (cin.fail()){
		cout << "That is not a number, exiting\n";
		return -1;
	}
	cout << "Side-3: ";
	cin >> s3;
	if (cin.fail()){
		cout << "That is not a number, exiting\n";
		return -1;
	}

	bool checkDec;
	
	bool checkTri;
	if ((s1+s2>s3)&&(s2+s3>s1)&&(s1+s3>s2))// sum of any 2 sides must be > than 3rd to be a triangle
	{
		float Perim = s1+s2+s3;
		float Area = sqrt((Perim/2)*(Perim/2-s1)*(Perim/2-s2)*(Perim/2-s3));			//Heron's formula


		cout << "This triangle's area is ";
		cout.precision(checkPrec(Area));												//Checking if decimals are needed.
		cout << fixed << Area << " square-units, and its perimeter is ";				// "fixed" allows us to set precision in what we output. I give the value from my function based on the float given.
		cout.precision(checkPrec(Perim));
		cout << fixed << Perim << " units." << endl;
	}
	else
	{
		cout << "Dimensions ";
		cout.precision(checkPrec(s1));
		cout << fixed << s1 << ", ";
		cout.precision(checkPrec(s2));
		cout << fixed << s2 << ", ";
		cout.precision(checkPrec(s3));
		cout << fixed << s3 << " do not form a triangle." << endl;
	}
	
	return 0;	
}