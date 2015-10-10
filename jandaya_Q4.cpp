#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{

    double a, b, c, s, check;

    cout << "Enter the dimensions of the triangle:" <<endl;

    cout << "Side-1: ";
    cin >> a;

    cout << "Side-2: ";
    cin >> b;

    cout <<"Side-3: ";
    cin >> c;

    s = (a + b + c) / 2;
    check = (s * (s - a) * (s - b) * (s - c));

    if (check <= 0)
        cout << "Dimensions " << a <<", " << b <<", " << c <<" do not form a triangle.";
    else
    {
        cout << "This triangle's area is " << fixed << setprecision(2) << sqrt(check);
        cout << " square-units and its perimeter is " << a + b + c << " units.";
    }
}
