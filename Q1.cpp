#include <iostream>
#include "math.h"
using namespace std;

float getPerimeter(float sideOne, float sideTwo, float sideThree);
float getArea(float sideOne, float sideTwo, float sideThree);

int main()
{
	float sideOne;
	float sideTwo;
	float sideThree;
	
	float largestSide;
	float secondLargestSide;
	float thirdLargestSide;

	cout << "Side-1: ";
	cin >> sideOne;
	largestSide = sideOne; // Set the Largest side

	cout << "Side-2: ";
	cin >> sideTwo;
	if (largestSide < sideTwo)
	{
		largestSide = sideTwo;
		secondLargestSide = sideOne;
	}
	else
	{

		secondLargestSide = sideTwo;
	}

	cout << "Side-3: ";
	cin >> sideThree;
	if (largestSide < sideThree)
	{
		largestSide = sideThree;
		if (secondLargestSide > sideOne)
		{
			thirdLargestSide = sideOne;
		}
		else
		{
			thirdLargestSide = sideTwo;
		}
	}
	else
	{
		thirdLargestSide = sideThree;
	}

	if ((thirdLargestSide + secondLargestSide) > largestSide)
	{
		float perimeter = getPerimeter(sideOne, sideTwo, sideThree);
		float area = getArea(sideOne, sideTwo, sideThree);
		cout << "This triangle's area is " << area << " square-units, and its perimeter is " << perimeter << " units.\n";
	}
	else
	{
		cout << "Dimensions " << sideOne << ", " << sideTwo << ", " << sideThree
		     << " do not form a triangle.\n";
	}


	return 0;
}


float getPerimeter(float sideOne, float sideTwo, float sideThree)
{
	return (sideOne + sideThree + sideTwo);
}

float getArea(float sideOne, float sideTwo, float sideThree)
{
  
	float semiPerimeter = getPerimeter(sideOne, sideTwo, sideThree) / 2.0f;

	float toSqrtf = (semiPerimeter)* (semiPerimeter - sideOne) * (semiPerimeter - sideTwo) * (semiPerimeter - sideThree);

	// Call our math magic
	return sqrtf(toSqrtf);
}	
