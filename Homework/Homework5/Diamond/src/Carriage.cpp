#include <iomanip>
#include "../include/Carriage.h"

namespace vehicle{
  Carriage::Carriage(std::string _Name, Color _Color, int _HorsePower, int _WheelNum)
    : Vehicle(_Color), Name(_Name), HorsePower(_Horse), WheelNum(_WheelNum) {
      std::cout<<"Carriage created my leige\n";
    }

    std::string Carriage::getName() const{
      return Name;
    }

    int Carriage::getHorsePower() const{
      return HorsePower;
    }

    int Carriage::getWheelNum() const{
      return WheelNum;
    }

    void Carriage::setName(std::string _Name){
      Name=_Name;
    }

    void Carriage::setHorsePower(int _HorsePower){
      HorsePower = _HorsePower;
    }

    void Carriage::setWheelNum(int _WheelNum){
      WheelNum = _WheelNum;
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
