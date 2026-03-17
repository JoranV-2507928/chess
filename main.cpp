#include <iostream>
#include "piece.h"

using namespace std;

int main() {
	Piece p1(0, 0, 1);
	cout << "coord: (" << p1.get_coord().get_X() << "," << p1.get_coord().get_Y() << ")\n";
	cout << "white: " << p1.get_white() << "\n";
	
	p1.verander_positie(1, 1);
	cout << "coord: (" << p1.get_coord().get_X() << "," << p1.get_coord().get_Y() << ")\n";
	cout << "white: " << p1.get_white() << "\n";
}