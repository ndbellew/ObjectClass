#include <iostream>

namespace door{

    Door::Door(Material _material, Height _height, Width _width)
      : material(_material), open(true), locked(false), height(_height), width(width)
      {
      }

      Material Door::getMaterial() const {
        return material;
      }

      Height Door::getHeight() const {
        return height;
      }

      Width Door::getWidth() const {
        return width;
      }

      bool Door::isOpen() const {
        return open;
      }

      bool Door::isLocked() const {
        return locked;
      }

      void Door::setOpen(bool _open) {
        open = _open;
      }

      void Door::setLocked(bool _locked) {
        locked = _locked;
      }

      void Door::Secure() const {
        if(!isOpen()){ //Door started closed
          if(isLocked()){ //Door is locked and closed.
            throw ALREADY_SECURED;
          }else{ // Door is closed but unlocked.
            setLocked(true);
            std::cout<<"Door has been Secured"<<std::endl;
          }
        }else{ //door Started Open
          if(isLocked()){
            throw CANNOT_CLOSE_LOCKED_DOOR
          }
          else{ // Door is open and locked.
            setOpen(false);
            std::cout << "Door has been closed\n";
            setLocked(true);
            std::cout<< "Door has been Secured\n";
          }
        }
      }

      Door::~Door() {
        std::cout <<"Destructing Door" << ((void*) this) <<std::endl;
      }

      const BadDoorState Door::ALREADY_SECURED("Door cannot be more secured than it is now!");
      const BadDoorState Door::CANNOT_CLOSE_LOCKED_DOOR("Door is currently locked while being open.\n please unlock door before we can secure it.");

}
