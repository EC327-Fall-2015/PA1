#include <iostream>
#include <cmath> //include the cmath head to use sqrt
#include <iomanip> //used for the set precision
using namespace std;

int main ()
{
	//declare my variables so users can input the sides of a triangle
	double one; //declare variable for first user input
	double two; //declare variable for second user input
	double three; //declare variable for third user input
	//User is prompted to enter the dimensions of a triangle
	cout << "Enter the dimensions of the triangle:";
	cout << "\nSide-1: "; //Prompted to enter side one
	cin >> one; //user inputs side one
	cout <<"Side-2: "; 	//Prompted to enter side two
	cin >> two; //user inputs side two
	cout <<"Side-3: "; 	//Prompted to enter side three
	cin >> three; //user inputs side three
	//Use if statements to determine if sides can form a triangle
	//If any two sides added together are less than the third, it does not form a triangle
	//Add sides one and two and compare to three
	if ((one + two) < three)
	{
		//If the sum of one and two is less than three, the dimensions do not form a triangle
		//Print that the dimensions one, two and three (but with numbers) do not form a triangle
		cout << "Dimensions " << one << ", " << two << ", " << three << " do not form a triangle." << endl;
		return 0; //end program
	}
	//Add sides two and three and compare to one
	if ((two+three) < one)
	{
		//If the sum of two and three is less than one, the dimensions do not form a triangle
		//Print that the dimensions one, two and three (but with numbers) do not form a triangle
		cout << "Dimensions " << one << ", " << two << ", " << three << " do not form a triangle." << endl;
		return 0; //end program
	}
	//Add sides one and three and compare to two
	if ((one + three) < two)
	{
		//If the sum of one and three is less than two, the dimensions do not form a triangle
		//Print that the dimensions one, two and three (but with numbers) do not form a triangle
		cout << "Dimensions " << one << ", " << two << ", " << three << " do not form a triangle." << endl;
		return 0; //end program
	}
	//If all of the sums of two sides are greater than the third, continue to find the perimeter and area in this if statement
	if (((one + two) >= three) && ((two + three) >= one) && ((one + three) >= two))
	{
		float area; //declare variable for area
		double perimeter; //declare variable for perimeter
		double sperimeter; //declare variable for semiperimeter for Heron's law
		//The perimeter is equal to a sum of all three user input sides
		perimeter = one + two + three;
		//The semi-perimeter is equal to the perimeter divided by two
		sperimeter = perimeter / 2;
		//The area is the square root of the semi-perimeter times the semi-perimeter minus one times 
		//the semi-perimeter minus two times the semi-perimeter minus three, where one, two and three are variables 
		//that were defined in the scope and are the user input sides of the triangle
		area = sqrt(sperimeter * (sperimeter - one) * (sperimeter - two) * (sperimeter - three));
		//Print the triangle's area and perimeter
		//for two decimal places, use fixed and then set precision 
		cout << "The triangle's area is " << fixed << setprecision(2) << area << " square-units, and its perimeter is " << perimeter << " units." << endl;
	}
	return 0; //end program
}