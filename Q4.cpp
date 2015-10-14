//
//  main.cpp
//  PA Question 4
//
//  Created by Alyssa Myszewski on 9/30/15.
//  Copyright © 2015 Alyssa Myszewski. All rights reserved.
//

#include <iostream>
#include <cctype>
using namespace std;


int main()
{
    //initializes variables
    char character;
    int asciiconvert;
    int offset;
    int newasciivalue;
    char newchar;
    
    //prompts for user input of character and offput
    cout<<"Enter character: ";
    cin>>character;
    cout<<"Offset (enter 0 to convert case): ";
    cin>>offset;
    
    //converts character to integer
    
    asciiconvert=int(character);
    
    //error checks input and offset
    
    while (cin.fail())
    {
        cout<<"Offset (enter 0 to convert case): ";
        cin.clear();
        cin.ignore(1000,'\n');
        cin>> offset;
    }
    
    while(offset<0 || (offset+asciiconvert)>127)
    {
        cout<<"Offset (enter 0 to convert case): ";
        cin>>offset;
    }
    
    // displays new case, new character or same digit
    if (offset==0)
    {
        if(asciiconvert>=48 && asciiconvert<=57)
        {
            newasciivalue=asciiconvert;
            newchar= static_cast<char>(newasciivalue);
            cout<<"New Character: "<<newchar<<endl;
        }
        
        else if(asciiconvert>=65 && asciiconvert<=90)
        {
            newasciivalue=asciiconvert+32;
            newchar= static_cast<char>(newasciivalue);
            cout<<"New Character: "<<newchar<<endl;
        }
        
         else if(asciiconvert>=97 && asciiconvert<=122)
        {
            newasciivalue=asciiconvert-32;
            newchar= static_cast<char>(newasciivalue);
            cout<<"New Character: "<<newchar<<endl;
        }
    }
        
    else
        {
            newasciivalue =(asciiconvert+offset);
            newchar= static_cast<char>(newasciivalue);
            cout<<"New Character: "<<newchar<<endl;
        }
    
    

    return 0;
    
        
}
