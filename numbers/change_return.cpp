/*
1.7 Change Return Program

The user enters a cost and then the amount of money given. The program will figure out the change and the number of quarters, dimes, nickels, pennies needed for the change.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double cost, given;

    std::cout << "Enter the cost: " << "\n";
    std::cin >> cost;

    std::cout << "Enter the amount given: " << "\n";
    std::cin >> given;

    if (given < cost) {
        std::cout << "Insufficient payment. You still owe $" << std::fixed << std::setprecision(2) << (cost - given) << ".";
        return 0;
    }

    int remainingCents = static_cast<int>(std::llround((given - cost) * 100.0));
    int coinCents = remainingCents % 100;

    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;

    quarters = coinCents / 25;
    coinCents %= 25;

    dimes = coinCents / 10;
    coinCents %= 10;

    nickels = coinCents / 5;
    coinCents %= 5;

    pennies = coinCents;

    std::cout << "You will be given back $" << std::fixed << std::setprecision(2) << (remainingCents / 100.0)
              << ", with " << quarters << " quarters, " << dimes << " dimes, " << nickels
              << " nickels, and " << pennies << " pennies.";
    
    return 0;
}
