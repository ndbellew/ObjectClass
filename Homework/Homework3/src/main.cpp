#include "Door.h";

using namespace door;

#include <memory>

void SecureDoor(const Door &door) {
  door.Secure();
}

int main() {
  std::shared_ptr < Door > StrongIronDoor(new Door(Material::IRON, 10, 3));
  Door *Oakdoor = new Door(Material::OAK, 6,3);


  delete Oakdoor;
}
