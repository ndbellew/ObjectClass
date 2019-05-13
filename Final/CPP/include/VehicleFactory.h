#include "Bike.h"
#include "Carriage.h"
#include "Vehicle.h"
#include "Color.h"
#include <iomanip>

namespace vehicle{
  class VehicleFactory{
    public:
      virtual vehicle::Vehicle *create() = 0;
      virutal ~VehicleFactory();
    };

}
