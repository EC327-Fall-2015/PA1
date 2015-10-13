#include <iostream>
#include <cmath> //sqrt function is need
using namespace std;

int main()
{
    //obtain and store triangle dimensions
    double s1, s2, s3;
    cout << "Enter the dimensions of the triangle:" << endl;
    cout << "Side-1: ";
    cin >> s1;
    cout << "Side-2: ";
    cin >> s2;
    cout << "Side-3: ";
    cin >> s3;

    //make sure dimensions make a triangle
    if (s1+s2>=s3 && s2+s3>=s1 && s1+s3>=s2)
    {
        double area, semi, perim;
        semi = 0.5*(s1+s2+s3); //calculating semiperimeter
        area = sqrt(semi*(semi-s1)*(semi-s2)*(semi-s3)); //heron's formula is used to find area
        perim = s1+s2+s3; //calculate perimeter

        cout << "This triangle's area is " << area << " square-units, and its perimeter is " << perim << " units. " << endl;
    }

    //if dimensions do not work, print following statement
    else
    {
        cout << "Dimensions " << s1 << ", " << s2 << ", " << s3 << " do not form a triangle." << endl;
    }

    return 0;
}
