// ----------------------------------------------------------------------------
// program takes as input three dimensions of a triangle and calculates the area
// and perimeter of the triangle if it forms a triangle.
// input: side1, side2, side3
// output: area, perimeter
// ----------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  float side1, side2, side3;

  // takes in three values for dimensions of triangle
  cout << "Enter the dimensions of the triangle: " << endl;
  cout << "Side-1: ";
  cin >> side1;
  cout << "Side-2: ";
  cin >> side2;
  cout << "Side-3: ";
  cin >> side3;

 // sets variable isTriangle as true if sum of two sides is less than third side
  bool isTriangle =
    (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1);

// checks if the three sides form a triangle
// if fails, informs user that does not form a triangle
  if (isTriangle)
    cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 <<
        " do not form a triangle." << endl;

// if a triangle is formed, area and perimeter is calculated and reported
// back to user
  else
  {
    float sp = (0.5) * (side1 + side2 + side3);
    float area = sqrt (sp * (sp - side1) * (sp - side2) * (sp - side3));

    float perimeter = side1 + side2 + side3;

    cout << "This triangle's area is " << setprecision(2) << fixed << area <<
      " square-units, and its perimeter is " << setprecision(2) << fixed <<
      perimeter << " units." << endl;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Output:
// Enter the dimensions of the triangle:
// Side-1:
// Side-2:
// Side-3:
// This triangle's area is ____ square-units, and its perimeter is _____ units.
// ----------------------------------------------------------------------------
