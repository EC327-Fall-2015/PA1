//
//  main.cpp
//  homeywork Question 3
//
//  Created by Alyssa Myszewski on 10/1/15.
//  Copyright © 2015 Alyssa Myszewski. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

//function that converts integer into a string
string hexconvertor(int integer)
{
    int remainder;
    string hex="";
    char a=0;
    while (integer!= 0)
    {
        remainder=(integer % 16);
        integer=integer/16;
        if (-1<remainder && remainder<10)
        {
            a=remainder+48;
        }
        if (10<remainder && remainder<15)
        {
            a=remainder+87;
        }
        
        hex=a+hex;
        
    }
    
    return hex;
    
}

int main()
{
    //declares variables
    int integer1;
    int integer2;
    unsigned long length;
    int honeyham;
    
    //prompts user for input of two integers
    cout<<"Enter Two Positive Integers: "<<endl;
    cin>>integer1;
    cin>>integer2;
    
    //calls on hexconvertor to
    string hex1=hexconvertor(integer1);
    string hex2=hexconvertor(integer2);
    
    length = hex1.length();
    honeyham=0;
    
    //loops through and compares each element of the string against the other
    //if they are different adds 1 to the hamming count
    //goes through entire string and hamming count = hamming distance @ the end
    
    for (int i =0;i<length;i=i+1)
    {
    
        if (hex1.at(i) != hex2.at(i))
        {
            honeyham=honeyham+1;
        }
        if (hex1.at(i) == hex2.at(i))
        {
            honeyham=honeyham+0;
        }
    }
    
    //displays hamming distance
    
    cout<<"Hamming Distance between "<<integer1<<" and "<<integer2<<" when numbers are in hex format is  "<<honeyham<<endl;
    
    return 0;
    
}

