#pragma once
#include <memory>
#include "Color.h"

namespace vehicle{

  class Vehicle {
    private: Color color;
    private: std::string Name;
    public: Vehicle(Color color=Color::GREEN, std::string _Name="Timothy Foster");
    public: Color getColor() const;
    public: std::string getName() const;
    public: void setName(std::string Name);
    public: void setColor(Color color);
    public: void Drive() const;
    public: std::shared_ptr<Vehicle> clone() const;
    public: ~Vehicle();
  };
}
