#include <iostream> 
#include <ctime> // for time function
#include <cstdlib> // for srand function and abs()

using namespace std; 

int main ()
{	
	int num, guess; 
	
	//Generate random number here 
	
	srand (time(0));
	num = rand() % 500 + 1 ; // Max guess: 500
	
	//Colder/Warmer
	
	cout << "Enter your first guess: ";
	cin >> guess;
	
	int next, first, second; 
	
	while (guess != num)
	{	cout << "Enter your next guess: ";
		cin >> next;
		
		first = (num - guess);
		second = (num - next);
		
		if ( (abs(first)) < (abs(second)) )
			cout << "Colder" << endl;
			
		if ( (abs(first)) > (abs(second)) )
			cout << "Warmer" << endl;
			 
		if ( (abs(first)) == (abs(second)) )
			cout << "No change" << endl;
		guess = next; 
	}	
	if (guess == num)
		cout << "Correct! The number was " << num << "!" << endl;
	
	return (0);
}