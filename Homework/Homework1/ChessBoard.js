"use strict";

class ChessErrorState{
  constructor(error){
    this.error=error;
  }
}

class Player{
  constructor(color){
    console.log("constructed player");
    this._color=color;
  }

  move(piece){
    switch(piece){
      case "pawn":

      break;
      case "rook":
      break;
      case "knight":
      break;
      case "bishop":
      break;
      case "queen":
      break;
      case "king":
      break;
    }
  }
}
