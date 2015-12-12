//
//  main.cpp
//  PA1-Q3
//
//  Created by Michaela Moynihan on 9/30/15.
//  Copyright © 2015 Michaela Moynihan. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

//Create a function called "hex" to convert decimal numbers into hex format
string hex(int number)
{
    int excess;
    char excess_character = '\0' ;
    string hex = "";
    
    while (number != 0)
    {
        excess= number%16;
        number = number/16;
        
        if (excess < 10 && excess > 0)
        {
            excess_character = excess + 48;
        }
        if (excess < 16 && excess > 9)
        {
            excess_character = excess + 87;
        }
        hex = excess_character + hex;
    }
    
    return hex;
}


int main()
{
    //Declare variables and types
    int n1, n2;
    int hammingDistance = 0;
    string hex_1, hex_2;
    
    //Ask for two positive integers
    cout<< "Enter two positive integers: " << endl;
    cin >> n1;
    cin >> n2;
    
    //finds hex values of the two input integers
    hex_1 = hex(n1);
    hex_2 = hex(n2);
    
    
    //Finds hamming distance between two integers from input
    for (int i = 0; i < (hex_1.length()); i = i + 1)
    {
        if (hex_1[i] == hex_2[i])
        {
            hammingDistance = hammingDistance + 0;
        }
        else
        {
            hammingDistance = hammingDistance +1;
        }
    }
    
    //Final outcome
    cout << "Hamming distance between " << n1 << " and " << n2 << " when numbers are in hex format is: " << hammingDistance << endl;
    
    
    
    
    
    return 0;
}

