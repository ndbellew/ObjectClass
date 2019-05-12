#include <iostream>
#include <stdio.h>
#include <string.h>
#include "Factory.h"

namespace vehicle{
     Vehicle *Factory::CreateVehicle(std::string type){
      if( type=="Bike")
          return new Bike(" ", Color::WHITE, true, true);
      else if (type=="Carriage")
          return new Carriage(" ", Color::WHITE, 1, 2);
      }
  }
