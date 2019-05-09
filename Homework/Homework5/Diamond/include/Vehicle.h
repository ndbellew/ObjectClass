#pragma once
#include <memory>
#include "Color.h"

namespace vehicle{

  class Vehicle {
    private: Color _Color;
    public: Vehicle(Color _Color=Color::GREEN);
    public: Color getColor() const;
    public: void setColor(Color _Color);
    public: void Drive() const;
    public: std::shared_ptr<Vehicle> clone() const;
    public: ~Vehicle();
  };
}
