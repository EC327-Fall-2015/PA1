#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//DONE!
int main()
{
	//Initializing the side and output variables
	double sidea;
	double sideb;
	double sidec;
	double pmeter;
	double area;
	double s;
	// Asking the user to enter the sides
	cout << "Enter the dimensions of the triangle:" << endl;
	cout << "Side-1: ";
	cin >> sidea;
	cout << "Side-2: ";
	cin >> sideb;
	cout << "Side-3: ";
	cin >> sidec;
	// If the sides make a triangle, compute area and perimeter
	if (sidea + sideb > sidec && sidea + sidec > sideb && sideb + sidec > sidea)
	{	
		pmeter = sidea + sideb + sidec;
		s = pmeter / 2;
		// Compute area using Heron's formula
		area = sqrt(s * (s - sidea) * (s - sideb) * (s - sidec));
		cout << "This triangle's area is " << fixed
			 << setprecision(2) << area << " square-units, and its perimeter is " 
			 << fixed << setprecision(2) << pmeter << " units."
			 << endl;
	}		 
	else //Display error message if input sides don't make a triangle
	{
		cout << "Dimensions " << sidea << " ," << sideb << " ,"
			 << sidec << " do not form a triangle." << endl;
	}		 
	return 0;
}