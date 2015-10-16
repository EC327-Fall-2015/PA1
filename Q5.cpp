#include <iostream>
#include <cstdlib>     // for rand and srand functions

using namespace std;

int main(){

  int R = rand();      // create a random number

  int x;               // the first guess
  int y;               // the next guess
  int d1 = abs(x - R); // the absolute value of the difference of the first guess
  int d2 = abs(y - R); // the absolute value of the difference of the next guess

	cout << "Enter your first guess: ";
	cin >> x;

	if (x == R){
		cout << "Correct! The number was " << R << endl;    // if it is correct on the first guess
	}
	else {
		cout << "Enter your next guess: ";
		cin >> y;
		
		if (d2 < d1){
			cout << "Warmer" << endl;
		}
		else {
			cout << "Colder" << endl;
		}

		while ( y != R ) {
			int d2 = y - R;
			cout << "Enter your next guess: ";
			cin >> y;
			int d3 = y - R;
			if (d3 < d2){
				cout << "Warmer" << endl;
			}
			else {
				cout << "Colder" << endl;
			}
		}

		cout << "Correct! The number was " << R << endl;
	}

	return 0;

}
