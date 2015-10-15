#include <iostream>
#include <math.h>

int main() {
    std::cout << "Enter two positive integers: " << std::endl;
    int a,b,ao, bo;
    std::cin >> a;
    std::cin >> b;
    ao = a;
    bo = b;
    int distance = 0;
    for (int i=0; i<8; i++) {
        int tst = 1 << 4*i; //std::cout << "foo" is a hack / really dumb overload. << is bitwise shift left!
        int moda = a % tst;
        int modb = b % tst;
        if (moda != modb) {
            distance++;
        }
        a -= moda;
        b -= modb;
    }
    std::cout << "Hamming distance between "<<ao<<" and "<<bo<<" when numbers are in hex format is "<<distance<<"."  << std::endl;
    return 0;
}
