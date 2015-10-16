#include <iostream>

#include <cstdlib>

using namespace std;

//Initialize correct answer variable

const int correct_number = (70 + rand() % 777);

//Function for first guess

int first_guess()
{
	int guess;
	
	cout<<"Enter your first guess: ";

	cin>>guess;

	return (guess);
}

//Function for all other guesses

int next_guess()
{
	int guess;

	cout<<"Enter your next guess: ";

	cin>>guess;

	return (guess);
}

//Checks whether the guess is closer to the correct answer as compared to the previous guess

int closeness_check(int guess, int previous_guess)
{
	//Initializes and creates closeness variables based on the one magnitude of the difference
	
	int closeness;
	
	int previous_closeness;
	
	if (guess > correct_number)
	{
		closeness = (guess - correct_number);
	}
	
	else
	{
		closeness = (correct_number - guess);
	}
	
	if (previous_guess > correct_number)
	{
		previous_closeness = (previous_guess - correct_number);
	}
	
	else
	{
		previous_closeness = (correct_number - previous_guess);
	}
	
//Compares closeness and says 
	
	if (closeness == previous_closeness)
	{
		cout<<"No change"<<endl;
	}
	
	else if (closeness > previous_closeness)
	{
		cout<<"Colder"<<endl;
	}
	
	else
	{
		cout<<"Warmer"<<endl;
	}
}

//Checks to see if the guess is the correct_answer

int guess_check(int guess, int previous_guess)
{
	if (guess == correct_number)
	{
		cout<<"Correct! The number was "<<correct_number<<"!";
		
		return(0);
	}
	
	else
	{
		closeness_check(guess, previous_guess);
		
		int new_guess;
		
		new_guess = next_guess();
		
		guess_check(new_guess, guess);
		
		return(0);
	}
}

//Seperate check function for the first guess

int first_guess_check(int guess)
{
	if (guess == correct_number)
	{
		cout<<"Correct! The number was "<<correct_number<<"!";
		
		return(0);
	}
	
	else
	{	
		int new_guess;
		
		new_guess = next_guess();
		
		guess_check(new_guess, guess);
		
		return(0);
	}
}

//Main function

int main()
{
	//Initializing guess variable
	
	int guess;
	
	//First guess function
	
	guess = first_guess();
	
	//Checks first guess 
	
	first_guess_check(guess);
	
	cout<<endl;
}
