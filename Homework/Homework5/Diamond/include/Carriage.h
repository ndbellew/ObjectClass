#pragma once
#include <memory>
#include <string>
#include <Color.h>
#include "../include/Bike.h"

namespace vehicle{

  class Carriage: public Vehicle {
  private: std::string Name;
  public: Carriage(std::string _Name, Color _Color);
  public: std::string getName() const;
  public: void setName(std::string Name);
  public: void Drive() const;
  public: std::shared_ptr<Vehicle> clone() const;
  public: ~Carriage();
  };
}
