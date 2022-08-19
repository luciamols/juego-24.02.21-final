#include "LadrilloAzul.h"

LadrilloAzul::LadrilloAzul()
{
	_texture.loadFromFile("ladrillo1.png");
    _ladrillo.setTexture(_texture);
}

LadrilloAzul::~LadrilloAzul()
{
	//dtor
}
