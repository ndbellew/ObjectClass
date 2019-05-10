#include <iostream>
#include <iomanip>
#include <memory>
#include <string>
#include "../include/Bike.h"
#include "../include/Carriage.h"

using namespace vehicle;

int main(){
  Bike* bike = new Bike("Schwin", BLUE, true, false);
  Carriage *carriage = new Carriage("That Carraige that the bank uses as a mascot", RED, 2, 300);
  Vehicle *vehicle = new Vehicle(BLACK);
  return 0;
}
