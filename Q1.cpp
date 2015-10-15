#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double side1;//initialize side 1
    double side2;//initialize side 2
    double side3;//initialize side 3
    cout<<"Enter the dimensions of the triangle:"<<endl;
    cout<<"Side-1:";
    cin>>side1;
    cout<<"Side-2:";
    cin>>side2;
    cout<<"Side-3:";
    cin>>side3;
    if (side1 >= side2 + side3 || side2 >= side1 + side3 || side3 >= side1 + side2)
    {
        cout<<"Dimensions "<<side1<<", "<<side2<<", "<<side3<<" do not form a triangle."<<endl;
    }
    else
    {
        double perimeter;
        double area;
        perimeter = side1+side2+side3;
        double semi = perimeter/2;
        area = sqrt(semi*(semi-side1)*(semi-side2)*(semi-side3));
        double area2 = area * 100;
        area2 = int(area2);
        area = area2 / 100;
        cout<<"The triangle's area is "<<area<<" square units and its perimeter is "<<perimeter<<" units."<<endl;
    }

    return 0;
}


