class Coord {
public:
	Coord(int x, int y);
	int get_X() const;
	int get_Y() const;
	void set_coord(int x, int y);

private:
	int m_x, m_y;
};

class Piece {
public:
	Piece(int x, int y, int white);
	void verander_positie(int x, int y);
	Coord get_coord() const;
	int get_white() const;

private:
	int m_white;
	Coord m_coordinaat;
};