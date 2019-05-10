#pragma once
#include <memory>
#include <string>
#include <Color.h>
#include "Vehicle.h"

namespace vehicle{

  class Carriage: virtual public Vehicle {
    private: int HorsePower;
    private: int WheelNum;
    public: Carriage(std::string _Name, Color _Color, int _HorsePower, int _WheelNum);
    public: int getHorsePower() const;
    public: int getWheelNum() const;
    public: void setHorsePower(int _HorsePower);
    public: void setWheelNum(int _WheelNum);
    public: void Drive() const;
    public: std::shared_ptr<Vehicle> clone() const;
    public: ~Carriage();
  };
}
