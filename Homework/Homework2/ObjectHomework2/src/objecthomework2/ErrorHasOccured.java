/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package objecthomework2;

/**
 *
 * @author nate
 */
public class ErrorHasOccured extends Exception {
    private String problem;
    ErrorHasOccured(String problem) {
        this.problem = problem;
    }
    
    public String getProblem() {
        return problem;
    }
    
    public void setProblem(String problem) {
        this.problem = problem;
    }
    
}
