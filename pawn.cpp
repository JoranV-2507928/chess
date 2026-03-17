#include "pawn.h"

Pawn::Pawn(int x, int y, int white) : Piece(x, y, white), firts_move{1} {

}

void Pawn::move(int x, int y) {
	if (not legal_move(x, y)) {
		return;
	}

	verander_positie(x, y);
}


int Pawn::legal_move(int x, int y){
	if (x == get_coord().get_X() or y != get_coord().get_Y()) {
		return 0;
	}

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