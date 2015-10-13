//
//  main.cpp
//  PA1_Q4
//
//  Created by veronica celine on 9/23/15.
//  Copyright © 2015 veronica celine. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    // Declare variables
    char character;
    int offset;
    int ASCII_numb1, ASCII_numb2;
    char new_character;
    
    // Ask user for character and offset input
    cout << "Enter character: ";
    cin >> character;
    cout << "Offset (enter 0 to convert case): ";
    cin >> offset;
    ASCII_numb1 = character;
    
    while (true)
    {
        if ((ASCII_numb1 + offset) > 127)
        {
            cout << "Error. Out of range.";
            return 0;
        }
        else
        {
            break;
        }
    }
    
    // Convert character
    
    // If offset = 0
    if (offset == 0)
    {
        if ( ASCII_numb1 > 64 && ASCII_numb1 < 91 )
        {
            ASCII_numb2 = ASCII_numb1 + 32;
            new_character = ASCII_numb2;
        }
        else if ( ASCII_numb1 > 96 && ASCII_numb1 < 123)
        {
            ASCII_numb2 = ASCII_numb1 - 32;
            new_character = ASCII_numb2;
        }
        else
        {
            new_character = character;
        }
    }
    else
    {
        ASCII_numb2 = ASCII_numb1 + offset;
        new_character = ASCII_numb2;
    }
    
    // Print results
    cout << "New character: " << new_character << endl;

    return 0;
}
