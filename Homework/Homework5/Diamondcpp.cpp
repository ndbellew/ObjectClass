#include <iostream>
/*
Creating a Diamond problem
Nathan Bellew
I created a diamond problem that will not compile.

*/

class Games {
protected:
  void play(){
    std::cout <<"Game has started, who will win?"<<std::endl;
  }
};

class TDFGame : protected Games {
protected:
  void BuildTower(){
    std::cout<<"Tower has been built"<<std::endl;

  }
protected:
  void play(){std::cout <<"TDF has started, who will win?"<<std::endl;
  }
};

class StrategyGame : protected Games{
protected:
  void play(){
    std::cout<<"Lets begin your strategy."<<std::endl;
  }
};

class BloonTower : protected StrategyGame, protected TDFGame {
//This is the diamond problem as shown in class except my version.
//The assignment is to create this but make it work.
};


int main(){
  BloonTower BT;

  BT.play();
  BT.BuildTower();

  return 0;
}
