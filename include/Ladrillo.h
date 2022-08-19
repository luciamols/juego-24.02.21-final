#ifndef LADRILLO_H
#define LADRILLO_H
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>
#include "Collisionable.h"
#include<list>

class Ladrillo : public sf:: Drawable, public Collisionable
{
    public:
        Ladrillo();
        //void cmd();
        //void update();
        void draw(sf::RenderTarget& target,sf::RenderStates states)const override;
        sf::FloatRect getBounds()const override;
        void roto();
        void Posicion(int);
        void desaparece();


    protected:
        sf::Sprite _ladrillo;
        sf::Texture _texture;
        sf::Sound _canal;
        sf::SoundBuffer _roto;
        bool ladrillo_roto = false;

};

#endif // LADRILLO_H
