//
//  main.cpp
//  Q4
//
//  Created by Srilalitha Kumaresan on 10/1/15.


#include <iostream> // Preprocessor directives
using namespace std;

int main()
{
    /* The main function prompts user for a character and offset.
     Based on these, a new character is output*/
    
    char enteredChar;// to hold entered character
    int offset = 'A' - 'a'; // offset between lower and upper case letters
    int enteredOffset;// to hold entered offset
    bool isLower = 0;// to label as lowercase
    char newChar;// new character output
    
    
    //Prompt user
    cout<< " Enter character: "<<endl;
    cin>>enteredChar;
    
    
    cout<<" Offset (enter 0 to convert case)"<<endl;
    cin>>enteredOffset;
    
    // check if valid ascii range
    if (enteredChar + enteredOffset <= 127)
    {
        //check if it is not a letter and 0 offset
        if (((enteredChar>=0) && ( enteredChar<=64) && (enteredOffset ==0)))
            newChar = enteredChar;
        else
            {
                if (enteredOffset == 0)
                {
                    //change case
                    if(enteredChar >= 96) // lowercase letter input
                        isLower = 1;
                    if (isLower ==1)
                        newChar = enteredChar + offset;
                    else // uppercase letter input
                        newChar = enteredChar - offset;
                    
                }
                else // shift by offset
                    newChar = enteredChar + enteredOffset;
            }
            cout<< " New character: " <<newChar<<endl;
    }
    else
            cout<<" Error. Out of range"<<endl; // if offset out of range
    
    return 0;
}

