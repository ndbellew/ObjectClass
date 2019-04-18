#include <iomanip>
#include <iostream>
#include <string>
#include "Drink"
using namespace std;


Drink::Drink(string n, int s){
  name = n;
  size = s;
}
void Drink::setname(string n){
  name = n;
}
string Drink::getname(){
  return name;
}
void Drink::setsize(int s){
  size = s;
}
int Drink::getsize(){
  return size;
}

class ColdDrink: virtual public Drink {
protected:
  float temperature;
public:
  ColdDrink(float temp);
  void setTemp(float t);
  float getTemp();
};
ColdDrink::ColdDrink(float t){
  temperature = t;
}
void ColdDrink::setTemp(float t){
  
}

class Rectangle: virtual public Polygon {
protected:
  double area;
};

class Cuboid: public Square, public Rectangle{
  double area, volume;
}
