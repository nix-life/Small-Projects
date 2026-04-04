/*
1.6 Mortgage Calculator

Calculate the monthly payments of a fixed term mortgage over given Nth terms at a given interest rate. Also figure out how long it will take the user to pay back the loan.
*/

#include <iostream>
#include <cmath>

int main() {
    double loanAmount, annualInterestRate;
    int terms;

    std::cout << "Enter the loan amount: " << "\n";
    std::cin >> loanAmount;
    std::cout << "Enter the interest rate: " << "\n";
    std::cin >> annualInterestRate;
    std::cout << "Enter the number of loan terms (in years): " << "\n";
    std::cin >> terms;

    double rate = annualInterestRate / 100.0;
    int totalMonths = terms * 12;
    double monthlyRate = rate / 12.0;

    double amount_owed_simple = loanAmount * (1 + (rate * terms));
    double amount_owed_compound = loanAmount * std::pow(1 + rate, terms);
    double monthly_amount;

    if (monthlyRate == 0) {
        monthly_amount = loanAmount / totalMonths;
    } else {
        monthly_amount = loanAmount * (monthlyRate * std::pow(1 + monthlyRate, totalMonths)) /
            (std::pow(1 + monthlyRate, totalMonths) - 1);
    }

    std::cout << "You will have to pay $" << amount_owed_simple << " if we are calculating in simple interest." << "\n";
    std::cout << "You will have to pay $" << amount_owed_compound << " if we are calculating in compound interest." << "\n";
    std::cout << "You will have to pay $" << monthly_amount << " to pay the loan back.";

    return 0;
}
