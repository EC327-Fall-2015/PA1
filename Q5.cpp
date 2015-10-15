/*
ssshahin_PA1
Q5.cpp
Warmer or Colder?
Guess the computer's number
*/

#include <iostream>
#include <limits>
#include <cstdlib>
#include <time.h>

using namespace std;

//declare functions
void compareWarmCold(const double& now, const double& before, const int& unknown);
//prints to log whether now is warmer, colder, or same as before in distance to unknown

double absolVal(double num);
//returns a positive double

int main(){
	//declare variables
	double input, last = 0;

	const int MAX_VALUE = 1000;

	//for checking that input is valid
	bool valid = false;
    
    //initialize random seed
    srand(time(NULL));
    
	//generating random int
	const int randomint = rand() % (MAX_VALUE - 1) + 1;

	cout<<"Enter your first guess: ";
	cin>>input;
	cin.ignore();

	while(input != randomint){

		//if second input, or valid input, runs
		if (valid && !(input <= 0 || (int) input != input || input > MAX_VALUE || cin.fail())){
		
			compareWarmCold(input, last, randomint);
			valid = false;
		
		}

		if (cin.fail()){

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout<<"Please only enter positive integers below "<<MAX_VALUE<<": ";

			if(last != 0)
				valid = true;
			else
				valid = false;

		}else if (input <= 0 || (int) input != input || input > MAX_VALUE){
			//negative / zero input or double input or input above MAX_VALUE
			cout<<"Please only enter positive integers below "<<MAX_VALUE<<": ";
			
			if(last != 0)
				valid = true;
			else
				valid = false;

		} else {

			valid = true;
			last = input;
			cout<<"Enter your next guess: ";

		}

		cin>>input;
		cin.ignore();
		
	}

	cout<<"Correct!  The number was "<<randomint<<"!"<<endl;

	return 0;
}

void compareWarmCold(const double& now, const double& before, const int& unknown){
	if (absolVal(unknown - now) == absolVal(unknown - before)){
		cout<<"No change"<<endl;
	}else if (absolVal(unknown - now) > absolVal(unknown - before)){
		cout<<"Colder"<<endl;
	}else{
		cout<<"Warmer"<<endl;
	}
}

double absolVal(double num){
	double posnum;

	if (num < 0)
		posnum = num * -1;
	else
		posnum = num;

	return posnum;
}
