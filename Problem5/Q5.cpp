#include <iostream>

#include <stdlib.h> //srand, rand                                                                                                       

#include <time.h> //time                                                                                                                

#include <cmath>  //std::abs                                                                                                            


using namespace std;


int main()

{


  //Initialize random seed so random actually gives a random number                                                                                                              

  srand(time(NULL));


  //Generate random number. 200 is arbitrary.                                                                                           

  int myrand;

  myrand = rand() % 200;


  //Recieves guess from user and stores                                                                                                 

  int myguess;

  cout << "Enter first guess: ";

  cin >> myguess;



  //Initialize values to be used in loop. This includes variable new for initial loop, which will change in subsequent loops                                                   

  int inew;

  int old=0;

  inew = abs(myrand - myguess);


  //loop to determine if guess is correct                                                                                               

  while (myrand != myguess)

    {

      old = inew; // sets recently set inew to old so I new can be rest to a new value and can be compared to the old value


      cout << "Enter your next guess: ";//prompt to check next guess

      cin >> myguess;

      inew = abs(myrand - myguess);//determined difference between new value and actual value. stores in inew


      if (inew > old)

        cout << "Colder" << endl;

      else if ((inew < old) && inew != 0)

          cout << "Warmer" << endl;

        else if (inew == old)

          cout << "No change" << endl;

    }


  cout << "Correct! The number was " << myrand << "!"  << endl;


  return 0;

}
