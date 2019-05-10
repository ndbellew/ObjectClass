#include <iostream>
#include <iomanip>
#include <memory>
#include <string>
#include "../include/Bike.h"
#include "../include/Carriage.h"

using namespace vehicle;

int main(){
  Bike* bike = new Bike("Petar", BLACK, true, false);
  Carriage *carriage = new Carriage("Todd", RED, 2, 300);
  Vehicle *vehicle = new Vehicle(BLACK);
  return 0;
}
