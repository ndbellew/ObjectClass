#include <iostream>
#include "Vehicle.h"
#include "Bike.h"
#include "Carriage.h"


namespace vehicle{
  class Factory {
    public:
      void Create(std::string type);
      virtual Vehicle *CreateVehicle();
      virtual Bike *CreateBike();
      virtual Carriage *CreateCarriage();
  };
}
