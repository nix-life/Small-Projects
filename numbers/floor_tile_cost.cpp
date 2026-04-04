/*
1.5 Find Cost of Tile to Cover W x H Floor

Calculate the total cost of tile it would take to cover a floor plan of width and
height, using a cost entered by the user.
*/

#include <iostream>

int main() {

    int w, h, c;
    std::cout << "What is the width, height cost of each tile?" << "\n";

    std::cin >> w >> h >> c;

    std::cout << "The total cost of the floor plan is " << (w * h) * c << ".";

    return 0;
}
