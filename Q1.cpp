#include <iostream>
#include <math.h>

void report(int, int, int);
void badDimen(int, int, int);
int perimeter(int, int, int);
double area(int, int, int);

int main() {
    int a=0,b=0,c=0;
    std::cout << "Enter the dimensions of the triangle" << std::endl;

    std::cout << "Side-1:";
    std::cin >> a;
    std::cout << "Side-2:";
    std::cin >> b;
    std::cout << "Side-3:";
    std::cin >> c;

    if (
        a+b > c &&
        b+c > a &&
        a+c > b
            ) {
        report(a,b,c);
    }else{
        badDimen(a,b,c);
    }
    return 0;
}

void report (int a, int b, int c) {
    std::cout << "This triangle's area is " << area(a,b,c) << " square-units and its perimeter is " << perimeter(a,b,c) << " units" << std::endl;
}

void badDimen(int a, int b, int c) {
    std::cout << "Dimensions " << a << ", " << b << ", " << c << " do not form a triangle." << std::endl;
}

int perimeter(int a, int b, int c) {
    return a+b+c;
}

double area(int a, int b, int c) {
    double s = (double)perimeter(a,b,c) / 2;
    double heron = s*(s-a)*(s-b)*(s-c);
    return sqrt(heron);
}