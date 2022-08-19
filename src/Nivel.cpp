//Nombre
//TP Nº:
//EJ Nº:
//COMENTARIOS:
#include<iostream>
using namespace std;
#include "Nivel.h"


Nivel::Nivel()
{

}

void Nivel::pared(){

    for( size_t i=0; i<10; i++){
        for( size_t j=0; j<10; j++){

            _ladrillo;
            _ladrillo.setTexture( _texture );
            _ladrillo.setPosition( i * ( _texture.getSize().x + 4 ), 10 + j * ( _texture.getSize().y + 4 ) );
            _ladrillo.push_back( _ladrillo );

        }

    }

}
void Nivel::draw(sf::RenderTarget& target, sf::RenderStates states)const {

    for(int i=0; i<100; i++){
        target.draw(_ladrillo, states);
    }
}
