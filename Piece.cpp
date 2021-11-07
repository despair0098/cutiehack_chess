#include <iostream>

class Piece{
    private:
        char pieceColor = 'Z';
        char pieceChar = 'Z';
        int x;
        int y;
        bool firstMove = true;

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

        void castle(int x, int y) {
            if(this->pieceChar == 'K' && this->firstMove) {
                if(x == 2 && y = 0 && ) { //white castle left

                }
                else if() { //white castle right

                }
                else if() { //black castle left

                }
                else if() { //black castle right

                }
            }

        }

};