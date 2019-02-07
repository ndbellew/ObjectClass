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

Op1 = new Operator(0001, 1);
Op2 = new Operator(0002, 2);
Op3 = new Operator(0003, 3);
Op4 = new Operator(0004, 4);
operators = [Op1, Op2, Op3, Op4];
//Setup switch statement for current call, check if call is going to same location so operator doesnt do much
//if not in same area have it search for right area then switch to each operator that would take call.
//then setup a test to make sure it works
//finally figure how to create a test in test document. 
function makeCall(CurrentLocation, DestinationLocation){
  switch(CurrentLocation){

  }
}

exports.Operator = Operator;
exports.BadOperatorState = BadOperatorState;
