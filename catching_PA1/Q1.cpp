#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    cout << "Enter the dimensions of the triangle:" << endl;
    cout << "Side-1: ";
    double s1;
    cin >> s1;
    cout << "Side-2: ";
    double s2;
    cin >> s2;
    cout << "Side-3: ";
    double s3;	
    cin >> s3;
    double p;
    p = s1+s2+s3;
    double s = p/2;
    //get the length of three sides and calculate perimeter and half perimeter
    
    if ((s1+s2 <= s3)||(s1+s3 <= s2)||(s2+s3 <= s1))
       {cout << "Dimensions " << s1 <<", "<< s2 <<", " << s3 <<" do not form a triangle." << endl;
       }
       // check if the three sides are valid inputs
    else
        {
	  float area;
	  area = sqrt((s-s1)*(s-s2)*(s-s3)*s);
	  if (area - (int)area > 0)
	    {
	      std::cout.precision(2);
	      cout << "This triangle's area is " << fixed << area;
	    }
	  else 
	    {
	      cout << "This triangle's area is " << area;
	    }
	//if area is interger, no decimal will be displayed.
	//if area has decimal, only two decimal will be displayed. 
	  cout.unsetf(std::ios::floatfield);
	  std::cout.precision(10);
	//reset precision and use default to print perimeter.
	  cout << " square-units, and its perimeter is " << p << " units." << endl;
        }
return 0;
}
