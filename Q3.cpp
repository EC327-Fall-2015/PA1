//
//  main.cpp
//  Q3_hamming_distance
//
//  Created by Tess Gauthier on 9/20/15.
//  Copyright © 2015 Tess Gauthier. All rights reserved.
//  Determines hamming distance between any two numbers with 32-bit precision

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    unsigned int decimal1;
    unsigned int decimal2;
    
    // Prompts user to enter two decimal integers
    
    cout << "Enter two positive integers:" << endl;
    cin >> decimal1;
    cin >> decimal2;
    
    int printdecimal1 = decimal1;
    int printdecimal2 = decimal2;
    
    // Initializes hex variables to 32 bits of precision
    
    string hex1;
    string hex2;
    
    // Converts decimal integers to hex values
    
    while (decimal1 != 0)
    {
        int hexValue1;
        hexValue1 = decimal1 % 16;
        
        char hexChar1;
        hexChar1 = (hexValue1 <= 9 && hexValue1 >= 0)?
        static_cast<char>(hexValue1 + '0'):
        static_cast<char>(hexValue1 - 10 + 'A');
        
        hex1 = hexChar1 + hex1;
        decimal1 = decimal1/16;
    }
    
    while (decimal2 != 0)
    {
        int hexValue2;
        hexValue2 = decimal2 % 16;
        
        char hexChar2;
        hexChar2 = (hexValue2 <= 9 && hexValue2 >= 0)?
        static_cast<char>(hexValue2 + '0'):
        static_cast<char>(hexValue2 - 10 + 'A');
        
        hex2 = hexChar2 + hex2;
        decimal2 = decimal2/16;
    }
    
    // To make strings the same length
    
    if (hex1.length() != hex2.length())
    {
        double difference;
        difference = hex1.length() - hex2.length();
        difference = abs(difference);
        string zeros;
        zeros = '0';
        int i = 1;
            if (i < difference)
            {
                zeros = zeros + '0';
                i = i + 1;
            }
            if (hex1.length() > hex2.length())
            {
            hex2 = zeros + hex2;
            }
            if (hex2.length() > hex1.length())
            {
                hex1 = zeros + hex1;
            }
    }
    
    // Works when strings are same length
    
    double looplength;
    looplength = hex1.length();
    int hamming = 0;
    
    
    for (int i = 0; i < looplength; i++)
    {
        if (hex1[i] != hex2[i])
        {
            hamming = hamming + 1;
        }
    }
    
    cout << "Hamming distance between " << printdecimal1 << " and " << printdecimal2 << " when numbers are in hex format is: " << hamming << endl;
    
    return 0;
}
