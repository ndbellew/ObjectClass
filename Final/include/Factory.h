#include <iostream>
#include "Vehicle.h"
#include "Bike.h"
#include "Carriage.h"


namespace vehicle{
  class Factory {
    public: Vehicle *CreateVehicle(std::string type);
  };
}
