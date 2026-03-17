#include "piece.h"

class Rook : public Piece {
public:
	Rook(int x, int y, int white);
	void move(int x, int y);

private:
	int legal_move(int x, int y) const;
<<<<<<< HEAD
=======
	//test
>>>>>>> herstel
};