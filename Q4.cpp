#include <iostream>
using namespace std;

int main()
{
int offset_num;
char ch;
char new_char;
char brack = '['; //91
char at = '@'; //64
char c_brack = '{'; //123
char b_ap = '`'; //96
char caps = 'A'; //65
char low = 'a'; //97
char caps_end = 'Z'; //90
char low_end = 'z'; //122
//char del = 'DEL'; //127

cout<<"Please enter a letter: ";
cin>>ch;

cout<<"Please enter an offset number: ";
cin>>offset_num;

if (offset_num<0)
{
	cout<<"Number invalid.";
}

else if ((offset_num == 0) && (int(ch)>64 && int(ch)<91)) //91>int(ch)>64, capital letters
{ 
	new_char = char((int(ch)+32)); //if char is caps and offset_num is 0, adds the ascii so as to go to the corresponding lower case value
	cout<<new_char<<endl;
}

else if ((offset_num == 0) && (int(ch)>96 && int(ch)<123)) //123>int(ch)>96, lower case letter
{
	new_char = char((int(ch)-32)); //if char is lower case and offset is 0, subtracts ascii so as to go to the corresponding upper case value
	cout<<new_char<<endl;
}

else if ((offset_num == 0 && int(ch)<65) || (offset_num == 0 && (int(ch)<97 && int(ch)>90)) || (offset_num == 0 && int(ch)>122)) //all the cases in which the character is not a letter
{
	new_char = char(ch); //ch remains the same character  
	cout<<new_char<<endl;
}

else if ((int(ch)+offset_num)>127)
{
	cout<<"Error: Out of range."<<endl;
	//if int(ch)+offset_num > the maximum ascii value, state that the value is too great.


}

else
{
	new_char = char(int(ch)+offset_num); //if the character and offset number pass all the qualifications, just add normaly
	cout<<new_char<<endl;

	return 0;
}

}