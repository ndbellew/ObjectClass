#pragma once
#include <memory>
#include <iomanip>
#include <string>
#include "Color.h"
#include "Vehicle.h"

namespace vehicle{

  class Bike : virtual public Vehicle {
    private:
      bool Brake = false;
      bool KickstandUp;
    public:
      Bike(std::string _Name, Color _Color, bool _KickstandUp, bool _Brake);
      bool IsBrakeInUse() const;
      bool isKickstandUp() const;
      void setBrake(bool _Brake);
      void setKickstand(bool _Kickstand);
      void Drive() const;
      std::shared_ptr<Vehicle> clone() const;
      ~Bike();
  };
}
