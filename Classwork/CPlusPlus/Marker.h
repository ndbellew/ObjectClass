#pragma once
#include "Color.h"

namespace marker{
  class Marker{
  private:
    Color color;
  private bool capped;
  public:
    Marker(Color _color){
    color=_color;
    capped=true;
  }
   Color getColor() {
    return this->color;
  }

  bool isCapped(){
    return this->capped;
  }

  void setColor(Color _color){
    this->color = _color;
  }

  void setCapped(_capped){
    this->capped=_capped;
  }
  void draw(){
    if(!isCapped()){
      cout<<"drawing in  "<<getColor()<<endl;
    }else{
      throw BAD_MARKER_CAPPED_DRAW
    }
  }

    static BadMarkerState BAD_MARKER_CAPPED_DRAW;
  }
}
