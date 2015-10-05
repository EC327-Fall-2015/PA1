#include <iomanip>
#include <iostream>
using namespace std;

int main(){
  int choice,g;
  int cnt = 1;
  double amt,ans;
  cout << "Celsius to Fahrenheit (enter 0)" << endl;
  cout << "Celsius to Kelvin (enter 1)" << endl;
  cout << "Fahrenheit to Celsius (enter 2)" << endl;
  cout << "Fahrenheit to Kelvin (enter 3)" << endl;
  cout << "Kelvin to Celsius (enter 4)" << endl;
  cout << "Kelvin to Fahrenheit (enter 5)" << endl;
  cout << "Conversion type: ";
  cin >> choice;
  // tell user the 5 conversion types

  while (cnt == 1)
    {
      g = cin.fail();
      cin.clear();
      cin.ignore(256,'\n');
      //check if the user types in random letters or symbols for conversion  types .
      //if they did, ask them to type again, until it is right.
      if (g == 1)
	{
	  choice = 7;
	}
      switch (choice)
	{
        case 0:
	  {
	    cout << "Enter the amount in Celsius: ";
	    cin >> amt;
	    //check if amount they typed in are numbers.
	    //if not, aks them to retype, until it's right.
	    //same for the following case 1 - 5.
	    while (cin.fail())
	      {
		cin.clear();
		cin.ignore(256,'\n');
		cout << "Wrong input, try again: ";
		cin >> amt;
	      }
	    ans = amt*1.8+32;
	    cout << fixed << setprecision(3) << amt << " Celsius is " << ans << " Fahrenheit." << endl;
	    cnt = 0;
	    break;
	  }
	case 1:
	  {
	    cout << "Enter the amount in Celsius: ";
	    cin >> amt;
	    while (cin.fail())
	      {
		cin.clear();
		cin.ignore(256,'\n');
		cout << "Wrong input, try again: ";
		cin >> amt;
	      }
	    ans = amt+273.15;
	    cout << fixed << setprecision(3) << amt << " Celsius is " << ans <<" Kelvin." << endl;
	    cnt = 0;
	    break;
	  }
	case 2:
	  {
	    cout << "Enter the amount in Fahrenheit: ";
	    cin >> amt;
	    while (cin.fail())
	      {
		cin.clear();
		cin.ignore(256,'\n');
		cout << "Wrong input, try again: ";
		cin >> amt;
	      }
	    ans = (amt-32)*5/9;
	    cout << fixed << setprecision(3) << amt << " Fahrenheit is " << ans <<" Celsius." << endl;
	    cnt = 0;
	    break;
	  }
	case 3:
	  {
	    cout << "Enter the amount in Fahrenheit: ";
	    cin >> amt;
	    while (cin.fail())
	      {
		cin.clear();
		cin.ignore(256,'\n');
		cout << "Wrong input, try again: ";
		cin >> amt;
	      }
	    ans = (amt-32)*5/9+273.15;
	    cout << fixed << setprecision(3) << amt << " Fahrenheit is " << ans <<" Kelvin." << endl;
	    cnt = 0;
	    break;
	  }
	case 4:
	  {
	    cout << "Enter the amount in Kelvin: ";
	    cin >> amt;
	    while (cin.fail())
	      {
		cin.clear();
		cin.ignore(256,'\n');
		cout << "Wrong input, try again: ";
		cin >> amt;
	      }
	    ans = amt-273.15;
	    cout << fixed << setprecision(3) << amt << " Kelvin is " << ans <<" Celsius." << endl;
	    cnt = 0;
	    break;
	  }
	case 5:
	  {
	    cout << "Enter the amount in Kelvin: ";
	    cin >> amt;
	    while (cin.fail())
	      {
		cin.clear();
		cin.ignore(256,'\n');
		cout << "Wrong input, try again: ";
		cin >> amt;
	      }
	    ans = (amt-273.15)*1.8+32;
	    cout << fixed << setprecision(3) << amt << " Kelvin is " << ans <<" Fahrenheit." << endl;
	    cnt = 0;
	    break;
	  }
	case 7:
	  //if the user types in 7 or letters or symbols
	  //ask them to retype it.
	  {
	    cout << "Wrong input, try again: ";
	    cin >> choice;
	    cnt = 1;
	    break;
	  }
	default:
       	  {
	    //if the user types in numbers not 0-5,
	    //ask them to retype it.
	    cout << "Wrong input, try again: ";
	    cin >> choice;
	    cnt = 1;
	    break;
	  }
	}
    }
  return 0;
}
