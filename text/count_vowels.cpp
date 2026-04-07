/*
2.3 Count Vowels

Enter a string and the program counts the number of vowels in the text. For added complexity have it report a sum of each vowel found.
*/

#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<char, int> vowel_count;
    int total = 0;

    vowel_count['a'] = 0;
    vowel_count['e'] = 0;
    vowel_count['i'] = 0;
    vowel_count['o'] = 0;
    vowel_count['u'] = 0;

    std::cout << "Please enter a string: ";
    std::string s;
    std::cin >> s;

    for (char &c : s) {
        if (!vowel_count.count(c)) continue;
        vowel_count[c]++;
        total++;
    }

    std::cout << "There are " << total << " vowels: " << "\n";
    std::cout << vowel_count['a'] << " a's," << "\n";
    std::cout << vowel_count['e'] << " e's," << "\n";
    std::cout << vowel_count['i'] << " i's," << "\n";
    std::cout << vowel_count['o'] << " o's, and" << "\n";
    std::cout << vowel_count['u'] << " u's.";

    return 0;
}
