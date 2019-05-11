#pragma once
#include <iostream>

namespace door{
  enum Material {
    OAK,
    IRON,
    BIRCH,
    JUNGLE,
    SPRUCE,
    ACACIA
  };

  std::ostream& operator<<(std::ostream &out, const Material &material);
}
