#include <iostream>
#include "Piece.cpp"

class Bishop : public Piece {
    Bishop(char color, int x1, int y1): Piece(color, x1, y1){};
    char getChar(){return 'B';}

    bool move(Piece& p2){
        if(abs(p2.getX() - getX()) == abs(p2.getY() - getY())){
            int xIncrement = (p2.getX() - getX()) / abs(p2.getX() - getX());
            int yIncrement = (p2.getY() - getY()) / abs(p2.getY() - getY());
        } else {
            return false;
        }
    }

};