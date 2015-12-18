//
//  main.cpp
//  Question 4
//
//  Created by Rebecca Rucks on 9/28/15.
//  Copyright (c) 2015 Rebecca Rucks. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    char character, newchar;
    int offset;
    
    cout << "Enter character: ";
    cin >> character; //reads in character
    cout << "Offset (enter 0 to convert case): ";
    cin >> offset; //reads in offset
   
    
if (character + offset > '~')
    cout << "Error. Out of range." << endl; // if no corresponding character, displays out of range
else
{if (offset == 0) //if entered offset was 0
    {
        if (character >= 'A' && character <= 'Z') // uppercase letters
        {
            newchar = character + 32; // switches from uppercase to lower case
        }
        else if ('a' <= character && character <= 'z') //lowercase letters
        {
            newchar = character-32; // switches from lower case to uppercase
        }
        else // all other characters
            newchar = character; //no change in character
    }
    else
        newchar = character + offset; // for all other cases, displays the character + offset 
    
    cout << "New character: " << newchar << endl;
}
    return 0;
}
