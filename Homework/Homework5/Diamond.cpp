#include <iomanip>
#include <iostream>
#include <string>
#include "Drink"
using namespace std;

class ChessPiece{
private: string name;
private: int move;
private: bool alive;
private: string color;
public:
  ChessPiece(string n, int m, bool a, string c);
  void setname(string n);
  void setAlive(bool a);
  void setColor(string c);
  string getname();
  string getColor();
  bool Isalive();
};


class Rook : extends ChessPiece{
private: int move;
public:
  bool isMoveVert();
  bool isMoveHoriz();
};

class Bishop : extends ChessPiece{
private: int move;
public:
    
};


class Queen : extends Bishop, Rook{

};
