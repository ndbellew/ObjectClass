#pragma once
#include <memory>
#include <string>
#include <Color.h>
#include "Vehicle.h"

namespace vehicle{

  class Carriage: virtual public Vehicle {
    private: int HorsePower;
     int WheelNum;
    public: Carriage(std::string _Name, Color _Color, int _HorsePower, int _WheelNum);
     int getHorsePower() const;
     int getWheelNum() const;
     void setHorsePower(int _HorsePower);
     void setWheelNum(int _WheelNum);
     void Drive() const;
     std::shared_ptr<Vehicle> clone() const;
     ~Carriage();
  };
}
