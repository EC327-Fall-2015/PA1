#include <iostream>

int main() {
    char a, c;
    int b;
    std::cout << "Enter character: ";
    std::cin >> a;
    std::cout << "Offset: ";
    std::cin >> b;
    c = a + b;
    if (b == 0) {
        if ('a' <= c and c <= 'z') {
            c += 'A'-'a';
        }else if ('A' <= c and c <= 'Z') {
            c -= 'A' - 'a';
        }
    }
    std::cout << "New Character: " << c << std::endl;
}