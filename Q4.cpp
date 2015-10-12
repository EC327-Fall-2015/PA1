//Derek Kenyon
//Programming Assignment 1: Question 4
//09.26.2015

//Preprocessor directives
#include <iostream>
#include <cmath>

//Declares the namespace
using namespace std;

//Main function
int main()
{
	//Initializes the variables to be used such as the character and offset input
	char d;
	int offset;
	char result;

	//A while loop to conitnuously prompt the user for an input until the ASCII value is out of range
	while(true)
	{
		cout << "Enter character: "; //Prompts the user for a character input
		cin >> d; //Stores the user input in variable 'd'
		cout << "Offset (enter 0 to convert case): ";	//Prompts the user for an integer offset input
		cin >> offset; //Stores the user input in variable 'offset'

		int ddec = static_cast<int>(d); //Casts the character 'd' into an integer type stored in 'ddec'

		//if loops to determine the necessary offset/output action
		if(offset<0)
		{
			cout << "Enter in a positive integer offset: "; //Error checks the user's input
			cin >> offset;
		}
		else if(offset==0 and 65<=ddec and ddec<=90) //Uppercase letter input and zero offset
		{
			offset = 'a' - 'A'; //Adds 32 to the ASCII value to convert the case
		}
		else if(offset==0 and 97<=ddec and ddec<=122) //Lowercase letter input and zero offset
		{
			offset = 'A' - 'a'; //Subtracts 32 from the ASCII value to convert the case
		}
		else if(offset==0) //If the user inputs 0 as the offset and the character is not a letter, the result is the user input character
			cout << "New character: " << d << endl;
			cout << endl;
			continue;
		}

		int hold = ddec+offset; //Stores the decimal value of the character and offset added together	
		//Error checks if the decimal value is out of the ASCII range (decimal value > 127)		
		if(hold>127)
		{
			cout << "Error. Out of range." << endl; //Alerts the user an error occurred with the range
			break; //Ends the program when an invalid input is used
		}
		result = static_cast<char>(hold); //Casts the integer 'hold' into a character type stored in result
		cout << "New character: " << result << endl; //Prints the ASCII character
		cout << endl;

	}
	return 1; //Returns integer 1 to signify the function has completed
}
