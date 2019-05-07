#include <iomanip>
#include "Bike.h"

namespace vehicle {
  Bike::Bike(string _Name, string _Color)
    : Vehicle(_Color), Name(_Name){
      std::cout<< "Bike created with a nice tint of " << getColor() << std::endl;
    }

  bool Bike::IsBrakeInUse() const {
    return Brake;
  }

  string Bike::getName() const {
    return Name;
  }

  void Bike::setName(string _Name){
    Name=_Name;
  }

  void Bike::ToggleBrake(bool _Brake){
    if (IsBrakeInUse()){
      std::cout<<"Brake is no longer in use.\n";
      Brake = false;
    }else{
      std::cout<<"Brake is now being used\n.";
      Brake = true;
    }
  }

  void Bike::Drive() const{
    std::cout<<"Time to Drive this bad Bike\n";
  }
