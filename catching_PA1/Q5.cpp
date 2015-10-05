#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
  srand(time(0));
  int num = rand() % 500;
  //generate a random letter within 0 and 500
  cout << "Enter your first guess: ";
  int g1;
  cin >> g1;
  if (g1 == num)
    //check if the user's guess is right
    {
      cout << "Correct!  The number was " << num << "!" << endl;
    }
  int g2 = num + 1;
  while (g2 != num)
    {
      //ask the user to guess again and again until the guess is correct
      cout << "Enter your next guess: ";
      cin >> g2;
      int diff = abs(num-g1);
      if (g2 == num)
	//check if user's guess is correct
	//if true, tell him the good news
	{
	  cout << "Correct!  The number was " << num << "!" << endl;
	}
      else if (abs(g2-num) > diff)
	//if the guess is father from correct answer, tell him "colder" 
	{
	  cout << "Colder" << endl;
	  g1 = g2;
	}
      else if (abs(g2-num) < diff)
	//if the guess is father from correct answer, tell him "warmer" 
	{
	  cout << "Warmer" << endl;
	  g1 = g2;
	}
      else
	//if the guess nether gets father nor closer from correct answer,
	// tell him "no change" 
	{
	  cout << "No change" << endl;
	  g1 = g2;
	}
    }
  return 0;
}
