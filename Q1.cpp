#include <iostream>
#include <math.h>
using namespace std;

float area(int a,int b,int c) {
    //heron's formula: A = sqrt(s(s-a)(s-b)(s-c))
    //where s = (1/2)(a+b+c) and a, b, and c are
    //the lengths of the triangle's sides
    
    float s = (a+b+c) / 2;
    float area_result = sqrt(s*(s-a)*(s-b)*(s-c));
    return area_result;
}

int main () {
    //initialize side vars
    int side_1;
    int side_2;
    int side_3;

    //user inputs side lengths
    cout << "Enter the dimensions of the triangle:" << endl;
    cout << "Side-1: ";
            cin >> side_1;
    cout << "Side-2: ";
            cin >> side_2;
    cout << "Side-3: ";
            cin >> side_3;

    //check if valid triangle, calc answers, output results
    if ((side_1 < (side_2 + side_3)) && 
        (side_2 < (side_1 + side_3)) && 
        (side_3 < (side_1 + side_2))) {
        
        float A = area(side_1,side_2,side_3);
        int P = side_1 + side_2 + side_3;

        cout << "The triangle's area is " << A << " sqare-units ";
        cout << "and its perimeter is " << P << " units." << endl;

    } else {
        cout << "Dimensions ";
        cout << side_1 << ", ";
        cout << side_2 << ", ";
        cout << side_3 << " do not form a triangle." << endl;
    }

    //return value for main()
    return 0;
}
