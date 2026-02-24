#include <utility>

class Board {
public:
	Board();

private:
	char arr[8][8];
};

class Coord {
public:
	Coord(int x, int y) : xy{ x, y } {}

	int getx() const { return xy.first; }
	int gety() const { return xy.second; }

	void set(int x, int y) {
		xy.first = x;
		xy.second = y;
	}

private:
	std::pair<int, int> xy;
};