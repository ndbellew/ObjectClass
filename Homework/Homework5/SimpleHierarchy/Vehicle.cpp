#include <iomanip>
#include "Vehicle.h"
using namespace vehicle;

Vehicle::Vehicle(string _Name, string _Color, int _TopSpeed)
: Color(_Color)
{
  std::cout << "created Vehicle with color of "<< color <<std::endl;
}
void Vehicle::setInUse(bool _InUse){
  InUse = _InUse;
}
string Vehicle::getColor() const{
  return Color;
}
bool Vehicle::IsInUse() const{
  return InUse;
}
void Vehicle::ToggleUse(){
  if (IsInUse()){
    std::cout<<"Finished Using Vehicle\n";
    setInUse(false);
  }else{
    std::cout<<"Using vehicle\n";
    setInUse(true);
  }
}
