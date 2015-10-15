#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
	srand(time(NULL)); //seed for random number 
	int answer = rand() % 400; //random number for answer
	int guess; //sets first guess
	cout << "Enter your first guess: ";
	cin >> guess;
	int nextguess; //sets second guess
	while(guess != answer){ //when guess doesnt equal the answer
		cout << "Enter your next guess: "; //call for a second guess
		cin >> nextguess;
		if (abs(nextguess - answer) == abs(guess - answer)) { //if distance between first and second guesses are the same
			cout << "No change" << endl;
		}
		if (nextguess != answer) { //if the second guess doesnt equal the answer
			if (abs(nextguess - answer) < abs(guess - answer)) { // if the distance between second guess and first guess is smaller to answer 
				guess = nextguess; //set second guess equal to first guess to loop
				cout << "Warmer" << endl;

			}
			if (abs(nextguess - answer) > abs(guess - answer)) { // if the distance between second guess and first guess is bigger to answer
				guess = nextguess;
				cout << "Colder" << endl;

			}
		}
		if (nextguess == answer) { //if second guess equals answer make first guess equal to break loop 
			guess = nextguess;
		}
}
	if (guess == answer) {//when the guess is correct 
		cout << "Correct! The number was " << answer << "!" << endl;
		return 0;
	}


}