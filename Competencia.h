#pragma once
#include "Carro.h"
class Competencia {
private:
	Carro** arrC;
	int color;
public:
	Competencia() {
		this->arrC = new Carro * [3];
		Carro* carro1 = new Carro(1, 4, 1);
		Carro* carro2 = new Carro(1, 15, 2);
		Carro* carro3 = new Carro(1, 25, 3);
		arrC[0] = carro1;
		arrC[1] = carro2;
		arrC[2] = carro3;
	}
	~Competencia() {
		delete[]arrC;
	}
	void posIniciales() {
		for (int i = 0; i < 3; i++) {
			arrC[i]->mostrar();
		}
	}
	void iniciaCompetencia() {
		while (!(arrC[0]->ganador() || arrC[1]->ganador() || arrC[2]->ganador())) {
			for (int i = 0; i < 3; i++) {
				arrC[i]->borrar();
				arrC[i]->mover();
				arrC[i]->mostrar();
			}
			if (arrC[0]->ganador() == true) {
				Console::ForegroundColor = ConsoleColor::DarkRed;
				cout << "\n\n\n\n\n\tGANO EL CARRO DE COLOR 1";
			}
			if (arrC[1]->ganador() == true) {
				Console::ForegroundColor = ConsoleColor::Blue;
				cout << "\n\n\n\n\n\tGANO EL CARRO DE COLOR 2";
			}
			if (arrC[2]->ganador() == true) {
				Console::ForegroundColor = ConsoleColor::DarkGreen;
				cout << "\n\n\n\n\n\tGANO EL CARRO DE COLOR 3";
			}
			_sleep(100);
		}
	}
};