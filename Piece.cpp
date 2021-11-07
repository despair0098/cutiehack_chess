#include <iostream>

class Piece{
    private:
        char pieceColor = 'N';
        char pieceChar = 'N';
        int x;
        int y;

    public:
        Piece(char color, int x1, int y1):pieceColor(color), x(x1), y(y1){};
        ~Piece(){}  
        char getColor(){return pieceColor;}
        int getX(){return x;}
        int getY(){return y;}
        void setX(int x1){x = x1;}
        void setY(int y1){y = y1;}
        void setChar(char c){pieceChar=c;}
        void setColor(char c){pieceColor=c;}
        char getChar();
        bool isMoveable(Piece& p2);
        void setNull()
        {
            this->pieceColor = 'N';
            this->pieceChar = 'N';
        }
        void move(Piece &p2)
        {
            if (isMoveable(p2))
            {
                p2.setColor(this->pieceColor);
                p2.setChar(this->pieceChar);
                setNull();
            }
        };

};