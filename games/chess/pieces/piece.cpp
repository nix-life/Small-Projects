enum class Color { White, Black };

struct Position {
    char row;
    int column;
}

class Piece {
    std::string name;
    std::pair<int, int> position;
    int value;
}