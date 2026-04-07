/*
1.13 Credit Card Validator

Takes in a credit card number of a common credit card vendor (Visa, MasterCard, American Express, Discoverer) and validates it to make sure that it is a valid number (look into how credit cards use a checksum).
*/

#include <iostream>
#include <string>
#include <algorithm>

bool is_a_number(const std::string& s) {
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

bool luhn_algorithm(const std::string& s) {
    int total = 0;

    for (int i = 0; i < s.length(); i++) {
        int temp = s[i] - '0';
        if (i % 2 == 0) {
            temp *= 2;
            if (std::to_string(temp).length() == 2) {
                std::string temp2 = std::to_string(temp);
                int digit_one = temp2[0] - '0';
                int digit_two = temp2[1] - '0';
                temp = digit_one + digit_two;
            }
        }
        total+=temp;
    }

    if (total % 10 == 0) {
        return true;
    }

    return false;
}

int main() {
    std::cout << "Please enter a credit card number: ";
    std::string s;
    std::cin >> s;

    if (s.length() != 16) {
        std::cout << "The credit card does not exist - invalid length.";
        return 1;
    } else if (!is_a_number(s)) {
        std::cout << "The credit card does not exist - not fully a number.";
        return 1;
    } else {
        if (luhn_algorithm(s)) {
            std::cout << "The credit card is valid.";
        } else {
            std::cout << "The credit card is not valid.";
        }
    }

    return 0;
}
