#include "board.h"

class Pawn {
public:
	Pawn(int x, int y);

	Coord getPosition() const;
	void moveTo(int x, int y);

private:
	Coord positie;
	int is_moved{ 0 };
	int is_white;
};