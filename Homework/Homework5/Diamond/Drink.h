#include <string>
using namespace std;

class Drink {
protected:
  string name;
  int size;
public:
  Drink(string n, int s);
  void setname(int w);
  void setsize(int h);
  int getsize();
  string getname();
};
