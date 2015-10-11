//
//  main.cpp
//  Q4_character_converter
//
//  Created by Tess Gauthier on 9/22/15.
//  Copyright © 2015 Tess Gauthier. All rights reserved.
//  Converts input character by desired offset based on the ASCII table

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // initializes variables for user input
    char initialchar;
    int offsetnum;
    
    // gets user input
    cout << "Enter character: ";
    cin >> initialchar;
    cout << "Offset (enter 0 to convert case): ";
    cin >> offsetnum;
    
    
    // converts initial character to final character based on user input
    char finalchar;
    
    if ((offsetnum + initialchar) > 127)
    {
        cout << "Error. Out of range." << endl;
    }
    
    else if (offsetnum == 0)
    {
        if ((initialchar < 91) && (initialchar > 64))
        {
            finalchar = initialchar + 32;
            cout << "New character: " << finalchar << endl;
            
        }
        else if (initialchar > 96)
        {
            finalchar = initialchar - 32;
            cout << "New character: " << finalchar << endl;
        }
        else
        {
            finalchar = initialchar;
            cout << "New character: " << finalchar << endl;
        }
    }
    else
    {
        finalchar = initialchar + offsetnum;
        cout << "New character: " << finalchar << endl;
    }
    
    return 0;
}

