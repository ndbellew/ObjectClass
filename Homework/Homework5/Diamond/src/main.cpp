#include <iostream>
#include <iomanip>
#include <memory>
#include <string>
#include "../include/Car.h"

using namespace vehicle;

int main(){
  PedalCar* pc = new PedalCar("Swan", BLUE, 2, 6,2,4,true,false);
  Bike* bike = new Bike("Petar", BLACK, true, false);
  Carriage *carriage = new Carriage("Todd", RED, 2, 300);
  Vehicle *vehicle = new Vehicle(BLACK);
  //std::cout<<car->getName();
  return 0;
}
