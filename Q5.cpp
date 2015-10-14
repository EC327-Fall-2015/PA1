#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void main(){
	int randomnumber, guess1, guess2, diff1, diff2;
	srand(time(NULL)); //Reset the random function to generate a new number
	randomnumber= rand() %100; //Initialize random number
	cout << "Enter your first guess: ";
	cin >> guess1;
	
	if (guess1== randomnumber) { //If the first guess is correct
		cout << "Correct! The number was "<< randomnumber<< "!"<< endl;
	}
	else{
	do {
		cout << "Enter your next guess: "; 
		cin >> guess2;
		diff1= abs(guess1- randomnumber); //Calculate difference1
		diff2= abs(guess2- randomnumber); //Calculate difference2
		if (diff2==0){ //If the second guess is correct
		break;
		}
		if (diff1 < diff2){ //Guess 1 is closer to the answer
		cout << "Colder"<< endl;}
		else if (diff1> diff2){ //Guess 2 is closer to the answer
		cout << "Warmer"<< endl;} 
		else{
		cout<< "No change" << endl;}
		guess1= guess2; 
		//guess1 takes the value of guess2 so that the user can input a new guess2 to compare
	
	} while (guess1!=randomnumber); //Loop until the user gets the correct answer
	cout << "Correct! The number was "<< randomnumber<< "!"<<endl;}
	system("pause");
}