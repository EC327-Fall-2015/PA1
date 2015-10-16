#include <stdio.h>
#include <stdlib.h> 
#include <iostream>
#include <ctime> 

 using namespace std;

int main() 
{                                

    srand(time(NULL));                            // This seed generator guarantees that a new number is randomized every time. 
    int correct_num = rand() % 1000 + 1;          // Number is a random 1-1000
    int guess;                                    // This is the user's guess
    int distance;                                 // How far the guess was
    int last_guess=-1;                            // The user's last input for comparison. Set to -1 because user cannot input -1
    

    cout << "Enter your first guess." << endl;
         
     // This loop will do the loop first and the check the condition at the end as opposed to a regular while loop
    do    
    {

       //cout << "Guess is" << correct_num << endl;   // Debugger line
      
      cin >> guess;                 //User inputs an integer  

      distance = abs(correct_num - guess);          //Calculate value of distance between the guess and the generated number


      if (guess < 1 || guess > 1000)    
        {                
          cout << "The number you want is between 1 and 1000. Please enter a value in that range. Your guess was " << guess << endl;
        } 

      else if (abs(correct_num - guess)==abs(correct_num - last_guess))    //Checks in the distances were the same from the correct answer
        { 
          cout<< "No change." << endl;
        }
      else if (distance <= 20 && (abs(correct_num - guess)!=abs(correct_num - last_guess)))        
        {          cout << "Warmer" << endl;

        }
      else if (distance > 20 && (abs(correct_num - guess)!=abs(correct_num - last_guess)))    
        {
          cout << "Colder" << endl;   
        } 
      
       last_guess=guess; //important for comparison during the loop. Without this, the program forgets the previous guess by the user
              
    }    
       
    while (guess != correct_num);          //As long as this condition is not met, the loop continues . 
     
    cout << "Correct! The number was " << guess << endl;
             
        return 0;                                        
}
