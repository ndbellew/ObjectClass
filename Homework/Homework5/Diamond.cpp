#include <iomanip>
#include <iostream>
#include <string>
#include "Drink"
using namespace std;

class ChessPiece{
private: string name;
private: int move;
private: bool alive;
};


class Rook : extends ChessPiece{
private: bool MoveVert;
private: bool MoveHoriz;
};

class Bishop : extends ChessPiece{
private: bool MovesDiag;
};


class Queen : extends Bishop, Rook{

};
