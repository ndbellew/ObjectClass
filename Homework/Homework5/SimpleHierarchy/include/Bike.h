#pragma once
#include <memory>
#include <iomanip>
#include <string>
#include "Color.h"
#include "Vehicle.h"

namespace vehicle{

  class Bike : public Vehicle {
    private: bool Brake = false;
    private: std::string Name;
    public: Bike(std::string _Name, Color _Color);
    public: bool IsBrakeInUse() const;
    public: std::string getName() const;
    public: void setName(std::string _Name);
    public: void ToggleBrake(bool _Brake);
    public: void Drive() const;
  };
}
