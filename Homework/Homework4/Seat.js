

class SeatFailure{
  constructor(problem){
    this.problem = problem;
  }
}

class Seat {
  constructor(name, color, inUse){
    this.name = name;
    this.color = color;
    this.inUse = inUse;
  }
  IsInUse(){
    if (this.inUse){
      return true;
    }
    else{
      return false;
    }
  }
  getName(){
    alert(this.name);
  }
  getcolor(){
    alert(color);
  }
  UseChair(){
    if(IsInUse()){
      throw Seatfailure.AlreadyInUse;
    }
    else{
      this.inUse = true;
      alert("Seat is in use");
    }
  }

}
class RecliningChair extends Seat{
  constructor(seat_number, reclined) {
    console.log("Reclining Chair Created");
    super(seat_number, reclined);
    this.seat_number = seat_number;
    this.reclined = reclined;
    this.name= "reclined chair";

  }
  setSize(seat_number){
    this.seat_number = seat_number;
  }
  toggleRecline(){
    if (this.reclined){
      this.reclined = false;
    }else{
      this.reclined = true;
    }
  }
  UseChair(){
    if(IsInUse()&& seat_number>0){
      throw Seatfailure.AlreadyInUse;
    }
    else{
      this.inUse = true;
      this.seat_number -= 1;
      alert("Reclining Chair is in use");
    }
  }
}

class Couch extends Recliner {
  constructor(){
    console.log("Couch Created");
    this.seat_number = 1;
  }
  toggleRecline(){
    if (this.reclined){
      this.reclined = false;
    }else{
      this.reclined = true;
    }
  }
  UseChair(){
    if(IsInUse()&& seat_number>0){
      throw Seatfailure.AlreadyInUse;
    }
    else{
      this.inUse = true;
      this.seat_number -= 1;
      alert("Couch is in use");
    }
  }
}

SeatFailure.AlreadyInUse = new SeatFailure("Seat already in use and cannot hold more occupants");
exports.SeatFailure = SeatFailure;
