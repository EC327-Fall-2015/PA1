#include <iostream>
using namespace std;

int convertNum(char charEnt) // function to convert a character into an integer value
{
	int num1 = (int)charEnt;
	return num1;
}

int convertNum(int intEnt) // overloaded function to convert an integer to an integer
{
	int num2 = (int)intEnt;
	return num2;
}



int main()
{
	char inPut;
	int offSet;
	int outPut;
	
	cout << "Enter character: " ;
	cin >> inPut ;
	cout << "Offset (enter 0 to convert case): " ;
	cin >> offSet ;
	
	int value = convertNum(inPut) ; // call function to return an integer value for the input
	
	switch(offSet) // switch for whether the offset is 0 or anything else
	{
		case 0: 	if( value > 64 && value < 123 ) // if it is 0, convert case and cast the number into a character (unless its value is not a letter)
					{
						if ( value < 97)
						{
							outPut = value + 32 ;
							cout << "New character: " << (char)outPut << endl;
						}
						else
						{
							outPut = value - 32 ;
							cout << "New character: " << (char)outPut << endl;
						}
					}
					else if( (value >= 0 && value <65) || (value > 122 && value <127) ) // if the integer value represents a character, keep the character
					{
						outPut = value;
						cout << "New character: " << (char)outPut << endl; // cast the number into a character
					}
					break; // break out so default doesn't run
				
		default:	if ( (value + offSet) > 127 )
					{
						cout << "Error. Out of range." << endl; // if out of range, send this and leave conditional statement
						break;
					}
					else
						outPut = value + offSet; // add the offset to the value
						cout << "New character: " << (char)outPut << endl; // cast new value into ascii
	}
	
	
	return 0;
}
