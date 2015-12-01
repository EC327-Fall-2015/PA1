/* Joshua Klein
 * 9/16/15
 *
 * This is the TA solution for Question 5 of PA1.  This program
 * creates a command line number guessing game where the user
 * inputs a number, and the console tells the user if the number
 * is "colder" (farther) or "warmer" (closer) to the number the console
 * is thinking of (determined by a random int).  This process repeats
 * until the correct number is guessed.
 *
 * Note: There is no requirement to limit the answer with modulo,
 * this was added to make the game more realistic.
 *
 * Note 2:  When compiling on lab machines, if you get scope errors, use
 * the command "g++ Q5.cpp -std=c++0x"; this forces the compiler to 
 * compile with C++11 standard libraries.
 *
 */

 #include <iostream> //cout, cin
 #include <math.h> //abs

 using namespace std;

 int main() {
 	//Seeds the rand function with current system time
 	srand(time(NULL));

 	//Establishes the answer (with limits) and guess variables for program
 	int answer = abs(rand()%500), currentGuess, previousGuess;

 	//Asks user for first guess
 	cout << "Enter your first guess: ";
 	cin >> currentGuess;

 	//Loops continually asks user for guesses until user
 	//guesses correct number
 	while (answer != currentGuess) {
 		previousGuess = currentGuess;
 		cout << "Enter your next guess: ";
 		cin >> currentGuess;

 		if (answer == currentGuess) {/*Exit while loop*/}
 		else if (abs(answer-currentGuess) > abs(answer-previousGuess))
 			cout << "Colder\n";
 		else if (abs(answer-currentGuess) < abs(answer-previousGuess))
 			cout << "Warmer\n";
 		else //Distance between answer and both guesses are the same
 			cout << "No change\n";
 	}
	cout << "Correct!  The number was " << answer << "!\n";

 	//Terminates main
 	return 0;
 }