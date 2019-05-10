#include <iostream>
#include <iomanip>
#include <memory>
#include <string>
#include <assert.h>
#include "../include/Bike.h"
#include "../include/Carriage.h"

using namespace vehicle;

typedef std::shared_ptr < vehicle::Vehicle > V;
typedef std::shared_ptr < vehicle::Bike > B;
typedef std::shared_ptr < vehicle::Carriage > C;
int main(){
  std::shared_ptr < Vehicle > BlueVehicle(new Vehicle(BLUE));
  assert(BlueVehicle->getColor() == BLUE);
  BlueVehicle->Drive();
  std::cout<<"Shared pointer success\n";
  C c(new Carriage("Diddle", Color::BRELLO, 3, 16));
  assert(c->getHorsePower() == 3 );
  std::cout<<"getter success\n";
  c->setColor(Color::YELLOW);
  assert(c->getColor() == Color::YELLOW);
  std::cout<<"Setter and getter successful\n";
  std::cout<<"Current Wheel Num "<<c->getWheelNum()<<std::endl;
  c->setWheelNum(15);
  assert(c->getWheelNum() == 15);
  c->Drive();
  B SweetBike(new Bike("Diddly", Color::TURQOISE, true, true));
  //may have to rework the toggle in order to test :( this would me you have to add in BadVehicleState class. :(
  SweetBike->Drive();
  return 0;
}
