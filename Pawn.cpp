#include <iostream>
#include "Piece.cpp"

class Pawn : public Piece {
    Pawn(char color, int x1, int y1): Piece(color, x1, y1){};
    virtual char getChar(){return "P";}


}