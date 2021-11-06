#include <iostream>
#include "Piece.cpp"

class Knight : public Piece {
    Knight(char color, int x1, int y1): Piece(color, x1, y1){};
    char getChar(){return 'N';}

    bool move(Piece& p2){
        if((abs(getX() - p2.getX()) == 2 && abs(getY() - p2.getY()) == 1) || (abs(getX() - p2.getX() == 1) && abs(getY() - p2.getY()) == 2)){
            return true;
        } else {
            return false;
        }
    }

};