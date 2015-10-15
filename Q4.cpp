#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
//prompt user for character and offset
	char Ch;
	int Off;
	cout<<"Enter character:";
	cin>>Ch;
	cout<<endl<<"Offset (enter 0 to convert case):";
	cin>>Off;
//if Off==0 switch cases of character
	if (Off==0)
	{
		if (isupper(Ch))
		{
			Ch=tolower(Ch);
		}
		else if (islower(Ch))
		{
			Ch=toupper(Ch);
		}
	}
//if Off!=0 change character to Off characters away
	else if (Off != 0)
	{
		Ch=Ch+Off;
	}
	cout<<endl<<Ch<<endl;
//display changed character
}
