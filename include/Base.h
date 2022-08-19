#ifndef BASE_H
#define BASE_H
#include <SFML\Graphics.hpp>
#include "Collisionable.h"


class Base: public sf:: Drawable, public Collisionable
{

    public:
        Base();
        virtual ~Base();
        //void cmd();
        void update();
        void respawn();
        void draw(sf::RenderTarget& target,sf::RenderStates states)const override;
        sf::FloatRect getBounds()const override;
        void aumentarVelocidad(int);
		float getVelocity();

    private:

        sf::Sprite _base;
        sf::Texture _texture;
        float _velocity;
};

#endif // BASE_H
