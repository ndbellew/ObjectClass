#include "Vehicle.h"
using namespace vehicle;

Vehicle::Vehicle(string _Name, string _Color, int _TopSpeed){
  Name = _Name;
  Color = _Color;
  TopSpeed = _TopSpeed;
}

void Vehicle::setName(string _Name){
  Name = _Name;
}
void Vehicle::setColor(string _Color){
  Color = _Color;
}
void Vehicle::setTopSpeed(int _TopSpeed){
  TopSpeed = _TopSpeed;
}
string Vehicle::getName() const{
  return Name;
}
string Vehicle::getColor() const{
  return Color;
}
string Vehicle::getTopSpeed() const{
  return TopSpeed;
}
bool Vehicle::IsInUse() const{
  return InUse;
}
