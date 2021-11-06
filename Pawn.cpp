#include <iostream>
#include "Piece.cpp"

class Pawn : public Piece {
    Pawn(char color, int x1, int y1): Piece(color, x1, y1){};
    char getChar(){return "P";}

    bool move(Piece* p2){
        int x2 = p2->getX();
        int y2 = p2->getY();
        if(pieceColor == "W"){
            if(x == x2 && y2 == y + 1 && p2->getColor() == "N"){
                p2->exchange(this);
                pieceChar = "N";
                pieceColor = "N";
                return true;
            } else {
                if((x + 1 == x2 || x-1 == x2) && y + 1 == y2 && p2->getColor() == "B"){
                    p2->setX(x);
                    p2->setY(y);
                    p2->setPieceChar(pieceChar);
                    this->x = x2;
                    this->y = y2;
                    return true;
                } else {
                    return false;
                }
            }
        } else {
            if(pieceColor == "B"){
                if(x == x2 && y2 == y - 1 && p2->getColor() == "N"){
                p2->setX(x);
                p2->setY(y);
                p2->setPieceChar(pieceChar);
                this->x = x2;
                this->y = y2;
                return true;
            } else {
                if((x + 1 == x2 || x-1 == x2) && y - 1 == y2 && p2->getColor() == "W"){
                    p2->setX(x);
                    p2->setY(y);
                    this->x = x2;
                    this->y = y2;
                    return true;
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
    }
}