#include <iostream>
#include <stdlib.h>
using namespace std;

int abs(int value){
	
	if(value < 0)
		value = value * (-1);
	else
	value = value;

	return value;
}

int main() {
	
	int guess;
	int random = rand() % 500+ 1;
	int varguess;

	cout << "Enter your first guess: ";
	cin >> guess;

	int difference1 = abs(random - guess);
	

	while (random != guess)
	{
		
		int difference1 = abs(random - guess);
		
		cout << "Enter your next guess: ";
		cin >> varguess;
		
		
		int difference2 = abs(random - varguess);
		
		if (random == varguess)
		{
			cout << "Correct!  The number was " << random << "! \n";
		}
		
		else if (difference1 < difference2) 
		{
			cout << "Colder\n";
		}
		
		else if (difference1 > difference2)
		{
			cout << "Warmer\n";
		}

		else if (difference1 == difference2)
		{
			cout << "No change\n";
		}

		guess = varguess;
	}

	return 0;
}
