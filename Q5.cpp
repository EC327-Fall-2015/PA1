#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  //Hot and cold number guessing game

  int randnum;
 
  //No specified range so a random number is generated

  srand(time(NULL));
  randnum = rand();

  
  int guesstwo;
  int guess;
  
  //Prompt user for first guess

  cout << "Enter your first guess: ";
  cin >> guess;

  
  //Prompt user for second guess to compare


cout << "Enter your next  guess: ";
  cin >> guesstwo; 


  //Define conditions to determine whether or not the user is getting closer or further away from the randomly generated number
  //Take absolutel value of the difference between the last two guesses to determine whether the user is getting warmer or colder
  
  while (guess != randnum && guesstwo !=randnum)
    {
  if (abs(randnum-guess)< abs(randnum-guesstwo)){
    cout << "Colder"<< endl;
    guess = guesstwo;
    cout << "Enter your next guess: ";
    cin >> guesstwo;
  }
  else if (abs(randnum-guess) > abs(randnum-guesstwo)){
    cout << "Warmer" << endl;
    guess = guesstwo;
    cout << "Enter your next guess: ";
    cin >> guesstwo; 
  }
  else { 
    cout << "No change" << endl;
    guess = guesstwo;
    cout << "Enter your next guess: ";
    cin>> guesstwo;  
  }
  
    }

  //Once the user guesses the correct randomly generated number then the program will print the following message.

  cout << "Correct! The number was " << randnum << "!" << endl;


return 0;


}
