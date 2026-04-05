/*
1.10 Unit Converter (temp, currency, volume, mass and more)

Converts various units between one another. The user enters the type of unit being entered, the type of unit they want to convert to and then the value. The program will then make the conversion.
*/

#include <iostream>

int main() {
    std::cout << "Fahrenheit to Celsius or Cerlsius to Fahrenheit? (1 or 2)";
    int n;
    double m;
    std::cin >> n;
    std::cout << "Enter the temperature: ";
    std::cin >> m;

    if (n == 1) {
        double c = (m - 32) * (5.0 / 9.0);
        std::cout << m << " in celsius is " << c << ".";
    } else {
        double f = (m * (9.0 / 5.0)) + 32;
        std::cout << m << " in fahrenheit is " << f << ".";
    }

    return 0;
}
