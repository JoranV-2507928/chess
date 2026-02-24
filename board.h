#include <utility>

class Board {
public:
	Board();

private:
	char arr[8][8];
};

class Coord {
public:
	Coord(int x, int y);

	int getx() const;
	int gety() const;

	void set(int x, int y);

private:
	std::pair<int, int> xy;
};