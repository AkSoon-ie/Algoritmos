#pragma once
#include <iostream>
using namespace std;
using namespace System;
class Llanta {
private:
	int x, y, dx, color;
public:
	Llanta(int x, int y, int dx, int color) {
		this->x = x;
		this->y = y;
		this->dx = dx;
		this->color = color;
	}
	~Llanta() { }
	//metodos
	void borrar() {
		Console::SetCursorPosition(x, y);
		cout << " ";
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
		cout << char(219);
	}
	//getters
	int getx() {
		return this->x;
	}
	int gety() {
		return this->y;
	}
	int getdx() {
		return this->dx;
	}
	int getcolor() {
		return this->color;
	}
	//setters
	void setx(int x) {
		this->x = x;
	}
	void sety(int y) {
		this->y = y;
	}
	void setdx(int dx) {
		this->dx = dx;
	}
	void setcolor(int c) {
		this->color = c;
	}
};
