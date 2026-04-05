/*
1.9 Calculator

A simple calculator to do basic operators. Make it a scientific calculator foradded complexity
*/

#include <iostream>
#include <algorithm>
#include <set>

double add(double n, double m) {
    return n+m;
}

double subtract(double n, double m) {
    return n-m;
}

double multiply (double n, double m) {
    return n*m;
}

double divide (double n, double m) {
    return n/m;
}

int main() {
    std::cout << "What operation would you like?" << "\n";
    std::cout << "1 for add, 2 for subtract, 3 for multiply, 4 for divide" << "\n";

    int choice;
    std::cin >> choice;
    std::set<int> x = {1, 2, 3, 4};

    while (!x.count(choice)) {
        std::cout << "Invalid input. Please try again: ";
        std::cin >> choice;
    }

    if (choice == 1) {
        int n, m;
        std::cout << "Please enter what you would like to add: ";
        std::cin >> n >> m;
        std::cout << add(n, m);
    } else if (choice == 2) {
        int n, m;
        std::cout << "Please enter what you would like to subtract: ";
        std::cin >> n >> m;
        std::cout << subtract(n, m);
    } else if (choice == 3) {
        int n, m;
        std::cout << "Please enter what you would like to multiply: ";
        std::cin >> n >> m;
        std::cout << multiply(n, m);
    } else if (choice == 4) {
        int n, m;
        std::cout << "Please enter what you would like to divide: ";
        std::cin >> n >> m;
        std::cout << divide(n, m);
    }

    return 0;
}
