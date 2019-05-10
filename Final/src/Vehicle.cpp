#include <iomanip>
#include "../include/Vehicle.h"

namespace vehicle{

  Vehicle::Vehicle(Color _Color, std::string _Name)
  : color(_Color), Name(_Name)
  {
    std::cout << "created Vehicle with color of "<< color <<std::endl;
  }
  Color Vehicle::getColor() const{
    return color;
  }
  std::string Vehicle::getName() const{
    return Name;
  }
  void Vehicle::setColor(Color _Color){
    color = _Color;
  }
  void Vehicle::setName(std::string _Name){
    Name = _Name;
  }
  void Vehicle::Drive() const{
    std::cout<<"Vehicle is being Driven.\n";
  }

  Vehicle::~Vehicle(){
    std::cout<<"Deconstructing Vehicle\n";
  }
}
