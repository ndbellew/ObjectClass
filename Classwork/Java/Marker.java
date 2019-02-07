

package com.github.ndbellew.marker;
/*
*
*  @Author ndbellew
*/
public class Marker{
  private Color color;
  private boolean capped;

  Marker(Color color){
    this.color = color;
    this.capped = true;
  }

  public Color getColor() {
    return color;
  }
  public void setColor(Color color){
    this.color = color;
  }
  public boolean isCapped(){
    return capped;
  }
  public void setCapped(boolean capped){
    this.capped = capped;
  }
  public void draw() throws BadMarkerState{
    if(!isCapped()) {
      System.out.println("drawing in "+getColor());
    }else{
      throw Marker.BAD_MARKER_CAPPED_DRAW;
    }
  }
  static public BadMarkerState BAD_MARKER_CAPPED_DRAW =
    new BadMarkerState("Drawing with capped marker is bad");
}
