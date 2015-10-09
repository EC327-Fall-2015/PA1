//
//  main.cpp
//  Q5
//
//  Created by mu mark on 15/9/19.
//  Copyright (c) 2015年 Rong Mu. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int main()
{
    int N,a;                             //declare two integer varibles N and a
    double d;                            //declare a double varible d
    srand ((int)time(NULL));             //initiate radom seed
    N=rand() % 1000 + 1;                    //generate a random number between 1 and 1000
    cout<<"Enter your first guess: ";
    cin>>a;                                 //read the input number
    d=fabs((double)N-(double)a);            //calculate the absolute difference
    while(a!=N)
    {
        cout<<"Enter your next guess: ";
        cin>>a;                             //read the next input value
        if (a!=N && fabs((double)N-(double)a)>d)    //if the absolute difference is bigger
        {
            cout<<"Colder"<<endl;                   //print "Colder"
            d=fabs((double)N-(double)a);            //reset d
        }
        else if (a!=N && fabs((double)N-(double)a)<d)   //if the absolute difference is smaller
        {
            cout<<"Warmer"<<endl;                   //print "warmer"
            d=fabs((double)N-(double)a);            //reset d
        }
        else if (a!=N && fabs((double)N-(double)a)==0)  //if the absolute value is the same
        {
            cout<<"No change"<<endl;                //print "no change"
        }
        else if (a==N)                  //if the answer is correct
        {
            break;                      //jump out of the loop
        }
    }
    cout<<"Correct! The number was "<<N<<"!"<<endl;
    
    
    
    
    
    return 0;
}
