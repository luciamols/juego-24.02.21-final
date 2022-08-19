#ifndef LADRILLOAZUL_H
#define LADRILLOAZUL_H
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>
#include "Ladrillo.h"
#include<list>


class LadrilloAzul:public Ladrillo
{
	public:
		LadrilloAzul();
		~LadrilloAzul();


	private:
		sf::Texture _texture;
		sf::Sprite _ladrillo;
};

#endif // LADRILLOAZUL_H
