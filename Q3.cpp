//philyuan

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
string Dec_To_Hex(int dec_num);		//prototype of the Dec_To_Hex function

int main(){
	int input_a;		//first decimal input
	int input_b;		//second decimal input
	string hex_a;		//first input converted to hex string
	string hex_b;		//second input converted to hex string
	
	int l_a;			//length of string hex_a
	int l_b;			//length of string hex_b
	
	int limit;			//the limit that caps the number of times we will do comparisons in the comparison loop
	int hammingd;		//hamming distance counter

	//GET INPUT
	cout << "Enter two positive integers:" << endl;
	cin >> input_a;
	cin >> input_b;
	
	//CONVERT TO HEX STRINGS
	hex_a = Dec_To_Hex(input_a);
	hex_b = Dec_To_Hex(input_b);
	
	//START COMPARISON
	l_a = hex_a.length();
	l_b = hex_b.length();
	
	hammingd = abs(static_cast<float>(l_a - l_b));                              //the difference in length (if any) will all count towards the hamming distance
     
	
	//COMPARISON LOOP
	limit = min(l_a, l_b); 					//the number of times we do comparisons is the minimum of the two string lengths
	
	for (int i = 1; i <= limit; i++)	
	{		
		l_a--;								//start at rightmost digit of the hex string, then each time move left one digit
		l_b--;
		
		if(hex_a[l_a] != hex_b[l_b])		//compare the two digits.  if not equal, increase the hamming distance by 1
		{
			hammingd++;
		}
	}
	
	cout << "Hamming distance between " << input_a << " and " << input_b << " when numbers are in hex format is: "<< hammingd << endl;
	
	return 0;
}
 
// 
//FUNCTION THAT TAKES A DECIMAL NUMBER [int] AND OUTPUTS THE HEX CONVERSION STORED IN A STRING [string]
string Dec_To_Hex(int dec_num)
{
							//int dec_num = decimal number input
	char digit;				//hex digit to put into hex number one at a time
	string hex_str;			//string containing the (UNFORTUNATELY, REVERSED) hex string

	string hex_answer;		//UNREVERSED hex string
	
	while(dec_num >= 1)									//LOOP TO ADD DIGITS INTO THE (REVERSED) HEX STRING:
	{													//loop until after the last mod is calculated (i.e. after (decimal/16) is a fraction)
		digit = static_cast<char>(dec_num%16 + '0');	//the digit to be put into the string is the remainder/modulus.
														//casting an int to char, for numbers 0-9 you must add the int value of '0'.
		switch (digit)									//for 10-15, when casted to char, they are the ASCII symbols A-F in each of the following cases.
		{												
			case ':': 
					digit = 'A'; 
					break;
			case ';': 
					digit = 'B';
					break;
			case '<': 
					digit = 'C'; 
					break;
			case '=': 
					digit = 'D'; 
					break;
			case '>': 
					digit = 'E';
					break;
			case '?': 
					digit = 'F';
					break;			
		}
		
		hex_str = hex_str + digit;						//add each digit into the REVERSED hex string
		dec_num = dec_num/16;							//then properly divide the decimal input for next loop
	}
						
														//UNFORTUNATELY, THE HEX STRING IS BACKWARDS, SO LET'S UNREVERSE IT
	for (int i = (hex_str.length()-1) ; i >= 0 ; i--)	//store unreversed hex string in a new string
	{
		hex_answer = hex_answer + hex_str[i];
	}
	
	return hex_answer;									//returns the hex string in its proper order

	return 0;
}
		
		
		
		
		
	
		
