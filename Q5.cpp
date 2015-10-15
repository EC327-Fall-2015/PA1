#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace  std;

int main(){
	srand(time(NULL));
	int answer = rand() % 100;

	int guess, distance, newDistance;
	cout << "Enter your first guess: ";
	cin >> guess;
	distance = abs(answer - guess);

	while(guess != answer){
		cout << "Enter your next guess: ";
		cin >> guess;
		newDistance = abs(answer - guess);
		if(newDistance == distance){
			cout << "No change" << endl;
		}else if(newDistance > distance){
			cout << "Colder" << endl;
		}else{
			cout << "Warmer" << endl;
		}
		distance = newDistance;
	}
	cout << "Correct!  The number was " << answer << "!" << endl;
	return 0;	
}
