//Derek Kenyon
//Programming Assignment 1: Question 3
//09.25.2015

//There is code in the program below that is commented out because I attempted to use my own function to calculate the hamming distance, but failed to do so. I figured you would want to see my attempt regardless.

//Preprocessor directives 
#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <string>
//#include "hamming_distance.h"

//Declaring the namesapce so std is not needed before all variable type declarations
using namespace std;

//The main function
int main()
{
	//Declaring the types of variables
	int num1;
	int num2;
	int dist;
	stringstream stream1, stream2; //Declares two variables as stringstream for easier string manipulation

	//Prompting the user for two inputs and storing those inputs in respective variables
	cout << "Enter two positive integers: " << endl;
	cin >> num1;
	cin >> num2;

	//Function to determine the hamming distance
	//int hamming_distance(int num1, int num2, int &dist);
		
	//Converting the integer inputs into strings of hex for easier manipulation.
	stream1 << hex << num1; //stores 'num1', first converted into hex, as an integer in 'stringstream stream1'
	string hex1 = stream1.str(); //declares a string which is the integer 'stream1' converted into a string (possible since 'stringstream' is used)

	stream2 << hex << num2; //stores 'num2', first converted into hex, as an integer in 'stringstream stream2'
	string hex2 = stream2.str(); //declares a string which is the integer 'stream2' covnerted into a string

	//Initializes two variables and storing the size of the corresponding strings
	int size1 = hex1.size();
	int size2 = hex2.size();

	//Stores the integer value of the maximum size between the two strings
	int maxsize = max(size1, size2);

	//Loops through each character of each string until i reaches the maxsize
	for(int i=0; i<=maxsize; i++)
	{
		if(hex1[i]!=hex2[i])
		{
			dist++; //increments dist once for each time the characters were different between the strings
		}

	}
			
	//Outputing the result
	cout << "Hamming distance between " << num1 << " and " << num2 << " when the numbers are in hex format is: " << dist << "." << endl;
	return 1; //returning an integer indicating the main function has finished
}


/*
The code below is what I attempted using the recommended method of creating one's own function, however, my output was zero. 
int hamming_distance(int num1, int num2, int &dist)
{
	int q1;
	int q2;
	int r1;
	int r2;

	while(q1>16 && q2>16)
	{
		q1 = num1/16;
		q2 = num2/16;
		r1 = num1%16;
		r2 = num2%16;
		
		if(r1!=r2)
		{
			dist++;
		}
		
		num1 = q1;
		num2 = q2;
	}
	if(q1!=q2)
	{
		dist++;
	}
	return dist;
} */
