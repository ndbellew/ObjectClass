#include <iostream>
#include "../include/Door.h"
namespace door{

    Door::Door(Material _material, double _Height, double _Width, bool _Open, bool _Locked)
      : material(_material), Open(_Open), Locked(_Locked), Height(_Height), Width(_Width)
      {
        std::cout<<"Door created with a nice "<<_material<<" material\n";
      }

      Material Door::getmaterial() const {
        return material;
      }

      double Door::getHeight() const {
        return Height;
      }

      double Door::getWidth() const {
        return Width;
      }

      bool Door::isOpen() const {
        return Open;
      }


      bool Door::isLocked() const {
        return Locked;
      }

      void Door::setmaterial(Material _material){
        material = _material;
      }

      void Door::setOpen(bool _Open) {
        Open = _Open;
      }

      void Door::setLocked(bool _Locked) {
        Locked = _Locked;
      }

      void Door::setHeight(double _Height){
        Height = _Height;
      }

      void Door::setWidth(double _Width){
        Width = _Width;
      }

      std::shared_ptr<Door> Door::clone() const{
        Door *copy = new Door(getmaterial(), getHeight(), getWidth(), isOpen(), isLocked());
        return std::shared_ptr<Door>(copy);
      }
      void Door::Secure() {
        if(!isOpen()){ //Door started closed
          if(isLocked()){ //Door is Locked and closed.
            throw ALREADY_SECURED;
          }else{ // Door is closed but unLocked.
            setLocked(true);
            std::cout<<"Door has been Secured"<<std::endl;
          }
        }else{ //door Started Open
          if(isLocked()){
            throw CANNOT_CLOSE_LOCKED_DOOR;
          }
          else{ // Door is Open and Locked.
            setOpen(false);
            std::cout << "Door has been closed\n";
            setLocked(true);
            std::cout<< "Door has been Secured\n";
          }
        }
      }

      Door::~Door() {
        std::cout <<"Destructing Door at " << ((void*) this) <<std::endl;
      }

      const BadDoorState Door::ALREADY_SECURED("Door cannot be more secured than it is now!");
      const BadDoorState Door::CANNOT_CLOSE_LOCKED_DOOR("Door is currently Locked while being Open.\n please unlock door before we can secure it.");

}
