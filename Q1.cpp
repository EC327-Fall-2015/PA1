#include <iostream>
#include <math.h>
using namespace std; 

	void triangle(double Side1, double Side2, double Side3)
	{
		int counter = 0;
		double sum = Side1 + Side2;
		if (sum > Side3)
		{
			counter += 1;
		}
		double sum1 = Side2 + Side3;
		if (sum1 > Side1)
		{
			counter += 1;
		}
		double sum2 = Side1 + Side3;
		if (sum2 > Side2)
		{
			counter += 1;

		}
		if (counter == 3)
		{
			double perimeter = Side1 + Side2 + Side3;
			double s = perimeter/2;
			double Area = sqrt(s*(s-Side1)*(s-Side2)*(s-Side3));
			cout<< "This triangle’s area is"<< " "<< Area << " square units, "; 
			cout<< "and its perimeter is"<< " " << perimeter << " units." <<endl;
		}
		else
		{
			cout << "Dimensions " << Side1 << ", " <<Side2<< ", " << Side3 << " " << "do not form a triangle." << endl;
		}
	}

	int main()
	{	
		double Side1;
		double Side2;
		double Side3;
		cout<< "Enter the dimensions of the triangle:" << endl;
		cout<< "Side1:";
		cin >> Side1;
		cout<< "Side2:";
		cin >> Side2;
		cout<< "Side3:";
		cin >> Side3;

		triangle(Side1, Side2, Side3);

		return 0;
	}

	
	


