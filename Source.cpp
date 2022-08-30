#include "Competencia.h"
#include <conio.h>
#include<time.h>
int main() {
	char key;
	srand(time(NULL));
	Console::CursorVisible = false;
	Competencia* comp = new Competencia();
	comp->posIniciales();
	while (true) {
		key = _getch();
		if (key == 'G' || key == 'g') break;
	}
	comp->iniciaCompetencia();
	delete comp;
	_getch();
}