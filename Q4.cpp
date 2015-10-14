//
//  Programming Assignment.cpp
//  Created by Kaitlin Walsh on 9/24/15.


#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
   
    //32 is value for caps convert, program assumes valid ASCII range is from 32 to 126
    //includes all printed characters, including space
    char enteredChar;
    int offset;
    int newCharInt;
    
    
    cout<<"Enter character: ";
    cin>>enteredChar;
    cout<<"Offset (enter 0 to convert case): ";
    cin>>offset;
    
    int enteredCharInt = enteredChar;
    
    if (enteredCharInt < 65 || enteredCharInt > 123)
    {
        newCharInt = enteredCharInt;
        goto jumphere;
    }
    
    newCharInt = enteredCharInt + offset;
    
    if (newCharInt > 126)                         //if out of ASCII range for printed characters
        cout<< "Error. Out of range.";
    
    else if (offset == 0 && enteredCharInt >= 97) //if lowercase
    {
        newCharInt = enteredCharInt - 32;
        
    }
    
    else if (offset == 0 && enteredCharInt <= 97) //if uppercase
    {
        newCharInt = enteredCharInt + 32;
        
    }
    
    jumphere: char a = newCharInt;
    cout<< "New character: "<< a;
    
    return 0;
    
}