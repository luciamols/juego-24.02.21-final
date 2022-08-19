#ifndef COLISIONABLE_H
#define COLISIONABLE_H
#include <SFML\Graphics.hpp>

class Collisionable
{
    public:
        Collisionable();
        virtual sf::FloatRect getBounds() const = 0;
        bool isCollision(Collisionable &col) const;


    private:
};

#endif // COLISIONABLE_H
