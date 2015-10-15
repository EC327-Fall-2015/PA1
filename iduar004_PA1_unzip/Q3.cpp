#include <iostream>

using namespace std;

main ()
{
  //prompts for input
  cout << "Enter two potitive integers:" << endl;

  //initiating both UNSIGNED integers
  unsigned int inum1;
  unsigned int inum2; 

  //initiate input values
  cin >> inum1;
  cin >> inum2;


  //Initializing counters for while loop
  int loopcount = 0; 
 int equalcount = 0;

 // Intitializes rem values for loop. These values are the ones compared to determine is the operation has the same avlue for both inputs
 int rem1;
  int rem2;

  //Initializes values to be copy of input for final output
  int inum11;
  int inum22;

  //Copies input
  inum11 = inum1;
  inum22 = inum2;

  //While loop that goes through entire process of continually dividing by 16. Each subsubsequeent time loop is gone through the values will get smalled and smaller.
 while (loopcount != 9)
   {
     rem1 = inum1%16;
     rem2 = inum2%16;
     if (rem1 != rem2)
       equalcount++; // counts when they are NOT equal

     inum1 = (inum1-rem1)/16; //modifies inum1 by subtracting remainder and diving by 16 (b/c of hex)to get whole value for next loop
     inum2 = (inum2-rem2)/16; //does same thing to inum2


     loopcount++; //counts times loop has gone by to have a max of 9 which is while condition. Max is 9 because it can only have a max of 9 values in hex for max value
  }


 //outputs final value
 cout << "Hamming distance between " << inum11 << " and " << inum22 << " when numbers are in hex format is: " << equalcount << endl;






  return 0;
}
