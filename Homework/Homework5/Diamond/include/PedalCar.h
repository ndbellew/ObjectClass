#pragma once
#include <memory>
#include <iomanip>
#include "Color.h"
#include "Motorcycle.h"
#include "Car.h"

namspace vehicle {
  class PedalCar : virtual public Bike, virtual public Carriage {
    private: int FrontWheels;
    private:  int BackWheels;
    public: PedalCar(std::string _Name, Color _Color, int _HorsePower, int _WheelNum, int FrontWheels, int BackWheels, bool _KickstandUp=true, bool _Brake=false);
    public: int getFrontWheels() const;
    public: int getBackWheels() const;
    public: void setFrontWheels(int _FrontWheels);
    public: void setBackWheels(int _Backwheels);
    public: void Drive() const;
    public: std::shared_ptr<Vehicle> clone() const;
    public: ~PedalCar();//need to work on this part.
  };
}