#include <iostream>
#include <iomanip>
#include <memory>
#include <string>
#include <assert.h>
#include "../include/Bike.h"
#include "../include/Carriage.h"
#include "../include/Factory.h"

using namespace vehicle;

int main(){
  Vehicle *V = new Vehicle;
  Factory *f= new Factory;
  Bike *B = f->CreateVehicle("Bike");
  V->setName("Boberto");
  assert(V->getName() == "Boberto");
  assert(V->isKickstandUp());
  //V->isKickstandup();
  //B->setKickstand(false);
  //assert(B->isKickstandUp() == false);
  //std::cout<<"Kickstand Change successful"<<std::endl;
  //B->setBrake(false);
  //assert(B->IsBrakeInUse() == false);
  //std::cout<<"Kickstand Change successful"<<std::endl;
  //B->setColor(TURQOISE);
  //assert(B->getColor() == TURQOISE);
  //std::cout<<"Kickstand Change successful"<<std::endl;

  V->Drive();
  //V = f->CreateVehicle("Carriage")
  //V->Drive();
  return 0;
}
