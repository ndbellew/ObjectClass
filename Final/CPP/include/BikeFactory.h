#include "VehicleFactory.h"

namespace vehicle{
  class BikeFactory : public VehicleFactory{
  private:
    vehicle::Color color;
    std::string Name;
    bool Brake;
    bool KS;
  public:
    BikeFactory *setColor(vehicle::Color _color);
    BikeFactory *setName(std::string _name);
    BikeFactory *setBrake(bool _Brake);
    BikeFactory *setKS(bool _KS);
    BikeFactory(vehicle::Color _color = vehicle::Color::WHITE, std::string _name = "Bike", bool _Brake = false, bool _KS = true)
      : color(_color), Name(_name), Brake(_Brake), KS(_KS){}
    virtual vehicle::Vehicle *create() override{
      return new vehicle::Bike(color, Name, Brake, KS);
    }

  };
}
