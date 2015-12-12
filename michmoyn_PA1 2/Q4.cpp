//
//  main.cpp
//  PA1-Q4
//
//  Created by Michaela Moynihan on 9/29/15.
//  Copyright © 2015 Michaela Moynihan. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    //Declare variables and type
    char letter;
    char letter2;
    int offset;
    int ASCIInumb1, ASCIInumb2;
    
    
    //asks user input for character, and offset
    cout << "Enter character: ";
    cin >> letter;
    cout << "Offset (enter 0 to convert case): ";
    cin >> offset;
    ASCIInumb1 = letter;
    
        //Checks to see if out of range of all ASCII values.
        if( (ASCIInumb1 + offset) >127)
        {
            cout << "Error. Out of range." <<endl;
            return 0;
        }
        
    //Convert to capital and lower cases of same letter
    if (offset == 0)
    {
        if (ASCIInumb1 > 64 && ASCIInumb1 <91)
        {
            ASCIInumb2= ASCIInumb1 +32;
            letter2 = ASCIInumb2;
        }
        else if (ASCIInumb1 >96 && ASCIInumb1 <123)
        {
            ASCIInumb2 = ASCIInumb1 - 32;
            letter2 = ASCIInumb2;
        }
        else
        {
            letter2= letter;
        }
    }
    
    //If not capital case, gives new character as a result of the offset
    else
    {
        (ASCIInumb2 = ASCIInumb1 + offset);
        letter2= ASCIInumb2;
    }
 // Prints new letter/character
    cout<< "New character: " << letter2 << endl;
    
    return 0;
}
