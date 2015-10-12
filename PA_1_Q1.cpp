#include <iostream>
#include <math.h>
using namespace std;

int main()
{
        // Prompt user for triangle sides
        // Use doubles in the case of decimals
        double side1;
        cout << "Input side 1 of your triangle:   "<<endl;
        cin >> side1;
	cout << endl;

        double side2;
        cout << "Input side 2 of your triangle:   "<<endl;
        cin >> side2;
	cout << endl;

        double side3;
        cout <<"Input side 3 of your triangle:    "<<endl;
        cin >>side3;
	cout << endl;
        //Now determine if the triangle actually exists

        if (side1 < (side2 + side3) && side2 < (side1 + side3) && side3 < (side1 + side2)) // These are inqualities found on most math sites.

        {

        cout << "The triangle exists!" << endl;
	cout << endl;
	cout << endl;
                double perimeter;
                perimeter = side1 + side2 + side3;
		
                double semiperim; // We need this for Heron's formula.
                semiperim = perimeter / 2;

                double area;
                area = sqrt( semiperim * ((semiperim - side1)*(semiperim - side2) * (semiperim - side3))); // Perform Heron's formula.
                cout << "The area is " << area << " and the perimeter is " << perimeter << endl; // Output final answer.
       
	}
        
	else
                cout <<"The triangle doesn't exist!"<<endl;

return 0;

}
