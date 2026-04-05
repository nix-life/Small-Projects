/*
1.8 Binary to Decimal and Back Converter

Converter to convert a decimal number to binary or a binary number to itsdecimal equivalent.
*/
#include <iostream>
#include <bitset>
#include <string>

int main() {
    std::cout << "Would you like to convert from decimal to binary or binary to decimal? (1 for decimal to binary, 2 for binary to decimal)";

    int choice;
    std::cin >> choice;
    while (choice != 1 && choice != 2) {
        std::cout << "Please enter 1 or 2 as an option.";
        std::cin >> choice;
    }

    if (choice == 1) {
        double decimal;
        std::cout << "Please enter the decimal number: ";
        std::cin >> decimal;

        unsigned long long wholeNumber = static_cast<unsigned long long>(decimal);
        std::cout << std::bitset<64>(wholeNumber) << std::endl;
    } else {
        std::string binary;
        std::cout << "Please enter the binary number: ";
        std::cin >> binary;
        
        int decimalValue = std::stoi(binary, nullptr, 2);
        std::cout << decimalValue;
    }

    return 0;
}
