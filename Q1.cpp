/*
	John Marcao
	EC327
	PA1 Q1
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	// Declaring Necesary Variables
	double side1;
	double side2;
	double side3;
	double area; 
	double perimeter;
	
	//Set precision value of all digits displayed
	//I chose 5 to allow it to be accurate for decently sized triangles
	cout.precision(5);
	
	// Ask for user input
	cout << "Enter the dimensions of a triangle:\n";
	cout << "Side-1: ";
	cin >> side1;
	cout << "Side-2: ";
	cin >> side2;
	cout << "Side-3: ";
	cin >> side3;
	
	// Tests to see if the triangle is valid
	if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)){
		area = (0.25)*sqrt((side1+side2+side3)*(side2+side3-side1)*(side1+side3-side2)*(side1+side2-side3)); // Heron's Formula
		perimeter = side1+side2+side3;
		cout << "This triangle's area is " << area << " square-units, and it's perimeter is " << perimeter << " units." << endl;
		}
	else{
		cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 << " do not form a triangle." << endl;
		}

	return 0;
}
