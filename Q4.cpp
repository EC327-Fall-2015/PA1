#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	// Asks user to enter character
	char ch, new_ch; // Declares variable for inputted character as well as new character
	cout << "Enter character: ";
	cin >> ch;
	
	// Ask user to enter non-negative integer offset
	int n; // Declares offset variable
	cout << "Offset (enter 0 to convert case): ";
	cin >> n;

	int f; // Declares variable with ascii code for new character
	
	if (n == 0 && isupper(ch)) // Convert upper to lower case
	{
		new_ch = tolower(ch);
	}
	else if (n==0 && islower(ch)) // Convert lower to uppercase
	{
		 new_ch = toupper(ch);
	}
	else if (n==0 && !isalnum(ch)) // No change if n = 0 & it's not a letter or digit
	{
		new_ch = ch;
	}
	else // Add offset to character to produce new ASCII value
	{
		f = ch + n;
		new_ch = static_cast<char>(f);
	}
		
	
	// Display new value or error message
	if (f > 126) // Display error message if 
	{
		cout << "Error. Out of range." << endl;
	}
	else
	{
		cout << "New character: " << new_ch << endl;
	}
	return 0;
}