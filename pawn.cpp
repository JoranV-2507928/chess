#include "pawn.h"
#include <iostream>

Pawn::Pawn(int x, int y) : positie(x, y) {
	if (x == 2) {
		is_white = 1;
	}

	else {
		is_white = 0;
	}
}

Coord Pawn::getPosition() const {
	return positie;
}

void Pawn::moveTo(int x, int y) {
	if (is_moved and y == positie.gety() and x == positie.getx() + 1) {
		positie.set(x, y);
	}

	else if (not is_moved and y == positie.gety() and (x == positie.getx() + 1 or x == positie.getx() + 2)) {
		positie.set(x, y);
		is_moved = 1;
	}

	else {
		std::cout << "dit is geen geldige zet!\n";
	}
}