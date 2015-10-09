// ---------------------------------------------------------------------------
// program picks random integer and helps user guess value by telling them
// if guess is close or farther from number compared to their last guess
// input: guess
// output: correctValue
// ---------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
  // random number is generated between 0 and 250 and defined as correctValue
  // user inputs first guess
  int oldGuess;
  int correctValue;
  srand(time(NULL));
  correctValue = rand() % 250;
  cout << "Enter your first guess: ";
  cin >> oldGuess;

  // if guess is not equal to correctValue, user continues to input guesses
  // outputs to user if new guess is closer or farther to correctValue
  while (oldGuess != correctValue)
  {
    int newGuess;
    int oldDifference = abs(correctValue - oldGuess);
    cout << "Enter your next guess: ";
    cin >> newGuess;

    if (newGuess != correctValue)
    {
      int newDifference = abs(correctValue - newGuess);

      if (oldDifference < newDifference)
        cout << "Colder" << endl;
      else if (oldDifference > newDifference)
        cout << "Warmer" << endl;
      else
        cout << "No Change" << endl;
    }
    oldGuess = newGuess;
  }

  // outputs to user that value is correct when they guess it
  cout << "Correct! The number was " << correctValue << "!" << endl;
  return 0;
}

// ---------------------------------------------------------------------------
// Enter your first guess:
// Enter your next guess:
// >Colder or Warmer<
// Correct! The number was ___!
// ---------------------------------------------------------------------------
