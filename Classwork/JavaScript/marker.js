/*
Object-oriented Marker in Javascript
Author: Warren Macevoy
Copier: Nathan Bellew



*/

"use strict";

class BadMarkerState {
    constructor(problem) {
        this.problem=problem;
    }
}

class WritingUtensil {
    constructor(color){
      console.log("Constructed writing utensil")
      this._color = color;
    }
    write(){
      throw new Error("write is Abstract")
    }

    get color(){
      return this._color;
    }
}

class Marker extends WritingUtensil {
    constructor(color) {
        console.log("constructed marker");
        this._color = color;
        this._capped = true;
    }

    draw() {
        if (!this._capped) {
           console.log("writing in " + this._color);
        } else {
            throw Marker.BAD_MARKER_CAPPED_draw;
        }
    }

    get color() {
        return this._color;
    }

    get capped() {
        return this._capped;
    }

    set capped(value) {
        if (typeof value == "boolean") {
            this._capped = value;
        } else {
            throw Marker.BAD_MARKER_CAPPED_INVALID;
        }
    }
}

Marker.BAD_MARKER_CAPPED_draw = new BadMarkerState("writing with capped marker is bad");
Marker.BAD_MARKER_CAPPED_INVALID = new BadMarkerState("capped must be true or false");


exports.Marker = Marker;
exports.BadMarkerState = BadMarkerState;
