#include "pawn.h"

Pawn::Pawn(int x, int y, int white) : Piece(x, y, white), firts_move{1} {

}

int Pawn::legal_move(int x, int y) {
	int verschil = x - get_coord().get_X();
	
	if (not get_white()) {
		verschil *= -1;
	}

	if (verschil == 2 and firts_move) {
		firts_move = 0;
		return 1;
	}

	else if (verschil == 1) {
		firts_move = 0;
		return 1;
	}

	else {
		return 0;
	}
}