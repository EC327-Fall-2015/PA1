//
//  main.cpp
//  PA1_Q3
//
//  Created by veronica celine on 9/23/15.
//  Copyright © 2015 veronica celine. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


//Function to convert decimal to hex value
string hex(int num)
{
    //Initialize variables
    int remainder;
    char ch_remainder = 0;
    string hex = "";
    
    
    //Conversion from decimal to hex
    while(num != 0)
    {
        remainder = num%16;
        num = num/16;
        if (remainder > 0 && remainder < 10)
        {
            ch_remainder = remainder + 48;
        }
        if (remainder > 9 && remainder < 16)
        {
            ch_remainder = remainder + 87;
            
        }
        hex = ch_remainder + hex;
    }
    
    //Output the hex string
    return hex;
}



int main()
{
    //Intialize variables
    int num1, num2;
    int hammingDistance = 0;
    string hex1, hex2;
    
    
    
    //Ask user to input two positive integers (assume will be integers)
    cout << "Enter two positive integers: " << endl;
    cin >> num1;
    cin >> num2;
    
    
    
    //Determine the hex values of input integers
    hex1 = hex(num1);
    hex2 = hex(num2);
    
    
    
    //Calculate hamming distance between the integer's two hex values
    for (int i = 0; i < (hex1.length()); i = i + 1)
    {
        if (hex1[i] == hex2[i])
        {
            hammingDistance = hammingDistance + 0;
        }
        else
        {
            hammingDistance = hammingDistance + 1;
        }
    }
    
    
    //Output the hamming distance results
    cout << "Hamming distance between " << num1 << " and " << num2 << " when numbers are in hex format is: " << hammingDistance << endl;
    
    return 0;
}

























