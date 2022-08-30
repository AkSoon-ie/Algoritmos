#pragma once
#include "Llanta.h"
class Chasis {
private:
	int x, y, dx, color;
public:
	Chasis() {
		this->x = y = 0;
		this->dx = color = 1;
	}
	Chasis(int x, int y, int dx, int color) {
		this->x = x;
		this->y = y;
		this->dx = dx;	
		this->color = color;
	}
	~Chasis() {	}
	//getters
	int getX() {
		return this->x;
	}
	//metodos
	void borrar() {
		Console::SetCursorPosition(x, y);
		cout << " " << " " << " " << " " << " " << " " << " ";
	}
	void mover() {
		x += dx;
	}
	void mostrar() {
		Console::SetCursorPosition(x, y);
		if (color == 1)
			Console::ForegroundColor = ConsoleColor::DarkRed;
		if (color == 2)
			Console::ForegroundColor = ConsoleColor::Blue;
		if (color == 3)
			Console::ForegroundColor = ConsoleColor::DarkGreen;
		cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
	}
};