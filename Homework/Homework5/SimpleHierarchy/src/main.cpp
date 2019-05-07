#include <iostream>
#include <iomanip>
#include <string>
#include "../include/Car.h"

using namespace vehicle;

int main(){
  Car* car = new Car(180, "Yeetmobile", "Dabrig", BLUE);
//  std::cout<<car->getName();
  return 0;
}
