//
//  Question 1.cpp
//
//  Created by Rebecca Rucks on 9/17/15.
//  Copyright (c) 2015 Rebecca Rucks. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    float a, b, c;
    float s, area, perimeter;
    
    cout << "Enter the dimensions of the triangle:\n";
    cout << "Side-1: ";
    cin >> a;
    cout << "Side-2: ";
    cin >> b;
    cout << "Side-3: ";
    cin >> c;
    // reads in all dimensions of triangle
    
    if (a>=b+c || b>=a+c || c>=a+b) //if any side is bigger than the other two added together, triangle cannot be formed
    {
        cout << "Dimensions " << a << ", " << b << ", " << c << " do not form a triangle." << endl;
    }
    
    else
    {
        s = 0.5*(a+b+c); //computes s
        area = sqrt(s*(s-a)*(s-b)*(s-c)); //computes area
        perimeter = a+b+c; //computes perimeter
        cout << "This triangle's area is " << fixed << std::setprecision(2) << area << " square-units, and its perimeter is " << perimeter << " units." << endl;
    }
    
    return 0;
}