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
		Pawn p1("11");
	}
	else if (id_of_piece == 2) {
		Rook r1("22");
	}
	else if (id_of_piece == 3) {
		Knight n1("33");
	}
	else if (id_of_piece == 4) {
		Bishop b1("44");
	}
	else if (id_of_piece == 5) {
		Queen q1("55");
	}
	else if (id_of_piece == 6) {
		King k1("66");
	}

}


Pawn::Pawn(std::string initialpos) {
	initialposition_referenceid = initialpos;
	std::cout << std::format("pawn in position {} created",initialposition_referenceid) << std::endl;
}

Pawn::~Pawn() {
	std::cout << std::format("Pawn {} died", initialposition_referenceid) << std::endl;
}



Rook::Rook(std::string initialpos) {
	initialposition_referenceid = initialpos;
	std::cout << std::format("Rook in position {} created", initialposition_referenceid) << std::endl;
}

Rook::~Rook() {
	std::cout << std::format("Rook {} died", initialposition_referenceid) << std::endl;
}



Knight::Knight(std::string initialpos) {
	initialposition_referenceid = initialpos;
	std::cout << std::format("Knight in position {} created", initialposition_referenceid) << std::endl;
}

Knight::~Knight() {
	std::cout << std::format("Knight {} died", initialposition_referenceid) << std::endl;
}



Bishop::Bishop(std::string initialpos) {
	initialposition_referenceid = initialpos;
	std::cout << std::format("Bishop in position {} created", initialposition_referenceid) << std::endl;
}

Bishop::~Bishop() {
	std::cout << std::format("Bishop {} died", initialposition_referenceid) << std::endl;
}



Queen::Queen(std::string initialpos) {
	initialposition_referenceid = initialpos;
	std::cout << std::format("Queen in position {} created", initialposition_referenceid) << std::endl;
}

Queen::~Queen() {
	std::cout << std::format("Queen {} died", initialposition_referenceid) << std::endl;
}



King::King(std::string initialpos) {
	initialposition_referenceid = initialpos;
	std::cout << std::format("King in position {} created", initialposition_referenceid) << std::endl;
}

King::~King() {
	std::cout << std::format("King {} died", initialposition_referenceid) << std::endl;
}

