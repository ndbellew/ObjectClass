#include <iomanip>
#include <memory>
#include <string>
#include "Color.h"

namespace vehicle{

  class Vehicle {
    private: Color _Color
    public: Vehicle(Color _Color=Color::GREEN);
    public: Color getColor() const;
    public: void setColor(Color _Color);
    public: void Drive();
    public: ~Vehicle();
  };
}
