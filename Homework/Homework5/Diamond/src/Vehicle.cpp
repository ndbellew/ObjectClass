#include <iomanip>
#include "../include/Vehicle.h"

namespace vehicle{

  Vehicle::Vehicle(Color _Color)
  : color(_Color)
  {
    std::cout << "created Vehicle with color of "<< color <<std::endl;
  }
  Color Vehicle::getColor() const{
    return color;
  }
  void Vehicle::setColor(Color _Color){
    color = _Color;
  }
  void Vehicle::Drive() const{
    std::cout<<"Vehicle is being Driven.\n";
  }

  Vehicle::~Vehicle(){
    std::cout<<"Deconstructing Vehicle\n";
  }
}
