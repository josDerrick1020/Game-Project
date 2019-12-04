#include <SFML/Graphics.hpp>

class O_Player_Piece : public sf::circleShape
{
    public:
        O_playerPiece(float radius, const sf::color &c, sf::Vector2f &pos) : sf::circleShape(radius)
        {
            this->setFillColor(c);
            this->setPosition(pos);
        }
};

class X_Player_Piece : public sf::rectangleShape
{
    public:
    X_Player_Piece(const sf::color &c, sf::Vector2f &size) : sf::rectangleShape(size)
    {
        this->setFillColor(c);
        this->setPosition(pos);
    }
};

class Player
{
    protected:
    bool isOccuoiedSquare1;
    bool isOccuoiedSquare2;
    bool isOccuoiedSquare3;
    bool isOccuoiedSquare4;
    bool isOccuoiedSquare5;
    bool isOccuoiedSquare6;
    bool isOccuoiedSquare7;
    bool isOccuoiedSquare8;
    bool isOccuoiedSquare9;

    Player()
    {
    isOccuoiedSquare1 = false;
    isOccuoiedSquare2 = false;
    isOccuoiedSquare3 = false;
    isOccuoiedSquare4 = false;
    isOccuoiedSquare5 = false;
    isOccuoiedSquare6 = false;
    isOccuoiedSquare7 = false;
    isOccuoiedSquare8 = false;
    isOccuoiedSquare9 = false;
    }
};
