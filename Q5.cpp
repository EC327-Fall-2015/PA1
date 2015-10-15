#include <iostream>
#include <cmath>
#include <ctime> //for the 'time' in srand to be able to generate a new random number each execution
#include <cstdlib>//for the 'rand' function
using namespace std;
int main() {
	//gives new seed to random function, enabling it to generate a new number each execution of the program
	srand((unsigned)time(0)); 
	//stores the random number and limits its range to 500
	int secretNum = rand()%500 + 1;
	cout << secretNum;
	cout << "Enter your first guess: ";
	int firstGuess;
	cin >> firstGuess;
/*basically the logic here is to store the most recent guess as secGuess and 
the previous one as firstGuess, to compare their relative values to the secret number
using absolute value, and then if secGuess is closer, it checks if secGuess == secret num
and if it does, it breaks the loop. 
*/
	while (firstGuess != secretNum) {
		cout << "Enter your next guess: ";
		int secGuess;
		cin >> secGuess;
		if(abs(firstGuess-secretNum)>abs(secGuess-secretNum)){
			if (secGuess != secretNum) {
				cout << "Warmer" << endl;
				firstGuess = secGuess;
			}
			else {
				break;
			}
		}
		else if (abs(firstGuess - secretNum) == abs(secGuess - secretNum)) {
			cout << "Same temp"<<endl;
			firstGuess = secGuess;
		}
		else {
			cout << "Colder"<<endl;
			firstGuess = secGuess;
		}
	}
	cout << "Correct! The number was "<<secretNum<<"!"<<endl;
	return 0;

}