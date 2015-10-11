#include <iostream>
#include <cmath> //square root

using namespace std;
int main()
{
//Insert the value of three sides
        double s1, s2, s3;
        cout << "Enter the dimensions of the triangle: ";
        cout << "Side-1: ";
        cin >> s1;

        cout << "Side-2: ";
        cin >> s2;

        cout << "Side-3: ";
        cin >> s3;

//Compare the three sides and determine if they can form a triangle or not
//Determine by setting up a sum variable of 2 sides and compare it to the third side
        double pmeter, tarea, halfpmeter;
        if (s1 + s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2)
	{
                pmeter = s1 + s2 + s3;  //the perimeter of the triangle
                halfpmeter = 1/2 * pmeter;  //half perimeter of the triangle
                float insqrt; // variable to calculate the value inside under the square-root 
                insqrt = halfpmeter * (halfpmeter - s1) * (halfpmeter - s2) * (halfpmeter - s3);
                tarea = sqrt(insqrt);  //returns the area of the triangle based on Heron's formula
                cout << "This triangle's area is " << tarea << " square-units, and its perimeter is " << pmeter << " units." << endl;
        }
        else
        {
                cout << "Dimensions " << s1 << ", " << s2 << ", " << s3 << " do not form a triangle." << endl;
        }
return 0;
}

