#include <iomanip>
#include <memory>
#include <string>
#include "Color.h"

namespace vehicle{

  class Vehicle {
    private: bool InUse = false;
    public: Vehicle(string _Name, string _Color, int _TopSpeed);
    public: bool setInUse(bool _InUse);
    public: Color getcolor() const;
    public: bool IsInUse() const;
    public: void ToggleUse() const=0;
  };
}
