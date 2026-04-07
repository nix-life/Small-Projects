/*
2.5 Count Words in a String

Counts the number of individual words in a string. For added complexity read these strings in from a text file and generate a summary.
*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::vector<std::string> split_sentence(std::string sentence) {
    std::stringstream ss(sentence);

    std::string word;

    std::vector<std::string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    return words;
}

int main() {
    std::string s;
    std::cout << "Please enter a string: ";
    std::getline(std::cin, s);
    std::vector<std::string> words = split_sentence(s);

    std::cout << "There are " << words.size() << " words.";

    return 0;
}
