#include "piece.h"

Coord::Coord(int x, int y) : m_x{ x }, m_y{ y } {

}

int Coord::get_X() const {
	return m_x;
}

int Coord::get_Y() const {
	return m_y;
}

void Coord::set_coord(int x, int y) {
	m_x = x;
	m_y = y;
}

Piece::Piece(int x, int y, int white) : m_white{ white }, m_coordinaat{ x, y } {

}

void Piece::verander_positie(int x, int y) {
	m_coordinaat.set_coord(x, y);
}

Coord Piece::get_coord() const {
	return m_coordinaat;
}

int Piece::get_white() const {
	return m_white;
}