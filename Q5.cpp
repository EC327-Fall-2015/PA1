#include <iostream>
#include <cstdlib>
#include <ctime>
#define MAXNUM 300;

int main() {
    int oldguess, newguess, target;
    std::srand(std::time(0));
    target = std::rand() % MAXNUM;
    std::cout << "Enter your first guess: ";
    std::cin >> newguess;
    while(true) {
        if (newguess == target) {
            std::cout << "Correct! The number was " << target << std::endl;
            return 0;
        }
        oldguess = newguess;
        std::cout << "Enter your next guess: ";
        std::cin >> newguess;
        if (abs(newguess - target) > abs(oldguess - target)) {
            std::cout << "Colder" << std::endl;
        }else if (abs(newguess - target) < abs(oldguess - target)) {
            std::cout << "Warmer" << std::endl;
        }else if (abs(newguess - target) == abs(oldguess - target)) {
            std::cout << "No change" << std::endl;
        }
    }
}