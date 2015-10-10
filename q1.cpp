
#include <iostream>
#include <cmath> //to use sqrt()
using namespace std;

int main()
{
    double side1, side2, side3; //enter 3 sides
    cout <<"Side-1 "; //enter each side individually
    cin >>side1;
    cout <<"Side-2 ";
    cin >>side2;
    cout<<"Side-3 ";
    cin >>side3;
    if (((side1 + side2) > (side3)) || ((side1 + side3) > (side2)) || ((side2 + side3) > (side1)))
//if the sum of any two sides > other side, then the sides make a triangle
    {
        double perimeter = side1 + side2 + side3;
        double s = perimeter/2;
        double area = sqrt (s*(s - side1)*(s - side2)*(s - side3)); //herons
        cout <<"The triangle's area is "<< area << " square-units, and its perimeter is "<< perimeter <<" units." << endl;
        
    }
    else
//if sides don't satisfy pathagorean thereom, then not a triangle
    {
        cout <<"Dimensions "<< side1 << ", " << side2 << ", " << side3 << " do not form a triangle." << endl;
    }
    return 0;
}
