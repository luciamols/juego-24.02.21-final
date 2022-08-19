#include<iostream>
using namespace std;
#include "Ladrillo.h"

Ladrillo::Ladrillo()
{
    _texture.loadFromFile("ladrillo1.png");
    _ladrillo.setTexture(_texture);
	_roto.loadFromFile("ladrilloroto.wav");
	_canal.setBuffer(_roto);
	_canal.setVolume(10.f);

}

/*oid Ladrillo::cmd(){

}*/

void Ladrillo::draw(sf::RenderTarget& target, sf::RenderStates states)const {
	target.draw(_ladrillo, states);
}

/*void Ladrillo::update(){

}*/

sf::FloatRect Ladrillo:: getBounds()const{
    return _ladrillo.getGlobalBounds();
}

void Ladrillo::roto(){
    _canal.play();
    ladrillo_roto=true;
}

void Ladrillo::Posicion(int i){
	if (i<=9){
		_ladrillo.setPosition(i*80-40, 30);
	}
	if (i>9 && i<=18){
		_ladrillo.setPosition((i-9)*80-40, 60);
	}
	if (i>18 && i<=27){
		_ladrillo.setPosition((i-18)*80-40, 90);
	}
	if (i>27 && i<=36){
		_ladrillo.setPosition((i-27)*80-40, 120);
	}
	if (i>36 && i<=45){
		_ladrillo.setPosition((i-36)*80-40, 150);
	}
	if (i>45 && i<=54){
		_ladrillo.setPosition((i-45)*80-40, 180);
	}
	if (i>54 && i<=63){
		_ladrillo.setPosition((i-54)*80-40, 210);
	}
	if (i>63 && i<=72){
		_ladrillo.setPosition((i-63)*80-40, 240);
	}
	if (i>72 && i<=81){
		_ladrillo.setPosition((i-72)*80-40, 270);
	}
}

void Ladrillo::desaparece(){ // no desaparecen sino que se dibujan fuera de la pantalla
	_ladrillo.setPosition(-1500, -1500);
}

