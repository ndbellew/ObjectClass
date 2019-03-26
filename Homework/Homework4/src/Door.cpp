#include <iostream>

namespace door{

    Door::Door(Material _material, Height _height, Width _width)
      : material(_material), open(false), locked(false), height(_height), width(width)
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

      void Marker::setOpen(bool _open) {
        open = _open;
      }

      void


}
