#include "Pieces.h"

void Piece::startup() {
	makepiece();
}
void Piece::makepiece() {
	std::cout << "test piece made\nEnter piecetype\n";
	std::cin >> piece_id;
	set_piece_id(piece_id);
}

void Piece::set_piece_id(int id_of_piece) {
	piece_id = id_of_piece;
	std::cout << "type of piece is: " << piecenames[id_of_piece-1] << std::endl;
	if (id_of_piece == 1) {
		Pawn p1("00");
	}
	else if (id_of_piece == 2) {
		
	}
	else if (id_of_piece == 3) {
		
	}
	else if (id_of_piece == 4) {
		
	}
	else if (id_of_piece == 5) {
		
	}
	else if (id_of_piece == 6) {
		
	}

}


Pawn::Pawn(std::string initialpos) {
	initialposition_referenceid = initialpos;
	std::cout << std::format("pawn in position {} created",initialposition_referenceid) << std::endl;
}

Pawn::~Pawn() {
	std::cout << std::format("Pawn {} died", initialposition_referenceid) << std::endl;
}

