
#include "Marker.h"

namespace marker {
    Marker::Marker(Color _color) {
      color = _color;
      capped = true;
    }
   Marker::Color getColor() {
    return this->color;
  }

  Marker::bool isCapped(){
    return this->capped;
  }

  Marker::void setColor(Color _color){
    this->color = _color;
  }

  Marker::void setCapped(_capped){
    this->capped=_capped;
  }
  Marker::void draw(){
    if(!isCapped()){
      cout<<"drawing in  "<<getColor()<<endl;
    }else{
      throw BAD_MARKER_CAPPED_DRAW
    }
  }
}
