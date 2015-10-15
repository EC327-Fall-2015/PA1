#include <iostream>

using namespace std;

int main()
{
	//declare variables to hold the input number, the input char, the offset, the new calculated value and the new corresponding char.
	int asciiValInput;
	char inputChar;
	int offsetVal;
	int newVal;
	char newChar;
	//asks user for input
	cout<<"Enter character: ";
	cin>>inputChar;
	cout<<"Offset (enter 0 to convert case): ";
	cin>>offsetVal;
	//converts the given char to an ascii value
	asciiValInput=(int)inputChar;
	//if the offset is zero, then change the case or set the new value to the entered value (stays the same)
	if(offsetVal==0)
	{	
		//if the ascii values correspond to a lowercase letter
		if(asciiValInput<=122 && asciiValInput>=97)
		{
			//then subtract 32 to get its uppercase form.
			newVal=asciiValInput-32;
		}
		// if the ascii values correspond to a uppercase letter
		else if(asciiValInput<=90 && asciiValInput>=65)
		{
			//then add 32 to get its lowercase form
			newVal=asciiValInput+32;
		}
		else
		{
			//if not a letter, then just set the new value to its existing value.
			newVal=asciiValInput;
		}
	}
	//if the offset is not zero,
	else if (offsetVal!=0)
	{
		//add the offset to the original ascii value and set it as the new value
		newVal=asciiValInput+offsetVal;
	}
	//if the new value exceeds 127, then it doesn’t correspond to anything and say so.
	if(newVal>127)
	{
		cout<<"Error. Out of range."<<endl;
		return 0;
	}
	//convert the ascii value to the corresponding char.
	newChar=(char)newVal;
	//print it
	cout<<"New Character: "<<newChar<<endl;
	return 0;

}

