#include "board.h"

Board::Board() {
	for (size_t rij = 0; rij < 8; rij++) {
		for (size_t kol = 0; kol < 8; kol++) {
			if (rij == 1 or rij == 6) {
				arr[rij][kol] = 
			}
		}
	}
}


Coord::Coord(int x, int y) : xy{ x, y } {}

int Coord::getx() const { 
	return xy.first; 
}

int Coord::gety() const { 
	return xy.second; 
}

void Coord::set(int x, int y) {
	xy.first = x;
	xy.second = y;
}