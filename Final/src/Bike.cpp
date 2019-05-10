#include <iomanip>
#include "../include/Bike.h"

namespace vehicle {
  Bike::Bike(std::string _Name, Color _Color, bool _KickstandUp, bool _Brake)
    : Vehicle(_Color, _Name), KickstandUp(_KickstandUp), Brake(_Brake){
      std::cout<< "Bike created with a nice tint of " << getColor() << std::endl;
    }

  bool Bike::IsBrakeInUse() const {
    return Brake;
  }

  bool Bike::isKickstandUp() const{
    return KickstandUp;
  }

  void Bike::ToggleBrake(){
    if (Brake){
      std::cout<<"Brake is no longer in use.\n";
      Brake = false;
    }else{
      std::cout<<"Brake is now being used\n.";
      Brake = true;
    }
  }

    void Bike::ToggleKickstand(){
      if (KickstandUp){
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
  std::shared_ptr<Vehicle> Bike::clone() const {
    Bike *copy = new Bike(getName(), getColor(), isKickstandUp(), IsBrakeInUse());
    return std::shared_ptr<Vehicle>(copy);
  }
  Bike::~Bike(){
    std::cout<<"Deconstructing Bike\n";
  }
}
