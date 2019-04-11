#include <iostream>
#include <stdlib.h>
#include <numeric>
#include "DDStatMaker.h"

namespace DnDStats{
  StatMaker::Statmaker(int _S, int _D, int _C, int _I, int _W, int _CH)
    : S(_S), D(_D), C(_C), I(_I), W(_W), CH(_CH), count(0), GrandTotalCount(0)
    {
    }
  StatMaker::getCount(){
    return count;
  }
  void StatMaker::IncrementCount(){
    count+=1;
  }
  StatMaker::getGrandTotalCount(){
    return GrandTotalCount;
  }
  int StatMaker::RandInt(int Minimum){
    int num = 0;
    while(num<Minimum){
    num = (rand() % 6 +1)+(rand() % 6 +1)+(rand() % 6 +1)
    IncrementCount();
    }
    return num;
  }
  void StatMaker::SetStats(){
    int STR = RandInt(this->S);
    int DEX = RandInt(this->D);
    int CON = RandInt(this->C);
    int INT = RandInt(this->I);
    int WIS = RandInt(this->W);
    int CHA = RandInt(this->CH);
    this->StatArray[] = {STR, DEX, CON, INT, WIS, CHA};
  }
  int StatMaker::DetermineStats(){
  // need to grap command line arguments to use for total cap. ill just use 70 for now
  int total = 0;
  n = sizeof(a)/sizeof(a[0])
  while(total<70){
    SetStats();
    total = accumulate(this->StatArray[], this->StatArray[]+(sizeof(6/this->StatArray[0])), 0);
  }
  return total;
}
  void StatMaker::PrintStats(int total, int STR,int DEX,int CON,int INT,int WIS,int CHA){
    //build a print
    continue
  }
  void StatMaker::run(){
    int total;
    total = DetermineStats();
    Stats = this->StatArray[];
    PrintStats(total, Stats[0], Stats[1], Stats[2], Stats[3], Stats[4], Stats[5]);
  }
}
