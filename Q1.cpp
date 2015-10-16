//Emily Ubik
//Programming Assignment 1
//Question 1

#include <iostream>

#include <cmath> //This was used for math functions such as square root

#include <iomanip> //This was used to print the correct number of decimal points. It fixes the precision to two.

using namespace std;

int main()
{
	double side1;

	double side2;

	double side3;

	double perimeter;

	double area;

	cout << "Enter the dimensions of the triangle: " << endl;
	
	cout << "Side-1: ";

	cin >> side1;

	cout << "Side-2: ";

	cin >> side2;

	cout << "Side-3: ";

	cin >> side3;
	
	if ((side1 + side2) > side3)
	{
		if ((side1 + side3) > side3)
		{
			if ((side2 + side3) > side1)
			{
			perimeter = side1 + side2 + side3;

			area = (1.0 / 4.0) * sqrt((side1 + side2 + side3) * (side2 + side3 - side1) * (side1 - side2 + side3) * (side1 + side2 - side3));  

			std::cout << std::fixed << "This triangle's area is " << std::setprecision(2) << area << " square-units,";

			cout << " and its perimeter is " << perimeter << " units." << endl;
			}

			else
			{
			cout << "Dimensions " << side1 << ", " <<  side2 << ", " <<  side3 << " do not form a triangle." << endl;
        		
			return 0;	
			}	
		}

		else
		{
		cout << "Dimensions " << side1 << ", " <<  side2 << ", " <<  side3 << " do not form a triangle." << endl;
        	
		return 0;
		}
	}

	else 
	{
	cout << "Dimensions " << side1 << ", " <<  side2 << ", " <<  side3 << " do not form a triangle." << endl;
	
	return 0;
	}		

	return 0;
}

