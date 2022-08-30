#pragma once
#include "Llanta.h"
#include "Chasis.h"
class Carro {
private:
	Llanta* llanta1;
	Llanta* llanta2;
	Llanta* llanta3;
	Llanta* llanta4;
	Chasis* chasis;
	int dx, color;

public:
	//para la asociacion se reciven los objetos desde afuera
	//en la composision los objetos se crean dentro del contructor
	Carro(int x, int y, int color) {
		generarDx();//velocidades aleatorias
		this->llanta1 = new Llanta(x,y-2,dx,color);
		this->llanta2 = new Llanta(x, y+2, dx, color);
		this->llanta3 = new Llanta(x+3, y-2, dx, color);
		this->llanta4 = new Llanta(x+3, y+2, dx, color);
		this->chasis = new Chasis(x, y, dx, color);
	}
	~Carro() { 
		delete this->llanta1;
		delete this->llanta2;
		delete this->llanta3;
		delete this->llanta4;
		delete this->chasis;
	}
	void setDx(int dx) {
		this->dx = dx;
	}
	int getDx() {
		return this->dx;
	}
	int getColor() {
		return this->color;
	}
	//metodos
	void borrar() {
		this->llanta1->borrar();
		this->llanta2->borrar();
		this->llanta3->borrar();
		this->llanta4->borrar();
		this->chasis->borrar();
	}
	void mover() {
		this->llanta1->mover();
		this->llanta2->mover();
		this->llanta3->mover();
		this->llanta4->mover();
		this->chasis->mover();
	}
	void mostrar() {
		this->llanta1->mostrar();
		this->llanta2->mostrar(); 
		this->llanta3->mostrar();
		this->llanta4->mostrar();
		this->chasis->mostrar();
	}
	bool ganador() {
		bool carroGanador = false; //se incia en false porque al inicio no hay un ganador
		if (this->chasis->getX() > 60) {
			carroGanador = true;
		}
		return carroGanador;
	}
	void generarDx() {
		dx = 1 + rand() % 5;
	}
};