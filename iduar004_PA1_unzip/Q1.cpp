#include <iostream>
#include <math.h>

using namespace std;

int main()
{
//initiates sides of triangle
double s1;
double s2; 
double s3;

//input sides and store in values
cout << "Side-1: ";
cin >> s1;
cout << "Side-2: ";
cin >> s2;
cout << "Side-3: ";
cin >> s3;

/* Determines if sides slected for triangle will in fact create a triangle
If it DOES fit paramenters it will go through if statement, calculate area & perimeter, and finally output values. 
If the inserted values are out of bounds it will go to else statements, and error will appear. */
 if (s1 + s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2)
{
  //initialize perimeter and area
  double perimeter;
  double area;

  perimeter = s1 + s2 + s3; // calculate perimeter

  double p; // initializes p which is half of perimeter. This is the variable desired in the necessary calculations
  p = perimeter/2;

  area = sqrt(p*(p-s1)*(p-s2)*(p-s3)) ; //calculate area

  //output 
 cout << "The triangles area is " << area << " square-units and its perimeter is " << perimeter << endl;

}
 else //else statement that will be called if user puts in side vaalues that are out of bound. Gives output notifying user
   {
     cout << "Dimensions " << s1 << ", " << s2 << ", " << s3 << " do not form a triangle." << endl;
   } 

 return 0;

}

