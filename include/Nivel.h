#ifndef NIVEL_H
#define NIVEL_H
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>
#include "Collisionable.h"
#include "Ladrillo.h"


class Nivel: public Ladrillo
{
    public:
        Nivel();
        void pared();
        void draw(sf::RenderTarget& target,sf::RenderStates states)const override;

    private:
};

#endif // NIVEL_H
