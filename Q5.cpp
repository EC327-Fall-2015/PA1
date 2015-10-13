#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()

{
	int rand_num; //random integer
	int user_num; //user input integer
	int old_diff; //calculates the difference between the first guess and second guess
	int new_diff; //the difference between the previous guess and next guess
	//generates random integer
	srand(time(0));
	rand_num = rand() % 500; //ex: 400
	//cout<<rand_num<<endl;

	//prompts user for a number
	cout<<"Enter your first guess: ";
	cin>>user_num; //ex: 100
	old_diff = abs(user_num-rand_num); //difference between the guess and the answer
	

	if (user_num == rand_num) //correct case
	{
		cout<<"Correct! The number was "<<user_num<<endl;
	}
		
	else


	{
		
		while (user_num != rand_num) 
		{
			cout<<"Enter your next guess: ";
			cin>>user_num;
			new_diff = abs(user_num-rand_num);

			if (user_num == rand_num) //in case the second guess is the correct guess
			{
				cout<<"Correct! The number was "<<user_num<<endl;
			}

			else if(new_diff > old_diff)
			{
				cout<<"Colder"<<endl;
				old_diff = new_diff; //updates the ol_diff to the new_diff in order to cycle through again
				
			}

			else if(new_diff < old_diff)
			{
				cout<<"Warmer"<<endl;
				old_diff = new_diff;
			}

			else if(new_diff == old_diff)
			{
				cout<<"No change"<<endl;
			}

		}
	}

return 0;

}

