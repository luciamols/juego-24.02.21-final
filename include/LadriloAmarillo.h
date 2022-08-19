#ifndef LADRILOAMARILLO_H
#define LADRILOAMARILLO_H
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>
#include "Ladrillo.h"
#include<list>


class LadriloAmarillo:public Ladrillo
{
	public:
		LadriloAmarillo();
		~LadriloAmarillo();

	private:
		//sf::Texture _texture;
		sf::Sprite _ladrillo;
};

#endif // LADRILOAMARILLO_H
