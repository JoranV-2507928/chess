class Coord {
public:
	Coord(int x, int y);
	int get_X();
	int get_Y();
	void set_coord(int x, int y);

private:
	int m_x, m_y;
};

class Piece {
public:
	Piece(int x, int y, int white);
	void verander_positie(int x, int y);
	Coord get_coord();
	int get_white();

private:
	int m_white;
	Coord m_coordinaat;
};