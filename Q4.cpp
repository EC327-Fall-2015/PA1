#include<iostream>

using namespace std;

int main()
{
//initialize variabes
    char c; 
    int offset;
    int case_offset;
    char ascii;
    cout << "Enter a character:"; //prompt user input chracter value
    cin >> c;
    cout << "Offset (enter 0 to convert case):"; //promp user input offset value
    cin >> offset;
    
    if (c+offset > 127) //check if char code is greater than 'X'
	cout << "Error. Out of Range." << endl;
     else if (c+offset>=65 && c<=90 && offset==0) //convert to lowercase
    {
	case_offset = 'a' - 'A';
	ascii = c + case_offset;
	cout << "New character:" << ascii << endl;
    }
    else if (c>=97 && c<=122 && offset==0) //convert to uppercase
    {
	case_offset = 'A' - 'a';
	ascii = c + case_offset;
	cout << "New character:" << ascii << endl;
    }
    else if (offset==0 && c<65 && c>90 && c<97 && c>122) //character remains the same
    	cout << "New character:" << c << endl;
    else //basic new character offset calculation
    {
	ascii = c + offset;
    	 cout << "New character:" << ascii << endl;
     }
return 0;
}
