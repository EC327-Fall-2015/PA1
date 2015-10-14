//
//  main.cpp
//  PA Question 1
//
//  Created by Alyssa Myszewski on 9/30/15.
//  Copyright © 2015 Alyssa Myszewski. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()

{
    // initializes variables
    int side1;
    int side2;
    int side3;
    double area;
    double halfperimeter;
    double perimeter;
    
    //sets output to two decimal places
    
    std::cout <<std::setprecision(2)<< std::fixed;
    
    //prompts user for input of 3 sides
    
    cout<<"Enter the dimensions of the triangle:"<<endl;
    cout<<"Side-1: ";
    cin>>side1;
    cout<<"Side-2: ";
    cin>>side2;
    cout<<"Side-3: ";
    cin>>side3;
    
    if (cin.fail())
    {
        cout<<""<<endl;
        cout<<""<<endl;
        cout<<"That is not a number! As N'sync would say, Bye Bye Bye!"<<endl;
      cin.clear();
      cin.ignore(1000,'\n');
        return 0;
        
    }
    
    //checks if sides make up a triangle
    
    if (side1<=0 || side2<=0 || side3<=0)
    {
        cout<<"Dimensions "<<""<<side1<<", "<<side2<<", "<<side3<<" do not form a triangle."<<endl;
        return 0;
    }
    
    else if (side1+side2<=side3)
    {
        cout<<"Dimensions "<<""<<side1<<", "<<side2<<", "<<side3<<" do not form a triangle."<<endl;
        return 0;
    }
    
    else if (side2+side3<=side1)
    {
        cout<<"Dimensions "<<""<<side1<<", "<<side2<<", "<<side3<<" do not form a triangle."<<endl;
        return 0;

    }
    
    else if (side1+side3<=side2)
    {
        cout<<"Dimensions "<<""<<side1<<", "<<side2<<", "<<side3<<" do not form a triangle."<<endl;
        return 0;
    }
        
    else
    {
        //calculates perimeter and area
        halfperimeter=(side1+side2+side3)*0.5;
        area=sqrt(halfperimeter*(halfperimeter-side1)*(halfperimeter-side2)*(halfperimeter-side3));
        perimeter=2*halfperimeter;
        cout<<"This triangle's area is "<<area<<" square-units and its perimeter is "<<perimeter<<" units."<<endl;
    }
    
    return 0;
    
}

