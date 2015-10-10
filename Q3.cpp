#include <iostream>
#include <stdlib.h>
#include <sstream>
    
using namespace std;
int hammingdist(int,int);
int main()
{
    int posint1; //Initializing variables for user input
    int posint2;

    int distance=0;


    cout << "Enter two positive integers:\n"; //User inputs a positive integer
    cin >> posint1;
    cout << ""; //User inputs another positive integer
    cin >> posint2;

    //Calls the function hammingdist to calculate hamming distance with user inputs
    distance=hammingdist(posint1,posint2);

    //Prints the hamming distance by converting the result of the function to hex
    cout << "Hamming distance between " << posint1 << " and " << posint2;
    cout << " when numbers are in hex format is: " << hex << distance << endl;
    return 0; //Quits out of program
}

//Function is from https://en.wikipedia.org/wiki/Hamming_distance
int hammingdist(int myint1, int myint2) //Function to calculate hamming distance in integer type
{
    int distance = 0;   //Initializes distance
    char val = myint1^myint2; //Bitwise xor of inputs (compares each character
    while(val!=0) //Val takes the amount of true xor arguments and adds to the hamming distance, which computes hamming distance in hex
    {
        ++distance;
        val &= val - 1;
    }
    return distance; //Returns distance to the main function
}


