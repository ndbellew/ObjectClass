#include "../include/Door.h"
#include <iostream>
#include <string>
#include <assert.h>
#include <iomanip>
#include <memory>

using namespace door;

typedef std::shared_ptr < door::Door > D;

int main() {
  D ID(new Door(IRON, 10.1, 3.2, true, false));
  assert(ID->getmaterial() == Material::IRON);
  std::cout<<"Material is "<<ID->getmaterial()<<std::endl;
  ID->setHeight(10);
  assert(ID->getHeight() == 10);
  std::cout<<"Height is now "<<ID->getHeight()<<std::endl;
  ID->setOpen(false);
  assert(ID->isOpen() == false);
  std::cout<<"The Door is now closed, lets secure it\n";
  ID->Secure();
  assert(ID->isLocked() == true);
  std::cout<<"Door is now locked and door is closed. Last test open door unlock.\n";
  ID->setLocked(false);
  ID->setOpen(true);
  assert(ID->isOpen() == true);
  assert(ID->isLocked() == false);
  std::cout<<"Alright door is completely unsecure begin full test\n";
  ID->Secure();
  assert(ID->isLocked()==true);
  std::cout<<"Door test successful\n";
  return 0;
}
