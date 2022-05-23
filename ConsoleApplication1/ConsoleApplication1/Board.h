#pragma once

class Board {
public:
	static const int boardSize = 3;

	void logBoard();
private:
	int board[boardSize][boardSize] = {};
};