//
//  main.cpp
//  Q3
//
//  Created by mu mark on 15/9/17.
//  Copyright (c) 2015年 Rong Mu. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    int a,b,int1,int2;          //declare integer variables
    string c = "";              //declare string variables
    string d = "";
    cout<<"Enter two positive integers:"<<endl;
    cin >> int1;                //read the input numbers
    cin >> int2;                //read the input numbers
    a=int1;
    b=int2;
    
    while (a!=0)
    {
        char hexchar='\0';      //convert decimal value to hex
        int hexvalue=a%16;      //convert decimal value to hex
        if (hexvalue>=10){
            hexchar=static_cast<char>((hexvalue-10)+'a');//convert decimal value to hex
        }
        else{
            hexchar=static_cast<char>(hexvalue+'0');//convert decimal value to hex
        }
        c=hexchar+c;            //convert decimal value to hex
        a=a/16;                 //convert decimal value to hex
    }
    
    while (b!=0)
    {
        char hexchar='\0';      //convert decimal value to hex
        int hexvalue=b%16;      //convert decimal value to hex
        if (hexvalue>=10){
            hexchar=static_cast<char>((hexvalue-10)+'a');//convert decimal value to hex
        }
        else{
            hexchar=static_cast<char>(hexvalue+'0');//convert decimal value to hex
        }
        d=hexchar+d;            //convert decimal value to hex
        b=b/16;                 //convert decimal value to hex
    }
    int length1=(int)c.length();
    int length2=(int)d.length();

    if (length1>length2)            //make the two hex value strings the same length in order to compare
    {
        while (length1!=length2)
        {
            d='0'+d;
            length2=(int)d.length();
        }
    }
    else if (length1<length2)
    {
        while (length1!=length2)
        {
            c='0'+c;
            length1=(int)c.length();
        }
    }
    else                            //make the two hex value strings the same length in order to compare
    {
                                    //blank
    }
    //cout<<c<<endl;
    //cout<<d<<endl;
    
    char e[1024],f[1024];           //convert string to char
    strcpy(e,c.c_str());
    strcpy(f,d.c_str());
    //cout<<e<<endl;
    //cout<<f<<endl;
    
    int count=0;                    //determin the humming distance and store the value into count
    int i;
    for (i=0;i<length1;i++){
        if (e[i]!=f[i])
        {
            count++;
        }
    }
    
    cout<<"Hamming distance between "<<int1<<" and "<<int2<<" when numbers are in hex format is: "<<count;

    return 0;
}
