#pragma once
#include <memory>
#include <iomanip>
#include <string>
#include "Color.h"
#include "../include/Bike.h"

namespace vehicle{

  class Motorcycle : public Bike{
    private: int TopSpeed;
    private: std::string Type;
    public: Motorcycle(int _TopSpeed, std::string _Name, std::string _Type, Color _Color);
    public: int getTopSpeed() const;
    public: std::string getType() const;
    public: void setTopSpeed( int _TopSpeed);
    public: void setType(std::string _Type);
    public: void Drive() const;
    public: void Trick() const;
    public: std::shared_ptr<Vehicle> clone() const;
    public: ~Motorcycle();
  }
}
