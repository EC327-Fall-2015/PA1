#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; 

int main()
{
	//declaring the side variables
	double side1;
	double side2;
	double side3;
	
	//entering the inputs
	cout << "Enter the dimensions of the triangle:" << endl;
	
	cout << "Side-1: ";
	cin >> side1;
	cout << "Side-2: ";
	cin >> side2;
	cout << "Side-3: ";
	cin >> side3;

	// checking for valid dimensions
	if ( ((side1 + side2) < side3) || ((side2 + side3) < side1) || ((side1 + side3) < side2))
		cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 << " do not form a triangle." << endl;
	else //calculating area and perimeter using Heron's formula
	  {
	        double triarea;
		double triperi;
		double semiperi;
	        semiperi = (side1 + side2 + side3)/2;
		triarea = sqrt(semiperi * (semiperi - side1) * (semiperi - side2) * (semiperi - side3));
		triperi = (side1 + side2 + side3);
		
		//printing area and perimeter of triangle	
		if (triarea == 0 || triperi == 0)
		  cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 << " do not form a triangle." << endl;
		else
		  {
		    std::cout.precision(2);
		    std::cout << "This triangle's area is " << std::fixed << triarea << " square-units, and its perimeter is " << triperi << " units." <<endl;
		  }
	   }	       
	return 0;	
}
