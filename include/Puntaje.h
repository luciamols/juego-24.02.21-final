#ifndef PUNTAJE_H
#define PUNTAJE_H


class Puntaje
{
public:
	Puntaje();
	bool grabarEnDisco();
	bool leerDeDisco();
	void setPuntaje(int);
	int getPuntaje();
	//void setNombre(const char *n);
	//char getNombre();
private:
	int puntajeMax;
	//char nombre;
};

#endif // PUNTAJE_H
