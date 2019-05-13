#pragma once

#include <iostream>

namespace vehicle{
  enum Color {
    BLACK,
    GREEN,
    RED,
    BLUE,
    TOPAZ,
    BROWN,
    TURQOISE,
    PURPLE,
    WHITE,
    GREY,
    GRAY,
    YELLOW,
    BRELLO
  };

  std::ostream& operator<<(std::ostream &out, const Color &color);
}
