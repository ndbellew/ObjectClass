#pragma once
#include <memory>
#include <iomanip>
#include <string>
#include "Color.h"
#include "Vehicle.h"

namespace vehicle{

  class Bike : virtual public Vehicle {
    private: bool Brake = false;
    private: std::string Name;
    private: bool KickstandUp;
    private: bool Brake;
    public: Bike(std::string _Name, Color _Color, bool _KickstandUp, bool _Brake);
    public: bool IsBrakeInUse() const;
    public: std::string getName() const;
    public: bool isKickstandUp() const;
    public: void setName(std::string _Name);
    public: void ToggleBrake();
    public: void ToggleKickstand();
    public: void Drive() const;
    public: std::shared_ptr<Vehicle> clone() const;
    public: ~Bike();
  };
}