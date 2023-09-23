#pragma once
#include <iostream>
class Board {

public:

	Board();
	~Board();

protected:
	


private:
	// id reference
	//0 - Empty Square
	//1 - Pawn
	//2 - Rook
	//3 - Knight
	//4 - Bishop
	//5 - Queen
	//6 - King
	int boardplay[8][8];



};