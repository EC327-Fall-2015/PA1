#include <iostream> 

using namespace std; 

int main()
{
	cout << "Enter character: ";					// Prompts character input 
	char ascii;
	cin >> ascii; 									// Becomes ASCII value 
	
	cout << "Offset (enter 0 to convert case): ";  // Prompts offset input 
	int offset;
	cin >> offset;									// Becomes ASCII value 
	
	
	int result;
	
	if (offset == 0)
	{
		if ( (ascii >= 65) && (ascii <= 90) )		// If ASCII value is uppercase 
		{	result = ascii + 32 ;
			cout << "New character: " << (char) result << endl; 
		}	
		else if ( (ascii >= 97) && (ascii <= 122) ) 		// If ASCII value is lowercase 
		{	result = ascii - 32;
			cout << "New character: " << (char) result << endl; 
		}	
		else if ( ((ascii >= 0) && (ascii <=64)) || ((ascii >= 91) && (ascii <=96)) ||
			((ascii >= 123) && (ascii <=127)) )		// If ACSCII is not a letter 
		{	result = ascii;
			cout << "New character: " << (char) result << endl; 
		}
	}
	else 
	{	
		result = ascii + offset;
				
		if ( result > 127 )
			cout << "Error. Out of range." << endl; 
		
		else 
			cout << "New character: " << (char) result << endl; 
	}
	
		
	return (0);	
}
