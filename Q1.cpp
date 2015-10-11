//
//  Q1_area_perimeter.cpp
//  Q1_area_perimeter
//
//  Created by Tess Gauthier on 9/18/15.
//  Copyright (c) 2015 Tess Gauthier. All rights reserved.
//  Determines whether any 3 given sides make a triangle, and if so prints area and perimeter

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    // reads in sides of triangle
    cout << "Enter the dimensions of the triangle:" << endl;
    cout << "Side-1: ";
    double sideone;
    cin >> sideone;
    cout << "Side-2: ";
    double sidetwo;
    cin >> sidetwo;
    cout << "Side-3: ";
    double sidethree;
    cin >> sidethree;
    if (sideone + sidetwo <= sidethree)
    {
        cout << "Dimensions " << sideone << ", " << sidetwo << ", " << sidethree << " do not form a triangle." <<endl;
    }
    else if (sidetwo + sidethree <= sideone)
    {
        cout << "Dimensions " << sideone << ", " << sidetwo << ", " << sidethree << " do not form a triangle." <<endl;
    }
    else if (sideone + sidethree <= sidetwo)
    {
        cout << "Dimensions " << sideone << ", " << sidetwo << ", " << sidethree << " do not form a triangle." <<endl;
    }
    else
    {
        float area,perimeter,semiperimeter;
        perimeter = sideone + sidetwo + sidethree;
        semiperimeter = perimeter / 2;
        area = sqrt(semiperimeter*(semiperimeter-sideone)*(semiperimeter-sidetwo)*(semiperimeter-sidethree));
        cout << "This triangle's area is " << setprecision(2) << area << " square-units, and its perimeter is " << perimeter << " units." << endl;
    }
    
    return 0;
}
