#include "../include/Material.h"
#include <iostream>

namespace door {
  std::ostream& operator<<(std::ostream &out, const Material &material){
    switch (Color) {
      case OAK: out << "Oak"; break;
      case IRON: out << "Iron"; break;
      case BIRCH: out << "Birch"; break;
      case JUNGLE: out << "Jungle"; break;
      case SPRUCE: out << "Spruce"; break;
      case ACACIA: out << "Acacia"; break;
        default:
          throw std::logic_error("missing material");
    }
    return out;
  }
}
