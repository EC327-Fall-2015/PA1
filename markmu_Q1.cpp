//
//  main.cpp
//  Q1
//
//  Created by mu mark on 15/9/17.
//  Copyright (c) 2015年 Rong Mu. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a,b,c,s;
    cout << "Enter the dimensions of the triangle:" << endl;        //prompt the user to enter dimensions of the triangle
    cout << "Side-1: ";
    cin >> a;
    cout << "Side-2: ";
    cin >> b;
    cout << "Side-3: ";
    cin >> c;           //store the value of the dimensions into variable a, b, and c
    if (a+b>c && a+c>b && b+c>a)        //check whether the triangle is valid
    {
        s=pow(a,2)+pow(b,2)-pow(c,2); //calculate the area and perimeter
        s=pow(s,2);
        s=4*pow(a,2)*pow(b,2)-s;
        s=0.25*sqrt(s);
        cout << "This triangle's area is " << s <<" square-units, and its perimeter is " << a+b+c << " units." << endl;
    }
    else
    {
        cout << "Dimensions " << a <<", " << b << ", " << c << " do not form a triangle.";      //print the results
    }
    return 0;
}

