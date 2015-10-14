


#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;




void check_sides(double sides[], int num_sides, double sum)
	{
		double area;
		
		double s = sum/2;
		
		area =(s * (s-sides[0])*(s-sides[1])*(s-sides[2]));
		
		if (area <= 0)
		{      


		  cout << "Dimensions " << sides[0]<< ", " << sides[1] << ", "<< sides[2];
			
		  cout << " do not form a triangle.";
		}
		
		else 
		{
			area = sqrt(area);
			
			std::cout << std::fixed << std::setprecision(3) << "This triangles area is " << area <<" square units, ";
			
			std::cout << std::fixed << std::setprecision(3) << "and its permiter is " << sum << " units.";
		}

		return;
	}

int main()
{
// Read sides into a data array, and finds sum of sides for Heron's formula
	
        

	int num_sides = 3;

	double sides[3];
	
	double sum;
	
	cout << "Enter the dimensions of the triangle." << endl;

	int i;
	
	for(i = 0; i< 3; i++)
	{	
	        cout << "Side-" << i+1 << ": ";
		
		cin >> sides[i];
		
		sum += sides[i];
	}
	



	  check_sides(sides, num_sides, sum);
	
	  return 0;
}











