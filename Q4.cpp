#include <iostream>

using namespace std;

int main()
{
    //declaring variables for the input and the offset
    char chinp;
    int offst;
    char chout;
 
    //user input for the input and the offset
    cout << "Enter character: ";
    cin >> chinp;
    cout << "Offset (enter 0 to convert case): ";
    cin >> offst;

    //find the new character
    if ((offst + chinp) > 126) //highest decimal value of a valid character
	cout << "Error. Out of range." << endl;
    else if (offst == 0) //change case
	{
	    if (chinp >= 65 && chinp <= 90) //lowercase converted to uppercase
		chout = chinp + 32;
	    else if (chinp >= 97 && chinp <= 122) //uppercase converted to lowercase
		chout = chinp - 32;
	    else
		chout = chinp; //numbers/symbols stay the same
	cout << "New character: " << chout << endl;	
	}
	
    else //offsetting normally
	{
	    chout = chinp + offst;
	    cout << "New character: " << chout << endl;
	}
	
    return 0;
}
