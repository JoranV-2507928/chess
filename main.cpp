#include <iostream>
#include "pawn.h"

using namespace std;

int main() {
	Pawn p1(1, 1, 1);
	cout << "coord: (" << p1.get_coord().get_X() << "," << p1.get_coord().get_Y() << ")\n";
	cout << "white: " << p1.get_white() << "\n\n";

	p1.move(3, 1);
	cout << "coord: (" << p1.get_coord().get_X() << "," << p1.get_coord().get_Y() << ")\n";
	cout << "white: " << p1.get_white() << "\n\n";

	p1.move(3, 1);
	cout << "coord: (" << p1.get_coord().get_X() << "," << p1.get_coord().get_Y() << ")\n";
	cout << "white: " << p1.get_white() << "\n\n";

	p1.move(5, 1);
	cout << "coord: (" << p1.get_coord().get_X() << "," << p1.get_coord().get_Y() << ")\n";
	cout << "white: " << p1.get_white() << "\n\n";

	p1.move(4, 1);
	cout << "coord: (" << p1.get_coord().get_X() << "," << p1.get_coord().get_Y() << ")\n";
	cout << "white: " << p1.get_white() << "\n\n";

	p1.move(3, 1);
	cout << "coord: (" << p1.get_coord().get_X() << "," << p1.get_coord().get_Y() << ")\n";
	cout << "white: " << p1.get_white() << "\n\n";

	p1.move(5, 2);
	cout << "coord: (" << p1.get_coord().get_X() << "," << p1.get_coord().get_Y() << ")\n";
	cout << "white: " << p1.get_white() << "\n\n";
}