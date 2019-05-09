#include "../include/Color.h"
#include "../include/Car.h"
#include "../include/Bike.h"
#include <string>

namespace vehicle{

  Motorcycle::Motorcycle(int _TopSpeed, std::string _Name, std::string Type, Color _Color)
    : Bike(_Name, _Color), TopSpeed(_TopSpeed), Type(_Type){
      std::cout<<"creating a nice motorcycle for you its a "<<_Type<<std::endl;
    }

    int Motorcycle::getTopSpeed() const{
      return TopeSpeed;
    }

    std::string Motorcycle::getType() const{
      return Type;
    }

    void Motorcycle::setTopSpeed(int _TopSpeed){
      TopSpeed = _TopSpeed;
    }

    void Motorcycle::setType(std::string _Type){
      Type = _Type;
    }

    void Motorcycle::Drive() const{
      std::cout<<"Driving your Motorcycle"<<std::endl;
    }

    void Motorcycle::Trick() const{
      std::cout<<"You did a sick trick"<<std::endl;
    }

    Motorcycle::~Motorcycle(){
      std::cout<<"Deconstructing your killer motorbike\n";
    }

    std::shared_ptr<Vehicle> Motorcycle::clone() const{
      Motorcycle *copy = new Motorcycle(getTopSpeed(), getName(), getType(), getColor())
    }
}
