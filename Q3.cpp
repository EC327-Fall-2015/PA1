// Q3 Srilalitha Kumaresan
// preprocessor directives
#include <iostream>
#include <math.h>

using namespace std;


//function prototypes
void decToHex(int,int); // converts decimal to hex, one hex digit at a time and passes to hammingDist function
int hammingDist(int,int); // compares one pair of hex numbers at a time


int main()
{
    /* The main function declares two positive integers
     then calls the decToHex function, which calls the 
     hammingDist function*/
    
    int num1,num2; // holds each of two positive integers
    // prompt user
    cout<<" Enter two positive integers: " <<endl;
    cin>>num1>>num2;// user input
    
    decToHex(num1, num2);// convert from decimal to hex
    
    return 0;
}

void decToHex( int number1, int number2)
{
    
    /* This function takes in two decimal positive integers and
    converts them to hexadecimal. It then calls a hamming distance
    function to compare each hexadecimal digit at a time */
    
    
    
    int remainder1,remainder2,quotient1,quotient2,distance,loopNum;
    
    cout<< " The Hamming distance between " << number1<< " and "<<number2;
    if (number1>number2)// check which number has more digits
    {
        loopNum = number1;
    }
    else
    {
        loopNum = number2;
    }
    
    while (loopNum > 0)// loop over larger number
    {
        
        remainder1 = number1%16; // find remainder of each number when divided by 16 to get hex digit
        remainder2 = number2%16;
        
        quotient1 = number1/16;// find quotient of each number when divided by 16 to find hex
        quotient2 = number2/16;
        
        distance = hammingDist(remainder1, remainder2);// compare each pair of hex digits
        number1 = quotient1;
        number2 = quotient2;
        
        if (number1>number2) // update loopNum with modified numbers
        {
            loopNum = number1;
        
        }
        else
        {
            loopNum = number2;
        }
   
    }
         cout<<" when numbers are in hex format is: "<< distance<<endl;
    return;
}


int hammingDist(int remainder1, int remainder2)
{
    /* This function takes in two hexadecimal digits and compares
     to see if they are equal. If they are not equal, the hamming distance is
     incremented by 1*/
    
    static int dist;// static variable to increment for each unequal hex pair of digits
    if (remainder1 != remainder2)
    {
        dist++;
    }
    return dist;
}

