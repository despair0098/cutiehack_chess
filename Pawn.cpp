#include "Piece.cpp"

class Pawn : public Piece {
    Pawn(char color, int x1, int y1): Piece(color, x1, y1){};
    char getChar(){return 'P';}

    bool move(Piece& p2){
        int x2 = p2.getX();
        int y2 = p2.getY();
        if(getColor() == 'W'){
            if(getX() == x2 && y2 == getY() + 1 && p2.getColor() == 'N'){
                return true;
            } else {
                if((getX() + 1 == x2 || getX()-1 == x2) && getY() + 1 == y2 && p2.getColor() == 'B'){
                    return true;
                } else {
                    return false;
                }
            }
        } else {
            if(getColor() == 'B'){
                if(getX() == x2 && y2 == getY() - 1 && p2.getColor() == 'N'){
                    return true;
                } else {
                    if((getX() + 1 == x2 || getX()-1 == x2) && getY() - 1 == y2 && p2.getColor() == 'W'){
                        return true;
                    } else {
                        return false;
                    }
                }
            } else {
                return false;
            }
        }
    }
};