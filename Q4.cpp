#include <iostream> 
#include <iomanip>
using namespace std;
int main()
{
	char ch;
	int off;
	int chnum; 
	cout << "Enter character: " ;
	cin >> ch; //user character input
	chnum= static_cast<int>(ch) ;//convert to ascii value
	cout << "Offset (enter 0 to convert case): " ;
	cin >> off ; //user non-negative interger offset input
	int newnum;
	char newch;

	if (chnum + off > 127) //error check if oringinal code + offset is outside of ASCII table range
	{
		cout <<"Error. Out of range." << endl; //end program
	}
	else
	{
		if (chnum >=65 && chnum <= 90) //check if uppercase letter
			if (off == 0)//convert case
			{
				newnum= chnum +32; //convert to lowercase
				newch = static_cast<char>(newnum); //cast to character
			}
			else
			{
				newnum = chnum + off ; //offset
				newch = static_cast<char>(newnum) ;
			}
		else if (chnum >= 97 && chnum <= 122) //check if lowercase letter
			if (off == 0)//convert case
			{	
				newnum= chnum - 32; //convert to uppercase
				newch = static_cast<char>(newnum);
			}
			else
			{
				newnum = chnum + off ; //offset
				newch = static_cast<char>(newnum) ;
			}
		else //not a letter
			if (off == 0)//convert case
			{
				newnum= chnum; //return same letter
				newch=static_cast<char>(newnum);
			}
			else
			{
				newnum = chnum + off ; //offset character
				newch = static_cast<char>(newnum) ;
			}
			cout << "New character: "<< newch << endl; //output new character
	}

return 0;
}