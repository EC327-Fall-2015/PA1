#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
//load variables needed
char* x; //x is the hex remainder_ of the first input
char* y; // hex remainder_ of the second input
long x_dec; //initial input 1
long y_dec; //initial input 2
long diff; //final return remainder_ for the hamming dis
char buffer[100]; //array that is used in conversion

char* dechex(long int number_) 
{
    long dec_Num,i=0, remainder_, div_counter = 0,quotient; //i will serve as an iteration counter, div_counter is the number of division counter 
    char hexadecimalNumber[100]; //initialize the local array for conversion

    dec_Num = number_; //reassign input to new local variable 

    quotient = dec_Num; //this number will change

    while(quotient!=0) //quoties was given the value of dec_Num and will be replaced everytime this happens
    {
        remainder_=(quotient%16); //setting the remainder
		switch(remainder_) //using switch is more effective than if/else if here. This will analyze the remainder_ and check for cases
		{
			case 10: //if the remainder is 10, appened A to the array element i
				hexadecimalNumber[i]='A'; 
				break; 

			case 11: //if the remainder is 11, appened B to the array element i
				hexadecimalNumber[i]='B'; 
				break; 

			case 12:  //if the remainder is 12, appened C to the array element i
				hexadecimalNumber[i]='C'; 
				break; 

			case 13:  //if the remainder is 13, appened D to the array element i
				hexadecimalNumber[i]='D'; 
				break; 

			case 14: //if the remainder is 14, appened E to the array element i
				hexadecimalNumber[i]='E'; 
				break; 

			case 15: //if the remainder is 15, appened F to the array element i
				hexadecimalNumber[i]='F'; 
				break; 

			default: //if the remainder is a value lower than 10, appened the numerical remainder to the array element i
				hexadecimalNumber[i]=remainder_+'0'; 
				break; 
		}
		quotient = quotient / 16; //new quotient for the while loop
      	div_counter++; //increment thenumber of times divided
    }
    hexadecimalNumber[i]='\0'; //sets the array with the NULL termination character so it marks the end
    while(hexadecimalNumber[div_counter] != '\0') //as the division counter is not equal to the null (value 0) then increment i 
		i++;
    for(i = div_counter-1; i >= 0; i--) //for when i >=0, i is equal to one less than div_counter, and afterwards, subtract 1 from the value of i  
		{
			buffer[i]=hexadecimalNumber[i]; //appends each element in hexdecimalNumber to buffer
		}
    return (char*) buffer; //returns buffer as a "string"
}

long HammingDist(char* string1, char* string2)
	{
	  long hamming_distance= 0; 	//initialize hamming distance
	  if(string1 == NULL || string2 == NULL) //comaparison to check strings are valid
	  	return -1; //error code if not
	  int length_ = strlen(string1); //take the length of the string one 
	  int i=0; // initialize element number counter
	  for(i; i<length_; i++) //when i is less than the length, do stuffs and then increment i
		  {
	        if(string1[i] != string2[i]) // checking string elements
	        	{
	        		hamming_distance++; //increment hamming_distance
	        	} 
		  }

      return hamming_distance; //return value of distance
      
	}

int main()
{
	cout << "Enter two positive integers: " << endl;
	cin >> x_dec ; //decimal values of input 1 & 2
	cin >> y_dec ;
	
	x=dechex(x_dec); 	//change to hex values
	y=dechex(y_dec);

	diff=HammingDist(x,y); //calculate hamming distance
	cout << "Hamming distance between" << x_dec << y_dec << "when numbers are in hex format is" << diff << "." << endl;  
	return (0);
}