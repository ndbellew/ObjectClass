/*
Author: Nathan Bellew
Assignment: Homework 1
Language: Javascript
*/

"use strict";

class checkerPeiceFail{
    constructor(problem) {
        this.problem=problem;
    }
}

class checkerPiece {
  constructor(color, alive, positionx, positiony){
    this._color = color;
    this._alive = alive;
    this._positionx = positionx;
    this._positiony = positiony;
  }

  move(newx, newy){
    if(!this._alive){
      throw checkerPiece.DEAD_CANNOT_WALK;
    } else {
      if (newx < _positionx){
        throw checkerPiece.BAD_MOVEMENT_DIRECTION;
      } else{
        this._positionx= newx;
        this._positiony = newy;
    }
  }
}

  get color(){
    return this._color;
  }
  get positionx(){
    return this._positionx;
  }
  get positiony(){
    return this._positiony;
  }
  get alive(){
    return this._alive
  }

  set alive(status){
    this._alive=status;
  }
}

checkerPiece.BAD_MOVEMENT_DIRECTION= new checkerPeiceFail("Cannot move backwards on checker board");
checkerPiece.DEAD_CANNOT_WALK = new checkerPeiceFail("Dead pieces cannot play");
checkerPiece.INCORRECT_ALIVE_DATA = new checkerPeiceFail("alive is already set to what you are trying to do");

exports.checkerPiece = checkerPiece;
exports.checkerPeiceFail = checkerPeiceFail;
