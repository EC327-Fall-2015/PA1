//
//  Programming Assignment.cpp
//  Created by Kaitlin Walsh on 9/24/15.


#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{
   
    srand((unsigned)time(NULL));
    int randNum=rand()%1234;
    int guessNumPrev;
    int guessNumNext;
    
    cout<< "Enter your first guess: ";
    cin>>guessNumPrev;
    
    if (guessNumPrev == randNum)
        goto firstguess;
    
    while (cin.fail())   //Error checks against entering letters or strings. Not sure if needed.
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout<< "Please enter a number for your first guess: ";
        cin>>guessNumPrev;
    }
    
    cout<< "Enter your next guess: ";
    cin>>guessNumNext;
    
    if (guessNumNext == randNum)
        goto firstguess;
    
   do
   {
    
        while (cin.fail())   //Error checks against entering letters or strings. Not sure if needed.
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout<< "Please enter a number for your next guess: ";
           cin>>guessNumNext;
        }
       
       if (abs(randNum - guessNumPrev) < abs(randNum - guessNumNext))
       {

           cout<< "Colder\n";
           guessNumPrev = guessNumNext;
           cout<< "Enter your next guess: ";
           cin>>guessNumNext;
       }
       
       else if (abs(randNum - guessNumPrev) > abs(randNum - guessNumNext))
       {
           cout<< "Warmer\n";
           guessNumPrev = guessNumNext;
           cout<< "Enter your next guess: ";
           cin>>guessNumNext;
       }
    
    // if guess num 1 - guess num 2 is greater than rand num - guessnum 1 cout Colder
    // if guess num 1 - guess num 2 is less than rand num - guessnum 1 cout Warmer
    //do while guessnum != rand num
       
   }while(guessNumNext != randNum);
    
    firstguess: cout<<"Correct!  The number was "<< randNum << "!";
    
    return 0;
    
}