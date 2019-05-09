#include <iomanip>
#include "../include/Vehicle.h"

namespace vehicle{

  Vehicle::Vehicle(Color _Color,)
  : Color(_Color)
  {
    std::cout << "created Vehicle with color of "<< color <<std::endl;
  }
  Color Vehicle::getColor() const{
    return Color;
  }
  void Vehicle::setColor(Color _Color){
    Color = _Color;
  }
  void Vehicle::Drive(){
    std::cout<<"Vehicle is being Driven.\n"
  }

  Vehicle::~Vehicle(){
    std::cout<<"Deconstructing Vehicle\n";
  }
}
