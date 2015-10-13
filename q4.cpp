#include<iostream>
using namespace std;

int main()
	{char charIn;			//initialize variables
	int offset;
	int newint;
	char newChar;
	cout<<"Enter character: ";		//prompt for character
	cin>>charIn;
	cout<<"Offset (enter 0 to convert case): ";	//prompt for offset
	cin>> offset; 

	if (offset==0)			//if offset is zero, change case
		{if (islower(charIn))				//check is character is lower case
			{newChar=toupper(charIn);}		//convert to uppercase
		else if (isupper(charIn))			//check if character is upper case
			{newChar=tolower(charIn);}		//convert to lower case
		cout<<"New Character: "<<newChar<<endl;	
		}
	else
	{newint=(int)charIn+offset;			//convert character to respective integer number and add offset
	newChar=(char)newint;				//conver the result to character again
	cout<<"New Character: "<<newChar<<endl;}	//print new character

	return 0;}
