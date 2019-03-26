#pragma once

#include "Material.h"
#include "BadDoorState.h"

namspace door{

  class Door{
    private: const Material material;
    private: const Height height;
    private: const Width width;
    private: bool open;
    private: bool locked;
    public: Door(Material _material, Height _height, Width _width);
    public: Door getMaterial() const;
    public: Door getHeight() const;
    public: Door getWidth() const;
    public: bool isOpen() const;
    public: bool isLocked() const;
    public: void setOpen(bool _open) const;
    public: void setLocked(bool _locked) const;
    public: void Secure() const;
    public: ~Door();
    public: static const BadDoorState ALREADY_SECURED;
    public: static const BadDoorState CANNOT_CLOSE_LOCKED_DOOR;`
  };


}
