#include "../include/Color.h"
#include "../include/Car.h"
#include "../include/Bike.h"
#include <string>

namespace vehicle{

  Car::Car(int _TopSpeed, std::string _Name, std::string _Type, Color _Color)
  : Bike(_Name, _Color), TopSpeed(_TopSpeed), Name(_Name){
    std::cout<<"Creating car with color "<< _Color << ", a type "<<getType();
    std::cout<<", a TopSpeed of "<<getTopSpeed()<<", and the name of "<<getName();
    std::cout<<std::endl;
  }

  int Car::getTopSpeed() const{
    return TopSpeed;
  }

  std::string Car::getName() const{
    return Name;
  }

  std::string Car::getType() const {
    return Type;
  }

  void Car::setTopSpeed(int _TopSpeed){
    TopSpeed=_TopSpeed;
  }

  void Car::setName(std::string _Name){
    Name = _Name;
  }

  void Car::setType(std::string _Type){
    Type = _Type;
  }

  void Car::Drive() const{
    std::cout<<"We are driving a car!!\n";
  }

  std::shared_ptr<Vehicle> Car::clone() const {
    Car *copy = new Car(getName(), getColor());
    return std::shared_ptr<Vehicle>(copy);
  }
  Car::~Car(){
    std::cout<<"Deconstructing that sweet car of yours\n";
  }
}
