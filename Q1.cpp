#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double sideone;
	double sidetwo;
	double sidethree;
	
	cout << "Enter the dimensions of the traingle: " << endl;
	
	cout << "Side-1: ";					//receive sides of triangle from user
	cin >> sideone;
	
	cout << "Side-2: ";
	cin >> sidetwo;

	cout << "Side-3: ";
	cin >> sidethree;

	if (sideone + sidetwo > sidethree && sidetwo + sidethree > sideone && 		// make sure that the sides user entered form a triangle
		sideone + sidethree > sidetwo)
	{	
		double perimeter = sideone + sidetwo + sidethree;					//calculate perimeter
		double half = (sideone + sidetwo + sidethree) / 2.0;				//calculate half the perimeter to compute area
		double area = sqrt((half) * (half - sideone) * (half - sidetwo) * (half - sidethree));		//use Heron's formula to compute area

		cout << "This triangle's area is " << setprecision(2) << fixed << area << " square-units and its perimeter is " <<
			perimeter << " units." << endl;
	}

	else 
		cout << "Dimensions " << sideone << ", " << sidetwo << ", " << sidethree << ", do not form a triangle." << endl;  	

	return 0;
}