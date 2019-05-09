#pragma once
#include <memory>
#include <iomanip>
#include <string>
#include "Color.h"
#include "../include/Bike.h"

namespace vehicle{

  class Car : public Vehicle {
  private: int TopSpeed;
  private: std::string Name;
  private: std::string Type;
  public: Car(int _TopSpeed, std::string _Name, std::string _Type, Color _Color);
  public: int getTopSpeed() const;
  public: std::string getName() const;
  public: std::string getType() const;
  public: void setTopSpeed(int _TopSpeed);
  public: void setName(std::string _Name);
  public: void setType(std::string _Type);
  public: void Drive() const;
  public: std::shared_ptr<Vehicle> clone() const;
  public: ~Car();
  };
}
