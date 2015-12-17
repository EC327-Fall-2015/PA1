#include <iostream>
#include <cmath>

using namespace std;

int main()
{
     cout <<"Enter the dimensions of the triangle:"<<endl;
     cout<<"Side-1: ";
     int side1;
     cin>>side1;
     cout<<"Side-2: ";
     int side2;
     cin>>side2;
     cout<<"Side-3: ";
     int side3;
     cin>>side3;
     int max; 
     int area;
     int perimeter;
     int midde;
     int last;
     if ((side1 >= (side2+side3))||(side2 >= (side1+side3))|| (side3 >=(side1+side2))||(side1 + side2 +side3 <=2))
	 {
	   cout<<"Dimensions "<< side1 << ", " << side2 <<"' "<<side3 << "do not make a triangle"<<endl;
		}
       else 
	 {
	   
	   if ((side1 > side2)&& (side1 > side3))
	     {
	       max = side1;
		 if (side2 > side3)
		   {
		     int midde = side2;
		     int last = side3;
		   }
		 else
		   {
		     midde = side3;
		     last = side2;
		       } 
	     }
	     else if ((side2 > side1)&& (side2 > side3))
	     {
	       max = side2;
	       if (side1 > side3)
		   {
		     int midde = side1;
		     int last = side3;
		   }
		 else
		   {
		     midde = side3;
		     last = side1;
		       }
		 }  
	  else  if  ((side3 > side2)&& (side3 > side1))
	     {
	       max = side3;
		 if (side2 > side1)
		   {
		     int midde = side2;
		     int last = side1;
		   }
		 else
		   {
		     midde = side1;
		     last = side2;
		       }
		 }
	 }
     int part1 = (side1 + side2 + side3)*.5;
     int part2 = part1 * (part1 - max)*(part1 - midde)* (part1 - last);
     area = sqrt(part2);
     perimeter = side1 + side2 + side3; 
     cout <<"This triangle's area is "<< area <<" square units and its perimeter is "<<perimeter << " units"<<endl;
   return 0;
}

	 
