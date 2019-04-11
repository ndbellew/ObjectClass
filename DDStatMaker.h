#pragma once
#include <iomanip>

namespace DnDStats{

class StatMaker{
public: const int S;
public: const int D;
public: const int C;
public: const int I;
public: const int W;
public: const int CH;
public: int StatArray[6];
private: int count;
private: int GrandTotalCount;
public: StatMaker(int _S, int _D, int _C, int _I, int _W, int _CH);
public: StatMaker getCount();
public: void IncrementCount();
public: StatMaker getGrandTotalCount();
public: int RandInt(int Minimum);
public: void SetStats();
public: int DetermineStats();
public: void PrintStats(int total, int STR,int DEX,int CON,int INT,int WIS,int CHA);
public: void run();
public: ~StatMaker();
};
}
