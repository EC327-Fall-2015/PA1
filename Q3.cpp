#include <iostream>
#include <string.h>//needed to determine string length
using namespace std;

char arr[65] = "";//defining a global array to be used by main and the Dec. to Hex. converter

void dtoh(int number, char arr[65]);//dtoh = Dec. to Hex.

int main()
{
  char arr1[65] = "";
  char arr2[65] = "";
  int i1 = 0;//i1/i2 = integer 1 / 2
  int i2 = 0;
  int ham = 0;//storing the final Hamming distance here
  
  cout << "Enter two positive integers:\n";
  cin >> i1;
  cin >> i2;
  
  dtoh(i1, arr);//populate the global array with the converted string

  for (int x = 0; x < strlen(arr); x++)
    {
      arr1[x] = arr[x];//store the converted string in array 1
    }

  for (int x = strlen(arr); x>=0; x--)
    {
      arr[x] = 0;//initialize the global array
    }

  dtoh(i2, arr);//populate global array with second converted string

  for (int x = 0; x < strlen(arr); x++)
    {
      arr2[x] = arr[x];//store second converted string in array 2
    }
  
  //  cout << arr1 << endl << arr2 << endl ;//manual verification

  for (int x = 0; x < strlen(arr1); x++)
    {
      if (arr1[x] != arr2[x])//incrementing 'ham' while comparing each character of the arrays
		{
			ham ++;
		}
    }

  cout << "Hamming distance between " << i1 << " and " << i2 << " when numbers are in hex format is: " << ham << endl;
  
  
  return 0;
}


void dtoh(int n, char arr[65])//I felt creating a recursive function was most fitting since the resulting string had to be reversed
{
    if( n > 0 )
    {
      dtoh( n/16, arr );//divide the integer (base 10) by 16 until the result is < 1 
        switch(n%16)//from the top (most recently added) layer of the stack moving down, we append the Hex equivalent of n%16
        {
	case 0 :
	  arr[strlen(arr)] = '0';
	  break;
	case 1 :
	  arr[strlen(arr)] = '1';
	  break;
	case 2 :
	  arr[strlen(arr)] = '2';
	  break;
	case 3 :
	  arr[strlen(arr)] = '3';
	  break;
	case 4 :
	  arr[strlen(arr)] = '4';
	  break;
	case 5 :
	  arr[strlen(arr)] = '5';
	  break;
	case 6 :
	  arr[strlen(arr)] = '6';
	  break;
	case 7 :
	  arr[strlen(arr)] = '7';
	  break;
	case 8 :
	  arr[strlen(arr)] = '8';
	  break;
	case 9 :
	  arr[strlen(arr)] = '9';
	  break;
	case 10 :
	  arr[strlen(arr)] = 'A';
	  break;
	case 11 :
	  arr[strlen(arr)] = 'B';
	  break;
	case 12 :
	  arr[strlen(arr)] = 'C';
	  break;
	case 13 :
	  arr[strlen(arr)] = 'D';
	  break;
	case 14 :
	  arr[strlen(arr)] = 'E';
	  break;
	case 15 :
	  arr[strlen(arr)] = 'F';
	  break;
	default :
	  break;
        }
    }
}
