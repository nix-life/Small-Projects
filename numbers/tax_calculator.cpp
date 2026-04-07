/*
1.14 Tax Calculator

Asks the user to enter a cost and either a country or state tax. It then returns the tax plus the total cost with tax.

Note: This is Canadian federal tax (5%) or Ontario HST (13%).
*/

#include <iostream>
#include <iomanip>

int main() {
    double cost;
    int tax_type;
    std::cout << "Please enter a cost: " << "\n";
    std::cin >> cost;
    std::cout << "Please enter the tax type (1 for federal, 2 for provincial): ";
    std::cin >> tax_type;

    if (tax_type == 1) {
        double tax_amount = cost * 0.05;
        std::cout << "The tax amount is $" << std::fixed << std::setprecision(2) << tax_amount << " and the total cost is $" << cost+tax_amount << ".";
    } else if (tax_type == 2) {
        double tax_amount = cost * 0.13;
        std::cout << "The tax amount is $" << std::fixed << std::setprecision(2)  << tax_amount << " and the total cost is $" << cost+tax_amount << ".";
    } else {
        std::cout << "Invalid choice.";
    }

    return 0;
}
