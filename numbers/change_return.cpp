/*
1.7 Change Return Program

The user enters a cost and then the amount of money given. The program will figure out the change and the number of quarters, dimes, nickels, pennies needed for the change.
*/

#include <iostream>
#include <cmath>

int main() {
    double cost, given;

    std::cout << "Enter the cost: " << "\n";
    std::cin >> cost;

    std::cout << "Enter the amount given: " << "\n";
    std::cin >> given;

    double remaining = given - cost;
    double change = remaining - std::floor(remaining);

    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;

    while (change >= 0.25) {
        quarters++;
        change-=0.25;
    }

    while (change >= 0.1) {
        dimes++;
        change-=0.1;
    }

    while (change >= 0.05) {
        nickels++;
        change-=0.05;
    }

    while (change >= 0.01) {
        pennies++;
        change-=0.01;
    }

    std::cout << "You will be given back $" << remaining << ", with " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, and " << pennies << " pennies.";
    
    return 0;
}
