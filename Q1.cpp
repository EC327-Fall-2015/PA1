//
//  main.cpp
//  PA1_Q1
//
//  Created by Srilalitha Kumaresan on 9/30/15.


//preprocessor directives

#include <iostream> // needed for cout and cin
#include <math.h>   // needed for sqrt
#include <iomanip>  // needed for setting precision

using namespace std;

int main()
{
    
    double side1;// declare variables to hold side lengths
    double side2;
    double side3;
    
    
    // Prompt user for triangle dimensions
    
    cout<< " Enter the dimensions of the triangle: " <<endl;
    
    cout<<" Side-1: ";
    cin>>side1;
    
    
    cout<<" Side-2: ";
    cin>>side2;
    
    
    cout<<" Side-3: ";
    cin>>side3;
    
    
    int valid;
    //Check if triangle side values are valid based on triangle inequality
    
    if(((side1+side2)>side3) && ((side1+side3>side2) && ((side2+side3>side1))))
       {
           valid = 1;
       }
    else
       {
           valid = 0;
       }
    
    
    //If sides are valid, print area and perimeter
    if (valid == 1)
    {
        double perimeter = side1+ side2+ side3;
        double s = .5*perimeter; // s is half of the perimeter, which is used in Heron's formula
        // Heron's formula
        double area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
        cout<<fixed;
        cout<<setprecision(2);// set double precision to two decimal places
        cout<< " The triangle's area is " << area << " square-units, and its perimeter is "<< perimeter<< " units."<<endl;
        
    }
    else
    {
        //Else print error message
        cout<<fixed;
        cout<<setprecision(2);
        cout<< "Dimensions " <<side1<<", "<<side2<<" ,"<<side3<< " do not form a triangle."<<endl;
        
    }
    return 0;
}

