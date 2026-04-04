/*
1.4 Next Prime Number

Have the program find prime numbers until the user chooses to stop the asking for the next one.
*/

#include <iostream>

bool check_prime(int n) {
    if (n <= 1) {
        return false;
    }

    else if (n == 2) {
        return true;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    std::cout << "Please enter a number: ";
    std::cin >> n;

    while (true) {
        n++;
        while (!check_prime(n)) {
            n+=1;
        }

        std::cout << "The next prime number is " << n << ". Would you like to continue (y / n)?\n";
        char next;
        std::cin >> next;

        if (next == 'y') {
            continue;
        }
        break;
    }

    return 0;
}
