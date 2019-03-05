"use strict";

class BadOperatorState{
  constructor(problem) {
    this.problem=problem;
  }
}

class Operator {
  constructor(Location, PhoneActive){
    this.Location=Location;
    this.PhoneActive=PhoneActive;
    console.log("Constructed Operator")
    }
    makeCall(CurrentLocation, DestinationLocation){
      StartCall();
      location(DestinationLocation);
      console.log("Call established to location" + DestinationLocation);
      console.log("Call Completed");
      EndCall();
      location(CurrentLocation);

    }
    EndCall(){
      if (this.PhoneActive){
        this.PhoneActive=False;
        console.log("Phone call has ended")}
      else{
        throw Operator.CALL_STATUS_CHANGE_FAIL
      }

    }
    StartCall(){
      if (!this.PhoneActive){
        this.PhoneActive=True;
        console.log("Phone call has started")
      }
      else{
        throw Operator.CALL_STATUS_CHANGE_FAIL
      }

    }
  get location(){
    return this.Location;
  }
  set PhoneActive(value){
    this.PhoneActive=value;
  }
  set location(value){
    if(typeof value =="string"){
      this.Location=value;
    }
    else{
      throw Operator.UNREAL_LOCATION;
    }
  }
}
Operator.UNREAL_LOCATION = new BadOperatorState("Location that was chosen is not in correct format");
Operator.CALL_STATUS_CHANGE_FAIL = new BadOperatorState("Phone call status could not change because it was already in the state it was attempting to change to.");


exports.Operator = Operator;
exports.BadOperatorState = BadOperatorState;
