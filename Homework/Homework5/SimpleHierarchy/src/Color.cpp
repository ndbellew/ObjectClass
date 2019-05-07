#include "Color.h"

namespace vehicle {
  std::ostream& operator<<(std::ostream &out, const Color &Color){
    switch (Color) {
      case BLACK: out << "Black"; break;
      case GREEN: out << "GREEN"; break;
      case RED: out << "RED"; break;
      case BLUE: out << "BLUE"; break;
      case TOPAZ: out << "TOPAZ"; break;
      case BROWN: out << "BROWN"; break;
      case TURQOISE: out << "TURQOISE"; break;
      case PURPLE: out << "PURPLE"; break;
      case WHITE: out << "WHITE"; break;
      case GREY: out << "GREY"; break;
      case GRAY: out << "GRAY"; break;
      case YELLOW: out << "YELLOW"; break;
      case BRELLOW: out << "BRELLOW"; break;
        default:
          throw std::logic_error("missing color");
    }
    return out;
  }
}
