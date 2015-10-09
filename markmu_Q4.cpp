//
//  main.cpp
//  Q4
//
//  Created by mu mark on 15/9/19.
//  Copyright (c) 2015年 Rong Mu. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    char a;                     //declare a character variable a
    char b;                     //declare a character variable b
    int n;                      //declare an integer variable n
    cout<<"Enter character: ";
    cin>>a;                     //read the input character
    cout<<"Offset (enter 0 to convert case): ";
    cin>>n;                     //read the input integer offset
    if(a>=97 && a<=122 && n==0) //if the input character is in lower case and n==0
    {
        b=a-32;                 //convert to upper case
    }
    else if (a>=65 && a<=90 && n==0)    ////if the input character is in upper case and n==0
    {
        b=a+32;                 //convert to lower case
    }
    else
    {
        b=a+n;                  //offset the character and put it into b
    }
    if ((int)b>127||(int)b<0)   //if offset is beyond limit
    {
        cout<<"Error. Out of range.";  //print "ASCII Limit reached!!"
    }
    else                        //if offset is within limit
    {
        cout<<"New character: "<<b; //print the result
    }
    return 0;
}
