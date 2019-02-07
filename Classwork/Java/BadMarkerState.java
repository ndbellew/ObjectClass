

package com.github.ndbellew.marker;
/*
*
*  @Author ndbellew
*/
public class BadMarkerstate extends Throwable{
  String problem;
  BadMarkerState(String problem){
    this.problem = problem;
  }

  public String getProblem() {
    return problem;
  }

  public void setProblem(String problem){
    this.problem = problem;
  }
}
