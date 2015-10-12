//Derek Kenyon
//Programming Assignment: Question 1
//09.23.2015

//Preprocessor directives
#include <iostream>
#include <cmath>

//Declares the namespace
using namespace std;

//Main function
int main()
{
	//Intializes variables 
	double a;
	double b;
	double c;
	int P;

	//Prompts the user for three inputs representing the sides of a triangle, and stores the value in 'a', 'b', and 'c' respectively
	cout << "Enter the dimensions of a triangle:" << endl;
	cout << "Side-1: ";
	cin >> a;
	cout << "Side-2: ";
	cin >> b;
	cout << "Side-3: ";
	cin >> c;

	//Error checks the user's side inputs to determine if the side lengths form a triangle
	if ((a+b)<=c or (a+c)<=b or (b+c)<=a)
	{
		cout << "Dimensions " << a << ", " << b << ", " << c << " do not form a triangle." << endl;
		return 1;
	} 
	else //Calculates the perimeter and area of the triangle if the sides form a triangle
	{
		double s;
		s = (a+b+c)/2.0; //calculates a variable 's' used in the area calculation
		double Ah = s*(s-a)*(s-b)*(s-c); //calculates the value of the area under the square root
		double A = pow(Ah, 0.5); //implements the square root to get the actual area value
		P = a+b+c; //calculates the perimeter
		cout << "The triangle's area is " << A << " square-units and has a perimeter of " << P << " units." << endl; //prints the results
	}

	return 1; //returns an integer 1 to signify the function is completed
}

