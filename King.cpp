#include <iostream>
#include "Piece.cpp"

class King : public Piece {
    King(char color, int x1, int y1): Piece(color, x1, y1){};
    char getChar(){return 'K';}

    bool move(Piece& p2){
        if(abs(p2.getX() - getX()) == 1){
            if(abs(p2.getY() - getY()) == 1){
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }

};