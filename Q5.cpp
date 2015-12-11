#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
	int num, guess;
	
	// Create random answer
	
	//srand(time(NULL)); //initialize random seed
	// num = rand() % 200 + 1;
	
	num = 55;
	// Ask user to input a guess
	cout << "Enter your first guess: ";
	cin >> guess;
	
	
	// State whether guess is warmer or colder from lass guess using absolute value of difference
	
	while (guess != num)
	{
		int old_diff = abs(guess-num);
		
		cout << "Enter your next guess: ";
		cin >> guess;
		
		if (guess == num)
			break;
			
		int new_diff = abs(guess - num);
		
		if (old_diff < new_diff)
		{
			cout << "Colder\n";
		}
		else if (old_diff > new_diff)
		{
			cout << "Warmer\n";
		}
		else
		{
			cout << "No change\n";
		}
	}
	
	cout << "Correct! The number was " << num << "!" << endl;
		
		
	return 0;
}
