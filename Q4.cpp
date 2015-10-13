//
//  main.cpp
//  Q4
//
//  Created by Tiffany Wu on 9/23/15.
//  Copyright © 2015 Tiffany Wu. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    
    // The below code has the input enter a character and then an offset number
    
    char character, conversion;
    int offset, limit = 127;
    cout << "Enter character: ";
    cin >> character;
    cout << "Offset (enter 0 to convert case): ";
    cin >> offset;
    int num_conversion = character;
    
    // The while loop error checks to make sure that the offset value is not too high
    
    while ((num_conversion + offset) > limit)
    {
        cout << "Offset value too high. Enter new offset (enter 0 to convert case): ";
        cin >> offset;
        
    }
    
    /* The below if statement is for if the user inputs 0 as the offset which converts the case of the letter. It checks if the user typed a lowercase or uppercase letter and then using then calculates the offset needed to change cases.
    */
    
    if ((offset == 0) & (num_conversion < 91) & (num_conversion > 64))
    {
        offset = 'a' - 'A';
    }
    else if ((offset == 0) & (num_conversion > 96) & (num_conversion < 123))
    {
        offset = 'A' - 'a';
    }
    
    // This last part calculates what the conversion would be using the offset and then outputs the answer
    
    conversion = character + offset;
    cout << "New character: " << conversion << endl;
    
    return 0;

}
