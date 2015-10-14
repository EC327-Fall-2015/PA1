//
//  Programming Assignment.cpp
//  Created by Kaitlin Walsh on 9/24/15.


#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    
    double a;
    double b;
    double c;

    
    cout<< "Enter the dimensaions of the triangle: \n";
    cout<< "Side-1: ";
    cin>> a;
    cout<< "Side-2: ";
    cin>> b;
    cout<< "Side-3: ";
    cin>> c;
    
    double s = .5*(a + b + c);
    double s2 = s*(s-a)*(s-b)*(s-c);
    double area = sqrt(s2);
    double perimeter = (a + b + c);
    
    if (a <= 0 || b <= 0 || c <= 0)
        {
            cout<< "Dimensions "<< a << ","<< b << "," << c << " do not form a triangle.";
        }
    if (s2 <= 0)
        {
            cout<< "Dimensions "<< a << ","<< b << "," << c << " do not form a triangle.";
        }
    else if (s2 > 0)
        {
            cout << "This triangle's area is " << setprecision(2)<< fixed << area << " square-units and its perimeter is " << perimeter << " units" << endl;
        }

    return 0;
    
}