/*
2.4 Check if Palindrome

Checks if the string entered by the user is a palindrome. That is that it reads the same forwards as backwards like racecar
*/

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s;
    std::cout << "Please enter a string: ";
    std::cin >> s;
    std::string temp = s;
    std::reverse(s.begin(), s.end());

    if (s == temp) {
        std::cout << "The string is a palindrome.";
    } else {
        std::cout << "The string is not a palindrome.";
    }

    return 0;
}
