//
//  main.cpp
//  Q1
//
//  Created by Tiffany Wu on 9/21/15.
//  Copyright © 2015 Tiffany Wu. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // The code below has the user input the three sides of the triangle
    
    float side1, side2, side3;
    cout << "Enter the dimensions of the triangle:" << endl;
    cout << "Side-1: ";
    cin >> side1;
    cout << "Side-2: ";
    cin >> side2;
    cout << "Side-3: ";
    cin >> side3;
    
    // The if statement checks if the sides inputed are not able to form a triangle
    
    if ((side1 + side2 <= side3) | (side1 + side3 <= side2) | (side2 + side3 <= side1))
        {
            cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 << " do not form a triangle." <<endl;
        }
    
    // If the sides are able to form a triangle, the code below calculates the perimeter and area
    
    else
        {
            float perimeter, area, semiperimeter;
            semiperimeter = (side1 + side2 + side3) / 2.0;
            perimeter = semiperimeter * 2;
            area = sqrt (semiperimeter*(semiperimeter-side1)*(semiperimeter-side2)*(semiperimeter-side3));
            cout << "This triangle's area is " << area << " square-units and its perimeter is " << perimeter << " units" << endl;
        }
    
    return 0;
}