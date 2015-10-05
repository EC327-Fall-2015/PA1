#include <iostream>
using namespace std;

int main()
{
  cout << "Enter two positive integers:" << endl;
  int n1,n2;
  cin >> n1 >> n2;
  int cnt = 0;
  int rmd1,rmd2;
  int m1 = n1;
  int m2 = n2;
  while ((n1 != 0)||(n2 != 0))
    //divide the input integers by 16 each time
    //until the quotients are both less than 16
	{
	 rmd1 = n1 % 16;
	 rmd2 = n2 % 16;
	 if (rmd1 != rmd2)
	   //compare the remainder for each division
	   //if they are not the same, increase the hamming distance by 1 
	  {
	   cnt = cnt + 1;
	  }
	 n1 = n1 / 16;
	 n2 = n2 / 16;
	}
  cout << "Hamming distance between " << m1 << " and " << m2 
       << " when numbers are in hex format is: " << cnt << endl;
  return 0;
}
