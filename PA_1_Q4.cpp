#include <iostream>
using namespace std;
int main()
{

char charak;
int offset;
int newchar;
int changer;
char finalval;

 cout << "Hi there. Enter a character. Do it now." <<endl; // User enters character without the need of quotes.
 cin >> charak;
 cout << "Now add an offset. Press 0 to convert the case." << endl; // Prompt user for directions.
 cin >> offset;

//Now get variable charak into its ascii form


 if (offset == 0) // This is the change of case condition.
   {
     if ((int) charak < 90) // If user input was upper case. 
       {
	 newchar = (int) charak + 32; // Change character to integer. 32 is distance between cases of the same letter.
	 finalval = (char) newchar; // Change integer back to character form.
	 cout << "The new character is " << finalval<< endl;
       }
     
     else 
       {
	 newchar = (int) charak - 32; // If user input was lower case. 
	 finalval = (char) newchar; // See comments above.
	 cout << "The new character is " << finalval<< endl;
       }
   }
 
 else
   {
     
     newchar = (int) charak; // Change character to integer.
     changer = newchar + offset; // Add integer offset to newly integerized character.
     finalval = (char) changer; // Revert back to character.
     cout << "The new character is " << finalval << endl;
     
   } 
 
 return 0;
 
}
