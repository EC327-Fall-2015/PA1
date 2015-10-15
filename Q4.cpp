#include <iostream>
using namespace std;

int main()
{

  char input;
  int user_offset = 0;
  const int case_offset = 'a'-'A';

  cout << "Enter character: ";
  cin >> input;
  
  cout << "Offset (enter 0 to convert case): ";
  cin >> user_offset;

  if (user_offset == 0)//checking if the user requested a case-change
    {
      if ((int(input) >= int('A')) && (int(input) <= int('Z')))//if 'input' is capital, add 32
	{user_offset += case_offset;}
      else if ((int(input) >= char('a')) && (int(input) <= int('z')))//if 'input' is lowercase, subtract 32
	{user_offset -= case_offset;}
    }
  
  //  cout<<"input:"<<input<<"\nuser_offset: "<<user_offset<<"\ncase_offset: "<<case_offset<<endl;//debugging

  if ((input + user_offset) > 126)//if the user requested to return a value above 126 (tilda), return 'Out of range'.
    cout << "Error. Out of range.\n";//The 127th ASCII value is the DEL key and does not display.
  else
    {
      cout << "New character: " << char(input + user_offset) << endl;
    }
  
  return 0;
}
