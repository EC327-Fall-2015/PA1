#include <iostream>
#include <cstring>
#include <stdio.h>
#include <ctype.h>

using namespace std;
 
 int main ()
 {
	int i; //psuedo counter
	char user_input_letter[0]; //initialize input variable

	cout << "Enter character:" <<endl;

 	cin >> user_input_letter;


 	int input_shift; //shift offset

 	cout << "Offset (enter 0 to convert case):" << endl; 

 	cin >> input_shift;
 	
 	//char user_input_letter[0];

	char return_letter[0];


	if (isdigit(user_input_letter[0]) && input_shift==0) //if first input was a number, return number w/o shift
		{
			cout << "New character:" << user_input_letter <<endl;
		}
	else if isdigit(user_input_letter[0] && input_shift!=0) //if first input was a number, return number with the shift
		{
			cout << "New character:" << user_input_letter+input_shift <<endl;
		}
	else if	(input_shift==0) //if shift is 0 and its not a number continue
		if (isupper(user_input_letter)) //if Uppercase then lowercase 
			{
				for(i=0; user_input_letter[i]; i++)
					{
						return_letter[0] = tolower(user_input_letter[i]);
						cout << "New character:" << return_letter[0] <<endl;
					}
			}
		else if (islower(user_input_letter)) //lowercase then uppercase
			{
				for(i=0; user_input_letter[i]; i++)
					{
						return_letter[0] = toupper(user_input_letter[i]);
						cout << "New character:" << return_letter[0] <<endl;
					}
			}
	else	//if shift is some value and inputs are not a number, continue
		if (isupper(user_input_letter)) //if Uppercase, return uppercase value shifted over input_input
			{

				return_letter[0] = user_input_letter[0]+input_shift;
				cout << "New character:" << return_letter[0] <<endl;

			}
		else if (islower(user_input_letter)) //if lowercase, return lowercase value shifted over input_input
			{

				return_letter[0] = user_input_letter[i]+input_shift;
				cout << "New character:" << return_letter[0] <<endl;
			}		
	return 0;
}
