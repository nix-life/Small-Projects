




#include <vector>

std::vector<std::vector<int>> make_original_board() {
    std::vector<std::vector<int>> board = {
        {-4, -2, -3, -5, -6, -3, -2, -4},
        {-1, -1, -1, -1, -1, -1, -1, -1},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {4, 2, 3, 5, 6, 3, 2, 4},
    }

    /*
    Pieces:
    1 - Pawn
    2 - Knight
    3 - Bishop
    4 - Rook
    5 - Queen
    6 - King

    Positive value is white, negative value is black
    0 is empty space on board
    */

    return board;
}

int board() {



    return 0;
}