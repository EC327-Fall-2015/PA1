/* 
Write code that asks the user to enter a character.
Then the program asks the user to enter a non- negative integer offset. 
This program adds the offset to the character to produce a new ASCII value. 
This value should then be displayed. 
If the offset is 0 and the character is a letter, the program should change the case of the letter.
	(“Change case” means that a lowercase letter should be converted to uppercase, and an uppercase letter should be changed to lowercase.) 
If the offset is 0 but the character is not a letter, the same character should be displayed.

Example:
Enter character: <D>
Offset (enter 0 to convert case): <7>

*/

#include <iostream>

using namespace std;

int main()
{

        cout << "Enter character: " << endl;
        char c;
        cin >> c;

        cout << "Offset (enter 0 to convert case): " << endl;
        int os;
        cin >> os;
		
		
        if (os==0) //converting case
        {
                if (isupper(c))

                        c= tolower(c);

                else if (islower(c))

                        c=toupper(c);

        }
		
		else
		{
			c+= char(os); //new character= old character plus offset
			
			//code for out of range resulting character didn't work
			//if (c > char(256))
				//cout << "Error. Out of range" << endl;			
			
		}
        cout << "New character: " << c << endl;

}
