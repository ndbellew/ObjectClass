#pragma once
#include <memory>
#include <iomanip>
#include <string>
#include "Color.h"
#include "Vehicle.h"
#include "BadVehicleState.h"

namespace vehicle{

  class Bike : virtual public Vehicle {
    private: bool Brake = false;
    private: bool KickstandUp;
    public: Bike(std::string _Name, Color _Color, bool _KickstandUp, bool _Brake);
    public: bool IsBrakeInUse() const;
    public: bool isKickstandUp() const;
    public: void setBrake(bool _Brake);
    public: void setKickstand(bool _Kickstand);
    public: void Drive() const;
    public: std::shared_ptr<Vehicle> clone() const;
    public: ~Bike();

    public: static const BadVehicleState KICKSTAND_IS_DOWN;
  };
}
