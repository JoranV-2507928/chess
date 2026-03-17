#include "piece.h"

class Pawn : public Piece {
public:
	Pawn(int x, int y, int white);
	int legal_move(int x, int y);

private:
	int firts_move;
};