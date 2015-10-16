#include <iostream>
using namespace std;

int main()
{

	int sideA;
	int sideB;
	int sideC;

	//prompt for inputs
	cout << "Enter dimensions of the triangle" << endl << "side 1: ";
	cin >> sideA;
	cout << "side 2: ";
	cin >> sideB;
	cout << "side 3: ";
	cin >> sideC;

	//check that everything works
	double maxLength = fmax(fmax(sideA, sideB), sideC);
	double otherTwo = sideA + sideB + sideC - maxLength;
	if (maxLength > otherTwo)
	{
		cout << "Dimensions " << sideA << ", " << sideB << ", " << sideC << "do not form a triangle.";
		return 1;
	}

	//find the area of a triangle
	double semiPerimeter = (sideA + sideB + sideC + 0.0) / 2;
	double area = sqrt(semiPerimeter * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC));

	cout << area << endl;

	return 0;

}
