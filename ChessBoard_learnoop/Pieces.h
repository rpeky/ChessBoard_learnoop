#pragma once
#include <iostream>
#include <format>

class Piece {

public:
	void startup();
	
protected:

	void makepiece();


private:
	// id reference
	//1 - Pawn
	//2 - Rook
	//3 - Knight
	//4 - Bishop
	//5 - Queen
	//6 - King


	int piece_id;
	const char* piecenames[6] = { "Pawn","Rook","Knight","Bishop","Queen","King" };

	void set_piece_id(int id_of_piece);



};

class Pawn : private Piece {
public:

	Pawn(std::string initialposition_referenceid);
	~Pawn();

private:

	std::string initialposition_referenceid;


	void check_validmove() {

	}

	void check_validattack() {

	}

	void check_validpromote() {

	}

	void action_move() {

	}
	void action_promote() {

	}
};


class Rook : private Piece {
public:

	Rook(std::string initialposition_referenceid);
	~Rook();


private:
	std::string initialposition_referenceid;

};

class Knight : private Piece {
public:
	Knight(std::string initialposition_referenceid);
	~Knight();


private:
	std::string initialposition_referenceid;

};

class Bishop : private Piece {
public:
	Bishop(std::string initialposition_referenceid);
	~Bishop();



private:
	std::string initialposition_referenceid;


};

class Queen : private Piece {
public:
	Queen(std::string initialposition_referenceid);
	~Queen();

private:
	std::string initialposition_referenceid;


};


class King : private Piece {
public:
	King(std::string initialposition_referenceid);
	~King();


private:
	std::string initialposition_referenceid;


};

 