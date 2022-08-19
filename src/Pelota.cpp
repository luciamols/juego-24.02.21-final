#include<iostream>
using namespace std;
#include "Pelota.h"


Pelota::Pelota(){

    _texture.loadFromFile("pelota.png");
    _sprite.setTexture(_texture);
    _sprite.setPosition(350,530);

    _velocity={1,1};

    _buffer.loadFromFile("Rebote.wav");
    _sound.setBuffer(_buffer);
    _sound.setVolume(20.f);

}

bool Pelota::update(){

    _sprite.move(_velocity);

    if(_sprite.getPosition().x < 0){
        _velocity.x = -_velocity.x;
        _sound.play();

    }
    if(_sprite.getPosition().y < 0){
        _velocity.y = -_velocity.y;
        _sound.play();

    }
    if(_sprite.getPosition().x + _sprite.getGlobalBounds().width > 800){
        _velocity.x = -_velocity.x;
        _sound.play();

    }
    if(_sprite.getPosition().y + _sprite.getGlobalBounds().height > 600){ ///configurar piso para que pierda vidas

        return false;
    }
    return true;

}
void Pelota::rebote(){

    _velocity.y = -_velocity.y;
    _sound.play();

}
void Pelota::respawn(){

    _sprite.setPosition(350,530);

}

//void Pelota::cmd(){}


void Pelota::draw(sf::RenderTarget& target, sf::RenderStates states)const {

    target.draw(_sprite, states);
}

sf::FloatRect Pelota::getBounds() const{

    return _sprite.getGlobalBounds();
}

void Pelota::Base(float v){
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        _sprite.move(v, 0);

    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
		_sprite.move(-v, 0);
    }
    if(_sprite.getPosition().x + _sprite.getGlobalBounds().width > 750){
        _sprite.setPosition(750 - _sprite.getGlobalBounds().width,_sprite.getPosition().y);
    }
	/*if(_sprite.getPosition().x - _sprite.getGlobalBounds().width < 30){
        _sprite.setPosition(30 + _sprite.getGlobalBounds().width,_sprite.getPosition().y);
    }*/
    if(_sprite.getGlobalBounds().left < 50){
        _sprite.setPosition(_sprite.getOrigin().x+50,_sprite.getPosition().y);
    }
}

void Pelota::aumentarVelocidad(int n){
	n=n*0.7;
	_velocity={n,n};
}


Pelota::~Pelota()
{
    //dtor
}

