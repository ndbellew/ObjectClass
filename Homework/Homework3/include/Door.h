#pragma once

#include "Material.h"
#include "BadDoorState.h"

namespace door{

  class Door{
    private: Material material;
    private: double Height;
    private: double Width;
    private: bool Open;
    private: bool Locked;
    public: Door(Material _material, double _Height, double _Width, bool _Open = true, bool _Locked=true);
    public: Material getmaterial() const;
    public: double getHeight() const;
    public: double getWidth() const;
    public: bool isOpen() const;
    public: bool isLocked() const;
    public: void setmaterial(Material _material);
    public: void setOpen(bool _Open);
    public: void setLocked(bool _Locked);
    public: void setHeight(double _Height);
    public: void setWidth(double _Width);
    public: void Secure();
    public: ~Door();
    public: static const BadDoorState ALREADY_SECURED;
    public: static const BadDoorState CANNOT_CLOSE_LOCKED_DOOR;
  };


}
