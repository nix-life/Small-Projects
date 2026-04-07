/*
2.2 Pig Latin

Pig Latin is a game of alterations played on the English language game. To form the Pig Latin form of an English word the initial consonant sound is transposed to the end of the word and an ay is affixed (Ex.: ”banana” would yield anana-bay). Read Wikipedia for more information on rules.
*/

#include <iostream>
#include <string>

int main() {
    std::cout << "Please enter a string: ";
    std::string s;
    std::cin >> s;

    char x = s[0];
    s = s.substr(1, s.length()-1) + x + "ay";
    std::cout << s;

    return 0;
}pi
