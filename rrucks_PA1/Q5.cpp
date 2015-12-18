//
//  main.cpp
//  Question 5
//
//  Created by Rebecca Rucks on 9/22/15.
//  Copyright (c) 2015 Rebecca Rucks. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{   int lastguess, newguess, number;
    
    number = rand()%500; //chooses a random number between 0 and 500
    
    cout << "Enter your first guess: ";
    cin >> lastguess; //reads user's inputted guess
    
    if (lastguess == number)
        cout << "Correct!  The number was " << number << "!" << endl; //if guess is correct, program ends
    
    else
    
        do
        {
            cout << "Enter your next guess: "; //prompts for new guess
            cin >> newguess;
            
            
            if (newguess == number)
                cout << "Correct!  The number was " << number << "!" << endl; //if correct, program ends
            
            else if (abs(newguess-number) < abs(lastguess-number)) //if difference between new guess and number less than difference between old guess and number, displays warmer
            {cout << "Warmer" << endl;
                lastguess = newguess;}
            
            else if (abs(newguess-number) == abs(lastguess-number)) // if difference is the same, no change
                {cout << "No change" << endl;
                lastguess = newguess;}

            
            else
            {cout << "Colder" << endl; //if difference greater, colder
                lastguess = newguess;}
            
            
        } while (newguess != number); //repeats as long as the user does not enter the number
    
    
    
    return 0;
}
