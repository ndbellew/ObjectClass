#pragma once
#include <memory>
#include <iomanip>
#include <string>
#include "Color.h"
#include "Bike.h"

namespace vehicle{

  class Car{
  private: int TopSpeed;
  private: string Name;
  private: string Type;
  public: Car(int _TopSpeed, string _Name, string _Type, Color _Color);
  public: int getTopSpeed() const;
  public: string getName() const;
  public: string getType() const;
  public: void setTopSpeed(int _TopSpeed);
  public: void setName(string _Name);
  public: void setType(string _Type);
  public: void Drive() const override;
  public: ~Car();
  };
}
