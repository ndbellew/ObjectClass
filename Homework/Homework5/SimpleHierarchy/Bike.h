#pragma once
#include <memory>
#include <iomanip>
#include <string>
#include "Vehicle.h"

namespace vehicle{

  class Bike : public Vehicle {
    private: bool Brake;
    private: string Color;
    private: string Type;
    public: Bike(string _Type, string Color);
    public: bool IsBrakeInUse();
    public: void setBrake();
    public: void ToggleUse() const override;
  }
};
