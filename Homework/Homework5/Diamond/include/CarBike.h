#pragma once
#include <memory>
#include <iomanip>
#include "Color.h"
#include "Motorcycle.h"
#include "Car.h"

namspace vehicle {
  class PedalCar : public Bike, public Carriage {
  private: int FrontWheels;
private:  int BackWheels;
public: PedalCar();//need to work on this part.
  };
}
