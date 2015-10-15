/*
ssshahin_PA1
Q1
Perimeter and area of triangles
*/

#include <iostream>	//included for output input stream
#include <limits>
//#include <cstdlib>	//included for system("PAUSE")
#include <math.h>	//included for square root
using namespace std;

bool isTriangle(double a, double b, double c);
double triangleArea(double a, double b, double c);
double trianglePerimeter(double a, double b, double c);
double twoDecimals(double num);

//error checking for inputs
double validInputOnly();


//takes in three numbers for triangle side lengths
//outputs the area and perimeter of triangle, unless triangle impossible

int main(){
	//declaring variables
	double side1, side2, side3;

	//ask for user input
	cout<<"Enter the dimensions of the triangle:"<<endl;
	cout<<"Side-1: ";
	side1 = validInputOnly();
	
	cout<<"Side-2: ";
	side2 = validInputOnly();
	
	cout<<"Side-3: ";
	side3 = validInputOnly();

	if( ! isTriangle(side1, side2, side3)){
		//for case where triangle is NOT possible to make
		//such as case where short sides don't add up to more than large side
		//or at least one side is negative
		cout<<"Dimensions "<<side1<<", "<<side2<<", "<<side3<<" do not form a triangle."<<endl;

	}else{
		//for case where triangle IS possible
		//for the following, rounds each result to three decimals
		double area = twoDecimals( triangleArea(side1, side2, side3) );
		double perimeter = twoDecimals( trianglePerimeter(side1, side2, side3) );

		cout<<"This triangle's area is "<<area<<" square-units and it's perimeter is "<<perimeter<<" units."<<endl;

	}
	//system("PAUSE");
	return 0;
}

//function for checking if triangle is possible
bool isTriangle(double a, double b, double c){
	//boolean possible is set to true if all sides are positive, false otherwise
	bool possible = (a > 0 && b > 0 && c > 0);

	//if the two shorter sides don't add to be greater than the larger side, triangle isn't possible, otherwise true

	if (a >= b && a >= c){
		if ( b + c <= a ){
			possible = false;
		}
	}else if (b >= a && b >= c){
		if ( a + c <= b ){
			possible = false;
		}
	}else{
		if ( a + b <= c){
			possible = false;
		}
	}


	return possible;
}

//function for finding triangle area
double triangleArea(double a, double b, double c){
	double area, avglength;

	//using Heron's formula, finding area
	avglength = (a + b + c)/2;

	area = sqrt(avglength * (avglength - a) * (avglength - b) * (avglength - c));

	return area;
}

//function for finding triangle perimeter
double trianglePerimeter(double a, double b, double c){
	double perimeter;

	//perimeter is the sum of the side lengths

	perimeter = a + b + c;

	return perimeter;
}

//function for reducing a decimal to two decimal places, rounded to nearest hundredth.
double twoDecimals(double num){
	int hundred_fold, thousand_fold;
	double decimal;
	//holds double times 1,000 cast as an int, preserving some decimals 
	thousand_fold = (int) 1000 * num;

	//holds double times 100 cast as int
	hundred_fold = (thousand_fold / 10);

	//rounding to nearest hundredth
	int rounding = thousand_fold % 10;
	if (rounding >= 5){
		//adds one if thousandth place is 5 or greater
		hundred_fold += 1;
	}

	decimal = ((double) hundred_fold )/ 100.0;

	return decimal;

}

//repeat input until only positive number input
double validInputOnly(){
	double input;

	cin>>input;

	do{
		if(cin.fail()){
			cin.clear();
			//cin.ignore is for when you type random gibberish when I want only doubles
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout<<"Please input a positive real number for side length: ";

			cin>>input;

		}else if(input <= 0){
			cout<<"Please input a positive real number for side length: ";

			cin>>input;

		}
		

	} while(cin.fail() || input <= 0);

	return input;
}