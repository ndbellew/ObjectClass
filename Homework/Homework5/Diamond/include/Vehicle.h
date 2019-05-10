#pragma once
#include <memory>
#include "Color.h"

namespace vehicle{

  class Vehicle {
    private: Color color;
    public: Vehicle(Color color=Color::GREEN);
    public: Color getColor() const;
    public: void setColor(Color color);
    public: void Drive() const;
    public: std::shared_ptr<Vehicle> clone() const;
    public: ~Vehicle();
  };
}
