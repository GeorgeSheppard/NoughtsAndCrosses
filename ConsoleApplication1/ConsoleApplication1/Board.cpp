#include "stdafx.h"
#include <iostream>
#include "Board.h"

enum Pieces { empty, nought, cross };
const char* PiecesRepresentation[] = { " ", "o", "x" };

void Board::logBoard() {
	std::cout << "  1 2 3\n";
	for (int i = 0; i < 3; i++) {
		std::cout << i + 1;
		for (int j = 0; j < 3; j++) {
			int squareValue = board[i][j];
			const char* representation = PiecesRepresentation[squareValue];
			std::cout << " " << representation;
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}
