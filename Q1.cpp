
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;


int main()
{

  // Prompt user to input 3 potential sides of a triangle
  double sideOne, sideTwo, sideThree;
  cout <<"Enter the dimensions of the triangle: " << endl;
  cout << "Side-1: ";
  cin >> sideOne;
  cout << "Side-2: ";
  cin >> sideTwo;
  cout << "Side-3: ";
  cin >> sideThree;

                    

  // Evaluate if the three sides can form a triangle, if they can't, display error message and exit program
  if (sideOne <= 0 || sideTwo <= 0 || sideThree <= 0 ||
      (sideOne + sideTwo) <= sideThree || (sideTwo + sideThree) <= sideOne || (sideOne + sideThree) <= sideTwo )
  {
    cout << "Dimensions " << fixed << setprecision(2) <<  sideOne << ", " << sideTwo << ", " << sideThree <<
      " do not form a triangle." << endl;
  }

  // Calculate perimeter and area of triangle using Heron's formula
  else
  {
    double perimeter = sideOne + sideTwo + sideThree;
    double semiPerimeter = perimeter / 2;
    double area = sqrt( semiPerimeter * (semiPerimeter - sideOne) * (semiPerimeter - sideTwo) * (semiPerimeter - sideThree) );
    // cout << perimeter << ", " << semiPerimeter << ", " << area << endl;
  
    // display results and exit program
    cout << "This triangle's area is " << fixed << setprecision(2) << area << " square-units, and its perimeter is " <<
      perimeter << " units." << endl;
  }





  return 0;
}
