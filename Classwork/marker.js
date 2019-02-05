"use strict";

class BadMarkerState{
  constructor(problem){
    this.problem=problem;
  }
}


class Marker{
  constructor(color){
    console.log("constructed marker");
    this._color = color;
    this._capped=true;
  }
  draw(){
    if (! this._capped){
      console.log("drawing in "+this.color);
    }else{
      console.log(false)
      throw new BadMarkerState("drawing with capped marker is bad");
    }
  }

  get color(){
    return this._color;
  }

  get capped(){
    return this._capped;
  }

  set capped(value){
    if (typeof value == "boolean"){
      this._capped = value;
    }else{
        throw new BadMarkerState("capped must be true or false")
    }
  }
}
class MarkerTest {
  blackMarker() {
    return new Marker("black")
  }
  redMarker(){
    return new Marker("red")
  }

  testDrawCappedBad() {
    var ok = false;
    try{
      var black = this.blackMarker();
      black.draw();
    }catch(err){
      ok = true;
    }
    if (!ok){throw "bad";}

  }
  testDrawUncappedOk(){
    var red = this.redMarker();
    red.capped=false;
    red.draw();
  }

  testIsBlackMarkerBlack(){
    var black = this.blackMarker();
    if (black.color !== "black"){
      throw "bad";
    }
  }
  testAll(){
    this.testDrawCappedBad();
    this.testDrawUncappedOk();
    this.testIsBlackMarkerBlack();
  }
}

var markerTest = new MarkerTest();
markerTest.testAll();
