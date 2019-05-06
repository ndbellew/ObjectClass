#include <iostream>
#include <string>


class VendingMachine {
  private: int row;
  private: char column;
  private: string name;

  public: VendingMachine(int _row, char _column, string _name);
  public: void setrow(int _row);
  public: void setcolumn(char _column);
  public: void setname(string _name);
  public: string getname(void);
  public: int getrow(void);
  public: char getcolumn( void ;
};
