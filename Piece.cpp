#include <iostream>

class Piece{
    private:
        char pieceColor;
        char pieceChar;
        int x;
        int y;

    public:
        Piece(char color, int x1, int y1):piecrColor(color), x(x1), y(y1){};
        ~Piece(){}  
        char getColor(){return pieceColor;}
        int getX(){return x;}
        int getY(){return y;}
        void setX(int x1){x = x1;}
        void setY(int y1){y = y1;}
        virtual char getChar() = 0;

}