#include <iostream>
#include "math.h"
#include <iomanip>
using namespace std;


int checktriangle(double side1, double side2, double side3){
               double sumside1;
               double sumside2;
               double sumside3;
               int returnval=1;
               sumside1= side1+ side2;
               if (sumside1 <= side3){ //If side3 is greater than the sum
                              returnval=0;
               }
               sumside2= side2 + side3;
               if (sumside2 <= side1){ //If side1 is greater than the sum
                              returnval=0;
               }
               sumside3= side1 + side3;
               if (sumside3 <= side2){ //If side2 is greater than the sum
                              returnval=0;
               }
               return returnval;
               /*0 is returned if the dimensions do not form a triangle.
               1 is returned if the dimensions form a triangle.*/
}

 

double triarea( double a, double b, double c){
               double A;
               double s= (a+b+c)/2;
               double X= s*(s-a)*(s-b)*(s-c);
               A = sqrt(X);
              return A; //This function calculates the area of the triangle
}

 

int main(){
               double side1;
               double side2;
               double side3;
               cout << "Enter the dimensions of the triangle:" << endl;
               cout << "Side-1: ";
               cin >> side1 ;
               cout << "Side-2: ";
               cin >> side2;
               cout << "Side-3: ";
               cin >> side3;
               int tri = checktriangle (side1, side2, side3); //Check if the 3 sides form a triangle.
               if (tri == 0){ //If it is not a triangle
                              cout << "Dimensions "<< side1<< ", "<< side2<< ", "<<side3<< " do not form a triangle."<< endl;}
               else if (tri == 1){ //If it is a triangle
                              double area= triarea( side1, side2, side3); //Calculate area
                              double perimeter= side1 + side2 + side3; //Calculate perimeter
                              cout << "This triangle's area is " << fixed<< setprecision(3)<< area << " square-units and its perimeter is " <<fixed<< setprecision(3)<< perimeter << " units.\n" << endl;}
	       return 0;
}
