#include <iomanip>
#include "Bike.h"

namespace vehicle {
  Bike::Bike(string _Type, string _Color){
    : Vehicle(_Color), Type(_Type)
  }
}
