#include <iomanip>
#include "../include/Carriage.h"

namespace vehicle{
  Carriage::Carriage(std::string _Name, Color _Color)
    : Vehicle(_Color), Name(_Name) {
      std::cout<<"Carriage created my leige\n";
    }

    std::string Carriage::getName() const{
      return Name;
    }

    void Carriage::setName(std::string _Name){
      Name=_Name;
    }

    void Drive() const{
      std::cout<<"My liege, you are now driving a Carriage.\n";
    }

    std::shared_ptr<Vehicle> Carriage::clone() const{
      Carriage *copy = new Carriage(getName(), getColor());
      return std::shared_ptr<Vehicle>(copy);
    }

    Carriage::~Carriage(){
      std::cout<<"Now Deconstructing Carriage, my liege.\n";
    }
}
