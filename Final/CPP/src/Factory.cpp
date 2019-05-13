#include <iostream>
#include <stdio.h>
#include <string.h>
#include "Factory.h"

namespace vehicle{
  void Create(std::string type){
    if(type=="Vehicle")return CreateVehicle();
    else if(type=="Bike")return CreateBike();
    else if (type=="Carriage")return CreateCarriage();
  }
    Vehicle *Factory::CreateVehicle(){return new Vehicle("Vehicle", Color::WHITE);}
    Bike *Factory::CreateBike(){return new Bike("Bike", Color::BLACK, true, true);}
    Carriage *Factory::CreateCarriage(){return new Carriage(){return new Carriage("Carriage", Color::TOPAZ,1,2);}
  }
