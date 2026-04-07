# Small-Projects
Small projects - a collection of small-based projects that will show functions of algorithms and simple lines of code.

## Credits:

Inspired by [Martyr2’s Mega Project List](https://misc.krzaq.cc/static/programmingTasks.pdf)
Inspired by [Karan Goel's Mega Project List](https://github.com/karan/Projects)
Inspired by [Rosetta Code](https://rosettacode.org/wiki/Category:Programming_Tasks)

Many projects that I have made are found online and are very common

## Projects
Below are in-progress and finished projects.

### 1. Numbers

#### 1.1 [Find PI to the Nth Digit](https://github.com/nix-life/Small-Projects/blob/main/numbers/pi.java)
Enter a number and have the program generate PI up to that many decimal
places. Keep a limit to how far the program will go.

#### 1.2 [Fibonacci Sequence](https://github.com/nix-life/Small-Projects/blob/main/numbers/fibonacci.java)
Enter a number and have the program generate the Fibonacci sequence to that
number or to the Nth number.

#### 1.3 [Prime Factorization](https://github.com/nix-life/Small-Projects/blob/main/numbers/prime_factorization.java)
Have the user enter a number and find all Prime Factors (if there are any) and
display them.

#### 1.4 [Next Prime Number](https://github.com/nix-life/Small-Projects/blob/main/numbers/next_prime_number.cpp)
Have the program find prime numbers until the user chooses to stop the asking
for the next one.

#### 1.5 [Find Cost of Tile to Cover W x H Floor](https://github.com/nix-life/Small-Projects/blob/main/numbers/floor_tile_cost.cpp)
Calculate the total cost of tile it would take to cover a floor plan of width and
height, using a cost entered by the user.

#### 1.6 [Mortgage Calculator](https://github.com/nix-life/Small-Projects/blob/main/numbers/mortgage_calculator.cpp)
Calculate the monthly payments of a fixed term mortgage over given Nth terms
at a given interest rate. Also figure out how long it will take the user to pay
back the loan.

#### 1.7 [Change Return Program](https://github.com/nix-life/Small-Projects/blob/main/numbers/change_return.cpp)
The user enters a cost and then the amount of money given. The program will
figure out the change and the number of quarters, dimes, nickels, pennies needed
for the change.

#### 1.8 [Binary to Decimal and Back Converter](https://github.com/nix-life/Small-Projects/blob/main/numbers/binary_decimal_converter.cpp)
Converter to convert a decimal number to binary or a binary number to its
decimal equivalent.

#### 1.9 [Calculator](https://github.com/nix-life/Small-Projects/blob/main/numbers/calculator.cpp)
A simple calculator to do basic operators. Make it a scientific calculator for
added complexity

Note: Currently only basic operations, scientific calculator can be implemented later

#### 1.10 [Unit Converter (temp, currency, volume, mass and more)](https://github.com/nix-life/Small-Projects/blob/main/numbers/unit_converter_temperature.cpp)
Converts various units between one another. The user enters the type of unit
being entered, the type of unit they want to convert to and then the value. The
program will then make the conversion.

Note: This version is temperature; possible further improvements could include choosing unit conversion

#### 1.11 [Alarm Clock](https://github.com/nix-life/Small-Projects/blob/main/numbers/alarm.cpp)
A simple clock where it plays a sound after X number of minutes/seconds or at
a particular time.

#### 1.12 [Distance Between Two Cities](https://github.com/nix-life/Small-Projects/blob/main/numbers/city_distance.cpp)
Calculates the distance between two cities and allows the user to specify a unit
of distance. This program may require finding coordinates of the cities like latitude and longitude.

Notes: Unit of distance not implemented, coordinates found are based on csv file in data; Credit to bahar for the [data](https://github.com/bahar/WorldCityLocations/tree/master)

#### 1.13 [Credit Card Validator](https://github.com/nix-life/Small-Projects/blob/main/numbers/credit_card_validator.cpp)
Takes in a credit card number of a common credit card vendor (Visa, MasterCard, American Express, Discoverer) and validates it to make sure that it is a
valid number (look into how credit cards use a checksum). Utilizes luhn's algorithm to find a valid combination.

#### 1.14 [Tax Calculator](https://github.com/nix-life/Small-Projects/blob/main/numbers/tax_calculator.cpp)
Asks the user to enter a cost and either a country or state tax. It then returns
the tax plus the total cost with tax.

Note: Improvement could include choice of tax expanded to country and/or state/province.

#### 1.15 [Dijkstras Algorithm](https://github.com/nix-life/Small-Projects/blob/main/numbers/dijkstra.cpp)
Create a program that finds the shortest path through a graph using its edges.

### 2. Text

#### 2.1 [Reverse a String](https://github.com/nix-life/Small-Projects/blob/main/text/reverse_string.cpp)
Enter a string and the program will reverse it and print it out.

#### 2.2 [Pig Latin](https://github.com/nix-life/Small-Projects/blob/main/text/piglatin.cpp)
Pig Latin is a game of alterations played on the English language game. To
form the Pig Latin form of an English word the initial consonant sound is transposed to the end of the word and an ay is affixed (Ex.: ”banana” would yield
anana-bay). Read Wikipedia for more information on rules.

#### 2.3 [Count Vowels](https://github.com/nix-life/Small-Projects/blob/main/text/count_vowels.cpp)
Enter a string and the program counts the number of vowels in the text. For
added complexity have it report a sum of each vowel found.

#### 2.4 [Check if Palindrome]() *WIP*
Checks if the string entered by the user is a palindrome. That is that it reads
the same forwards as backwards like racecar

#### 2.5 [Count Words in a String]() *WIP*
Counts the number of individual words in a string. For added complexity read
these strings in from a text file and generate a summary.

Note: Added complexity not yet implemented

#### 2.6 [Text Editor]() *WIP*
Notepad style application that can open, edit, and save text documents. Add
syntax highlighting and other features.

#### 2.7 [RSS Feed Creator]() *WIP*
A program which can read in text from other sources and put it in RSS or Atom
news format for syndication.

#### 2.8 [Post it Notes Program]() *WIP*
A program where you can add text reminders and post them. You can have the
program also add popup reminders.
