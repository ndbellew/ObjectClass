#pragma once
#include <memory>
#include <iomanip>
#include <string>
#include "Color.h"
#include "Carriage.h"

namespace vehicle{

  class Car : public Carriage {
    private: int TopSpeed;
    private: std::string Type;
    public: Car(int _TopSpeed, std::string _Name, std::string _Type, Color _Color);
    public: int getTopSpeed() const;
    public: std::string getName() const;
    public: std::string getType() const;
    public: void setTopSpeed(int _TopSpeed);
    public: void setType(std::string _Type);
    public: void Drive() const;
    public: std::shared_ptr<Vehicle> clone() const;
    public: ~Car();
  };
}
