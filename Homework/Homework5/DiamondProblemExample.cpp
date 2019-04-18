#include <iostream>
#include <string>
#include "VendingMachine.h"
/*
Creating a Diamond problem
Nathan Bellew
I created a diamond problem that will not compile.

*/


VendingMachine::VendingMachine(int _row, char _column, string _name){
  std::cout<<"Vending Machine Created"<<std::endl;
  row = _row;
  column = _column;
  name = _name;
}

void VendingMachine::setrow(int _row){
  row = row;
}
string VendingMachine::getrow( void ){
  return row;
}
void VendingMachine::setcolumn(char _column){
  column = _column;
}
char VendingMachine::getcolumn( void ){
  return column;
}
void VendingMachine::setname(string _name){
  name = _name;
}
string VendingMachine::getname( void ){
  return name;
}


class ChocolateBar : virtual public VendingMachine {
private:
  float price;
public: ChocolateBar( float _price) : VendingMachine(_row, _col,name);
public: void Purchase( void );
public: void setprice( float _price );
public: float getprice( void );
};
ChocolateBar::ChocolateBar(float _price)

class PeanutBar : virtual public VendingMachine{
protected:
  void play(){
    std::cout<<"Lets begin your strategy."<<std::endl;
  }
};

class Snickers : public PeanutBar, public ChocolateBar {
//This is the diamond problem as shown in class except my version.
//The assignment is to create this but make it work.
void play(){
  std::cout<<"Bloons are ready to be popped"<<std::endl;

};


int main(){
  BloonTower BT;

  BT.play();
  BT.BuildTower();

  return 0;
}
