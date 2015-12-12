//
//  main.cpp
//  Q1
//
//  Created by Michaela Moynihan on 9/29/15.
//  Copyright © 2015 Michaela Moynihan. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //Declare variabels and types
    int a;
    int b;
    int c;
    float area;
    
    //Asks user for input of three sides of  triangle
    cout << "Enter the dimensions of the triangle: " << endl;
    cout << "Side-1: " ;
    cin >> a;
    cout << "Side-2: " ;
    cin >> b;
    cout << "Side-3: " ;
    cin >> c;
    
    //Checks to see if the dimensions can create a triangle, if so, computes area and perimenter
        if ((a + b > c) && (a + c > b) && (b + c > a))
        {
            float per = a + b + c;
            float s = (per / 2);
            float under;
            under = s*(s-a)*(s-b)*(s-c);
            area = sqrt(under);
            cout << "This triangle's area is " << area << " square-units, and its perimeter is " << per << " units." << endl;
        }
        else
        {   cout << "Dimensions " << a << ", " << b << ", " << c << " do not form a triangle." << endl;
    
        }
        return 0;
}
