//
//  Programming Assignment.cpp
//  Created by Kaitlin Walsh on 9/24/15.


#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
   
    int number1;
    int number2;
    int n=8;
    int i;
    int quotient1;
    int quotient2;
    int remaindernum1;
    int remaindernum2;

    cout<< "Enter two positive integers:\n";
    cin>>number1>>number2;
    
    int number1Copy = number1;
    int number2Copy = number2;

    
    for (i=0; i < 8; i++)
    {
        quotient1=number1/16.0;
        quotient2=number2/16.0;
        remaindernum1=number1%16;
        remaindernum2=number2%16;

            if (remaindernum1 == remaindernum2)
            {
                n=n-1;
                number1 = quotient1;
                number2 = quotient2;
            }
            else
            {
                number1 = quotient1;
                number2 = quotient2;
            }
        
    }

    
    
    cout<< "Hamming distance between "<< number1Copy << " and " << number2Copy << " when numbers are in hex format is: "<< n << ".";
    
    return 0;
    
}