#pragma once
#include <memory>
#include "Color.h"

namespace vehicle{

   class Vehicle {
    private:
      Color color;
      std::string Name;
    public:
      Vehicle(Color color=Color::GREEN, std::string _Name="Timothy Foster");
      Color getColor() const;
      std::string getName() const;
      void setName(std::string Name);
      void setColor(Color color);
      virtual void Drive() const;
      std::shared_ptr<Vehicle> clone() const;
      ~Vehicle();
  };
}
