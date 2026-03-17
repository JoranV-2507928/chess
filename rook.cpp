#include "rook.h"

Rook::Rook(int x, int y, int white) : Piece(x, y, white) {

}

void Rook::move(int x, int y) {
	if (not legal_move(x, y)) {
		return;
	}

	verander_positie(x, y);
}

int Rook::legal_move(int x, int y) const{
	int verschil_X = get_coord().get_X() - x;
	int verschil_y = get_coord().get_Y() - y;

	if (verschil_X == 0 and verschil_y != 0) {
		return 1;
	}

	else if (verschil_X != 0 and verschil_y == 0) {
		return 1;
	}

	else {
		return 0;
	}
}