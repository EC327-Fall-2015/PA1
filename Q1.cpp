/*

Q1.cpp (PA1, Q1)

Perimeter and area of triangles (20 pts)
	- Reads in 3 triangle sides from user
	- Verifies lengths are valid
	- If so, calc area & perimeter
	- If not, print error msg

Name: Kiara Alberto
BUID:  U73121880
email: kikisq@bu.edu

*/


#include <iostream>
#include <iomanip>
#include <cmath>		// sqrt function
using namespace std;
using std::ios;			// Set formatting function
using std::setprecision;	// Set precision function


// Calculates the triangle's perimeter
double perimeter(double &s1, double &s2, double &s3)
{
	double p = s1 + s2 + s3;
	//cout << "P = " << p << endl;

	return p;
}


// Calculates the triangle's area
double area(double &s1, double &s2, double &s3)
{
	// Semiperimeter
	double s = (s1 + s2 + s3) / 2;
	//cout << "s = " << s << endl;
	
	// Heron's Formula
	double A = sqrt(s * (s - s1) * (s - s2) * (s - s3));
	//cout << "A = " << A << endl;

	return A;
}


// Main function
int main()
{
	// Set precision
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);

	// Num input
	cout << "Enter the dimensions of the triangle: " << endl;
	cout << "Side-1: ";
	double s1;
	cin >> s1;
	cout << "Side-2: ";
	double s2;
	cin >> s2;
	cout << "Side-3: ";
	double s3;
	cin >> s3;
	
	// Determine if triangle is valid
	double try1 = s1 + s2;
	double try2 = s1 + s3;
	double try3 = s2 + s3;	

	bool isValid = (try1 > s3 && try2 > s2 && try3 > s1);

	// Test validity
	if (isValid)
	{	
		cout << "This triangle's area is " << area(s1, s2, s3)
			<< " square-units, and its perimeter is " 
			<< perimeter(s1, s2, s3) << " units." << endl;
	}
	
	else	// if not valid
	{
		cout << "Dimensions " << s1 << ", " << s2 
			<< ", " << s3 
			<< " do not form a triangle." << endl;
	}
	
	return 0;
}

