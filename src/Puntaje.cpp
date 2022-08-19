#include "Puntaje.h"
#include "stdio.h"
#include <cstring>


Puntaje::Puntaje()
{
	puntajeMax = 0;
	//const char n[10] = "---";
	//strcpy(nombre, n);
}


bool Puntaje::grabarEnDisco(){
	FILE *p;
	p = fopen("puntaje.dat", "wb");
	if (p == NULL) return false;
	bool escribio = fwrite(this, sizeof *this, 1, p);
	fclose (p);
	return escribio;
}

bool Puntaje::leerDeDisco(){
	FILE *p;
	p=fopen("puntaje.dat", "rb");
	if (p==NULL) return false;
	bool leyo = fread(this, sizeof *this, 1, p);
	fclose (p);
	return leyo;
}

void Puntaje::setPuntaje(int p){
	puntajeMax = p;
}

int Puntaje::getPuntaje(){
	return puntajeMax;
}

/*void Puntaje::setNombre(const char *n){
	strcpy(nombre, n);
}

char Puntaje::getNombre(){
	return *nombre;
} */
