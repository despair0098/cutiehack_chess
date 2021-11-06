#include <iostream>

class Piece{
    private:
        char pieceColor = "N";
        char pieceChar = "N";
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
        void setChar(char c){pieceChar=c;}
        void setColor(char c){pieceColor=c;}
        char getChar();
        void exchange(Piece* p2){
            this->x = p2->getX();
            this->y = p2->getY();
            this->pieceChar = p2->getChar();
            this->pieceColor = p2->getColor();
        }
        bool move(Piece* p2);

}