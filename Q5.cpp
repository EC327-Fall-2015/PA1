#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main ()
{ 
	int num, guess, guess1, d , d1;
	srand(time(NULL));
	num = rand () % 100;
	

	cout<< "Enter your first guess:";
		cin >> guess;

	if (guess == num)
	{
		cout << "Correct! The number was " << num << "!" << endl; 
	}

	else{

	do
	{
		cout<< "Enter your next guess:";
		cin >> guess1;
		d = abs(guess - num);
		d1 = abs(guess1 -num);


		if (d1 == 0)
			{break;}
	
		if (d < d1)
		{
			cout << "Colder" << endl;
		}

		else if (d > d1)
		{
			cout << "Warmer" << endl;
		}

		else 
		{
			cout << "No change" <<endl;
		}
		
		guess = guess1;
	}
	while (num != guess);

	cout << "Correct! The number was " << num << "!" << endl;}
		
}
