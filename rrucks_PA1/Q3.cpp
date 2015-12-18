//
//  main.cpp
//  Question 3
//
//  Created by Rebecca Rucks on 9/22/15.
//  Copyright (c) 2015 Rebecca Rucks. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <string> 

using namespace std;

string dec2hex(int a) //function to convert from decimal to hex
{
    char hexValue;
    string hex = ""; // sets blank hex string
    while (a != 0) //while there is a
    {
        hexValue = a % 16; // determines remainder
        
        if (hexValue < 10)
            hexValue = hexValue + 48; //if number is less than 10, converts to character value of number
        else
            hexValue = hexValue + 55; // if number greater than 10, converts to corresponding hex character
        
        hex = hexValue + hex; //adds hex value to the beginning of the string
        
        a = a/16; // calculates next value of a to be used
    }
    return hex;
}


int main()
{   int num1, num2, length, length1, length2, diff,
    counter=0; //assigns counter to 0
    string hex1, hex2;
    
    cout << "Enter two positive integers:" << endl;
    cin >> num1;
    cin >> num2;
    
    hex1 = dec2hex(num1); // converts first number to hex
    hex2 = dec2hex(num2); // converts second number to hex

    length1 = hex1.size(); //determines length of first hex string
    length2 = hex2.size(); // determines length of second hex string

    if (length1 > length2) // if first string is longer
    {
        diff = abs(length1-length2); //calculates difference in length
        for (int i=0; i<diff; i++)
        {
            hex2 = '0' + hex2; // for each difference in length, adds 0 to front of hex value so hex strings end up being the same length
        }
    }
    
    else if (length1 < length2) // if second string is longer
    {
        diff = abs(length1-length2); //calculates difference in length
        for (int i=0; i<diff; i++) // for each difference in length
        {
            hex1 = '0' + hex1; // adds 0 to front of hex value so hex strings end up being the same length
        }
    }
    
    length = max(length1, length2); // takes max value of length
    
    for (int i=0; i<length; i++) // loops through both hex strings
    {
        if (hex1[i] != hex2[i]) // if character in string is not equal
            counter++; // adds one to the counter 
    }

    cout << "Hamming distance between "<< num1 << " and " << num2 << " when numbers are in hex format is: " << counter << endl;
    
    return 0;
}

