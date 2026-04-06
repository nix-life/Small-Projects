
/*
2.1 Reverse a String

Enter a string and the program will reverse it and print it out.
*/

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::cout << "Please enter a string: ";
    std::string s;
    std::cin >> s;

    std::reverse(s.begin(), s.end());
    std::cout << "The reversed string is " << s << ".";

    return 0;
}
