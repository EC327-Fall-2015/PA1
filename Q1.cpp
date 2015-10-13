//
//  PA1_Q1.cpp
//  PA1_Q1
//
//  Created by veronica celine on 9/22/15.
//  Copyright © 2015 veronica celine. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //Declare the 3 variable (sides of a triangle)
    double side1, side2, side3;
    
    bool triangle;
    
    double area, areasq, s, perimeter;
    
    //Ask the user to input 3 sides of a triangle.
    cout << "Enter the dimensions of the triangle:" << endl;
    cout << "Side-1: ";
    cin >> side1;
    cout << "Side-2: ";
    cin >> side2;
    cout << "Side-3: ";
    cin >> side3;
    
    
    //Determine whether the 3 sides make a triangle
    if ( (side1+side2) > side3 && (side2 + side3) > side1 && (side3 + side1) > side2 )
    {
        triangle = true;
    }
    else
    {
        triangle = false;
    }
    
    
    //If the 3 sides make a triangle, determine what the area is
    if (triangle == false)
    {
        cout << "Dimensions " << side1 <<", " << side2 << ", " << side3 << " do not form a triangle." << endl;
    }
    else
    {
        perimeter = side1 + side2 + side3;
        s = perimeter/2;
        areasq = (s*(s-side1)*(s-side2)*(s-side3));
        area = sqrt(areasq);
        cout << "This triangle's area is " << area << " square-units and its perimeter is " << perimeter << " units." << endl;
    }
    return 0;
}









