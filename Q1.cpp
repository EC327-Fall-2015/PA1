#include <iostream>
#include <math.h> 
#include <iomanip>
using namespace std;

int main()
{
	double sideA, sideB, sideC;
	cout << "Enter the dimensions of the triangle:" << endl;

	cout << "Side-1: ";
	cin >> sideA;
	cout << "Side-2: ";
	cin >> sideB;
	cout << "Side-3: ";
	cin >> sideC;

	if ((sideA+sideB) > sideC && (sideA+sideC) > sideB && (sideB+sideC) > sideA)
	{
		double perimeter = (sideA + sideB + sideC);
		double semiperimeter = (perimeter/2);
		double intArea = semiperimeter * (semiperimeter - sideA) * (semiperimeter - sideB) * (semiperimeter - sideC);
		double area = sqrt (intArea);
		cout << "This triangle’s area is " << fixed << std::setprecision(2) << area << " square-units and its perimeter is " << fixed << std::setprecision(2) << perimeter << " units.";
	}

	else if (sideA <= 0 || sideB <= 0 || sideC <= 0)
	{
		cout << "Dimensions " << sideA << ", " << sideB << ", " << sideC << " do not form a triangle.";
	}
	else
	{
		cout << "Dimensions " << sideA << ", " << sideB << ", " << sideC << " do not form a triangle.";
	}

	cout << endl;
	return 0;
}