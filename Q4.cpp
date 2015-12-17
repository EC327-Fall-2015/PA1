#include <iostream>  
#include <ctype.h>  
#include <stdio.h>
using namespace std;

int main()
{
  char variable1;
  int offset;
  cout << "Enter character: " ;
  cin >> variable1;
  cout << "Offset (enter 0 to convert case): ";
  cin >> offset;
  if (offset == 0)
      {
	if (isalpha(variable1))    // To check if it's a letter
	   {
	     if (islower(variable1)) // to check if it's lowercase 
 	     {
	       variable1 = toupper(variable1); // convert to uppercase
	       cout <<"New character: "<< variable1 <<endl;
	     }
	     else
	       {
		 variable1 = tolower(variable1);
		 cout<<"New character: "<< variable1<< endl;
	       }
	   }
       else
	  {
	    cout <<"New Character: "<< variable1<<endl;
	  }
      }
    else 
      {
	int ascii1 = int (variable1);  // turn the variable into its ascii code 
	    ascii1 = ascii1 + offset;
	    if (ascii1 > 94 )  // 94 is the range of where the signs are
	      {
		cout << "Error. Out of range."<< endl;
	      }
	    else
	      {
		char variable2 = char(ascii1);   // turn the new ascii value into a letter
		cout <<"New character: "<< variable2 << endl;
	      }
      }
  return 0;
}
