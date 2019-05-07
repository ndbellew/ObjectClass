#pragma once
#include "Color.h"
#include "Car.h"

namespace vehicle{

  Car::Car(int _TopSpeed, string _Name, std::string _Type, Color _Color)
  : Bike(_Name, _Color), TopSpeed(_TopSpeed), Name(_Name){
    std::cout<<"Creating car with color "<< getColor() << ", a type "<<getType();
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

  void Car::setName(string _Name){
    Name = _Name;
  }

  void Car::setType(string _Type){
    Type = _Type;
  }

  void Car::Drive() const{
    std::cout<<"We are driving a car!!\n";
  }

  Car::~Car(){
    std::cout<<"Deconstructing that sweet car of yours\n";
  }
}
