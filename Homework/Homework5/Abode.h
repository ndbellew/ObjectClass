#include <string>
using namespace Abode;

class Abodes {
protected:
  string name;
  int size, rooms;
public:
  Abodes(string n, int s, int r);
  void setsize(int w);
  void setrooms(int r);
  void setname(string s);
  int getrooms();
  int getsize();
  string getname();
};
