#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	char Character, NCharacter;
	int offset, OOR;
	cout << "Enter Character: ";
	cin >> Character;
	cout << "Offset (enter 0 to convert case):" << " ";
	cin >> offset;
	OOR = int(Character) + offset; 

	if(OOR > 126 || OOR < 32)
	{
		cout << "Error. Out of range." << endl;
		return 0;
	}


	if (offset == 0 && Character > 64)
		{
			if(Character > 91)
			{
				NCharacter = Character - 32;
				cout << "New character:" << " " <<NCharacter << endl;
			}
			else if (Character >= 65 && Character <= 90)
			{
				NCharacter = Character + 32;
				cout << "New character:" << " " << NCharacter << endl;
			}
			else
			{
				NCharacter = Character;
				cout << "New character:" << " " << NCharacter << endl;
			}	
		}
	

	else 
		{
			NCharacter = Character + offset;
			cout << "New character:" << " " << NCharacter << endl;
		}

}