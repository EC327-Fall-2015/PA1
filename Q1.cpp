#include <iostream>
#include <cmath>
using namespace std;


int main()
{

  //Prompt the user to enter dimensions

cout << "Enter the dimensions of the triangle: " << endl;
  
cout << "Side-1: ";
  double side1;
cin >> side1;

cout<< "Side-2: ";
  double side2;
cin >> side2; 

cout<< "Side-3: ";
  double side3;
cin >> side3;

//Check to make sure the three sides make a triangle
//If so calculate area and perimeter
//If not, tell user they are incorrect and exit program

 if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
   {  
       double x;
       double area;
       double perimeter;
       double height;
       x= (side1 + side2 + side3)/2;
       area = sqrt(x*(x-side1)*(x-side2)*(x-side3));
       perimeter = side1 + side2 + side3;
       cout << "This triangle's area is " << area << " square-units and its perimeter is "<< perimeter << " units." << endl;
   } 
 else 
   cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 << " do not form a triangle." << endl;

 return 0;

}

 

