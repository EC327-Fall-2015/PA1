#include <iostream>
using namespace std;

int main()
{
  cout << "Enter character: ";
  char mych;
  cin >> mych;
  cout << "Offset (enter 0 to convert case): ";
  int cvt;
  cin >> cvt;
  //gets the character and conversion type from user

  int rst;
  rst = static_cast<int>(mych) + cvt;
  //sum the character's ascii equavelent and conversion number 

  if (rst >= 128)
    //if the sum is greater than 128, there will be error
	{
	cout << "Error. Out of range." << endl;
	}
  else if (cvt == 0)
    //if conversion type is 0, change the case of letters
  	{
	  if ((65 <= mych) && (mych <= 90))
	  //if it's a capital letter, change it to a small letter
	 {
	  cout << "New character: " << static_cast<char>(mych + 32) << endl;
	  }
	else if ((97 <= mych) && (mych <= 122))
	  //if it's a small letter, change it to a capital letter
	  {
	   cout << "New character: " << static_cast<char>(mych - 32) << endl;
	  }
	else
	  //if it's not a letter, return what it is
	  cout << "New character: " << static_cast<char>(mych) << endl;
	}
  else
    //if conversion type is not 0, sum the ascii value and print 
    //the equavelent character out
	{
	 cout << "New character: " << static_cast<char>(rst) << endl;
	}
  return 0;
}


