#include <iostream>
using namespace std;

int main()
{
char ch;
cout << "Enter Character" << endl;
cin >> ch;
int offset;
cout << "Offset (enter 0 to convert case): " << endl;
cin >> offset;

if ((int(ch)+ offset) > 127 || offset < 0 )
{
	cout << "Error: Out of Range" << endl;
}
/*if (offset < 0)
	cout << "Error: Out of Range" << endl; */
else if ((int(ch))+ offset < 127 && offset >= 0)
{
	if (offset == 0 && int(ch) > 64 && int(ch) < 91 ) // Going from upper to Lower
	{
		char answer;
		answer = int(ch) + 32;
		cout << "New Character: " << answer << endl;
	}
	else if (offset == 0 && int(ch)> 96 && int(ch) < 123 ) //Going from lower to upper
	{
		char answer;
		answer = int(ch) - 32;
		cout << "New Character: " << answer << endl;
	}
	else if ((offset == 0 && int(65)) || (offset == 0 && (int(ch) >90 && int(ch) < 97)) || (offset == 0 && int(ch) > 122))
	{
		char answer;
		answer = int(ch);
		cout << "New Character: " << answer << endl;
	}
	else
	{
		char answer;
		answer = int(ch) + offset;
		cout << "New Character: " << answer << endl;
	}
}
return 0;
 
	
	
	
	
	
	
	
	
}