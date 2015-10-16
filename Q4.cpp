#include <iostream>

using namespace std;

//Character input function

char char_input()
{
	char character_in;
	
	cout<<"Enter character:";
	
	cin>>character_in;
	
	return(character_in);
}

//Offset input function

int offset_input()
{
	int offset_number;

	cout<<endl<<"Offset (enter 0 to convert case):";

	cin>>offset_number;

	return(offset_number);
}

//Character to integer conversion function, simply set integer equal to character 

int char_to_int_converter(char character)
{
	int integer_conversion;

	integer_conversion = character;

	return(integer_conversion);
}

//Integer to character conversion function

int int_to_char_converter(int integer)
{
	char character_conversion;

	character_conversion = integer;

	return(character_conversion);
}

//Function specifically for offset 0

int zero_offset(int integer_value)
{
	int new_value = integer_value;

	//Checks to see if integer value was a letter in ASCII, if it does, uses the integer difference for capitalization, else returns 0

	if ((integer_value > 64) and (integer_value < 91))
	{
		new_value = (new_value+32);

		return(new_value);
	}
	else if ((integer_value > 96) and (integer_value < 123))
	{
		new_value = (new_value-32);

		return(new_value);
	}
	else
	{
		return(integer_value);
	}
}

//Main function

int main()
{
	//Initialize variables
	
	char character;
	
	int offset;
	
	int converted_char;
	
	int offsetted_char;
	
	char converted_int;
	
	//Runs input functions
	
	character = char_input();
	
	offset = offset_input();
	
	cout<<endl;
	
	//Converts character to input
	
	converted_char = char_to_int_converter(character);
	
	//Checks to see if offset and character integer value is too large
	
	if (offset+converted_char > 127)
	{
		cout<<"Error. Out of range.";
		
		return (0);
	}
	
	else if (offset == 0)
	{
		offsetted_char = zero_offset(converted_char);
	}
	
	else
	{
		offsetted_char = converted_char+offset;
	}
	
	//Converts character to integer
	
	converted_int = char_to_int_converter(offsetted_char);
	
	//Prints the new character
	
	cout<<"New character: "<<converted_int<<endl;
}


