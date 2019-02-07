"use strict";

class BadOperatorState{
  constructor(problem) {
    this.problem=problem;
  }
}

class Operator {
  constructor(ID, Location){
    this.ID = ID;
    this.Location=Location;
    console.log("Constructed Operator")
  }
  get id(){
    return this.ID;
  }
  get location(){
    return this.location;
  }
  set location(value){
    if(typeof value =="string"){
      this.location=value;
    }
    else{
      throw Operator.UNREAL_LOCATION;
    }
  }
}

Operator.UNREAL_LOCATION = new BadOperatorState("Location that was chosen is not in correct format");

exports.Operator = Operator;
exports.BadOperatorState = BadOperatorState;
