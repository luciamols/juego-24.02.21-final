#include<iostream>
using namespace std;

#include "Base.h"



Base::Base(){

    _texture.loadFromFile("base.png");
    _base.setTexture(_texture);
    _base.setPosition(360,550);
    _velocity = 4;
    _base.setOrigin(_base.getGlobalBounds().width/2,0);

}

void Base::update(){

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        _base.move(_velocity,0);

    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
		_base.move(-_velocity,0);
    }

    if(_base.getGlobalBounds().left < 10){
        _base.setPosition(_base.getOrigin().x+10,_base.getPosition().y);
    }

    /*if(_base.getPosition().x - _base.getGlobalBounds().width < 10){
        _base.setPosition(10 + _base.getGlobalBounds().width,_base.getPosition().y);
    }*/

    if(_base.getPosition().x + _base.getGlobalBounds().width > 840){
        _base.setPosition(840 - _base.getGlobalBounds().width,_base.getPosition().y);
    }

}
void Base:: respawn(){

    _base.setPosition(360,550);

}

//void Base::cmd(){}

void Base::draw(sf::RenderTarget& target, sf::RenderStates states)const {

    target.draw(_base, states);
}
sf::FloatRect Base:: getBounds()const{

    return _base.getGlobalBounds();

}

void Base::aumentarVelocidad(int n){
	n=4+n*0.2;
	_velocity=n;
}

float Base::getVelocity(){
	return _velocity;
}


Base::~Base()
{
    //dtor
}

