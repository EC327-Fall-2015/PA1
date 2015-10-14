//
//  main.cpp
//  homework 1 question 5
//
//  Created by Alyssa Myszewski on 10/1/15.
//  Copyright © 2015 Alyssa Myszewski. All rights reserved.
//


#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

int main()
{
    //initializes variables
    int firstguess;
    int guess1;
    int guess1dif;
    int guess2dif;
    int guess2;
    int count;
    int answer;
    
    answer=rand() % 100+1;
    guess2=0;
    
    cout<<"Enter your first guess: "<<endl;
    cin>>firstguess;
    
    //error checks input
    
    while (cin.fail())
    {
        cout<<"Enter your first guess: "<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        cin>> firstguess;
    }
    
    if (firstguess==answer)
    {
        cout<<"Correct! The number was  "<<firstguess<<endl;
        return 0;
    }
    
   if (firstguess!=answer)
    
    {
       guess1=firstguess;
    }
    
    count=0;
    
    //loop to continue prompting for guesses until the right answer is guessed
    
    while (guess1!=answer || guess2!=answer)
        {
            cout<<"Enter your next guess: ";
            count=count+1;
            
            if (count % 2 != 0)
            {
                cin>>guess2;
                
                while (cin.fail())
                {
                    cout<<"Enter your next guess: "<<endl;
                    cin.clear();
                    cin.ignore(1000,'\n');
                    if (count % 2 != 0)
                    {
                        cin>>guess2;
                    }
                }
            }
            
            if (count % 2 == 0)
            {
                cin>>guess1;
            
            while (cin.fail())
            {
                cout<<"Enter your next guess: "<<endl;
                cin.clear();
                cin.ignore(1000,'\n');
                if (count % 2 != 0)
                {
                    cin>>guess1;
                }
            }
            
            }
            
                if (guess1>answer)
                {
                    guess1dif=guess1-answer;
                }
            
                else
                {
                    guess1dif=answer-guess1;
                }
            
                if (guess2>answer)
                {
                    guess2dif=guess2-answer;
                }
            
                else
                {
                    guess2dif=answer-guess2;
                }
               
            
            if (count % 2 != 0 && guess1!=answer && guess2 != answer)
            {
                // displays colder or hotter or no change based on if you are closer, father
                //or same distance away from the number
                if (guess1dif<guess2dif)
                {
                    cout<<"Colder"<<endl;
                }
                
                if (guess1dif>guess2dif)
                {
                    cout<<"Warmer"<<endl;
                }
                
                if (guess2dif==guess1dif)
                {
                    cout<<"No Change"<<endl;
                }
            }
            
            if (count % 2 == 0 && guess1!=answer && guess2 != answer )
            {
                // displays colder or hotter or no change based on if you are closer, father
                //or same distance away from the number
                if (guess2dif<guess1dif)
                {
                    cout<<"Colder"<<endl;
                }
                
                if (guess2dif>guess1dif)
                {
                    cout<<"Warmer"<<endl;
                }
                
                if (guess2dif==guess1dif)
                {
                    cout<<"No Change"<<endl;
                }
                
            }
        
        if (guess1==answer)
        {
            cout<<"Correct! The number was "<<guess1<<endl;
            return 0;
        }
        
        if (guess2==answer)
        {
            cout<<"Correct! The number was "<<guess2<<endl;
            return 0;
        }
        
        
    }
    

    
}

