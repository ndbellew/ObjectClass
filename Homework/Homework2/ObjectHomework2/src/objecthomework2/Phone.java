/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
*I have no idea what to make for this class
 */
package objecthomework2;

/**
 *
 * @author ndbellew
 */
public class Phone {
    private PhoneColor color;
    private boolean ActiveCall;
    
    public Phone(PhoneColor color){
        this.color = color;
        this.ActiveCall = false;
    }
    
    public PhoneColor getColor() {
        return color;
    }
    
    public void setColor(PhoneColor color) {
        this.color = color;
    }
    
    public boolean inCall() {
        return ActiveCall;
    }
    
    public void setInCall(boolean ActiveCall) {
        this.ActiveCall = ActiveCall;
    }
    
    public void makeCall() throws ErrorHasOccured {
        if (!ActiveCall){
            System.out.println("Call established.");
            setInCall(true);
        } else {
            throw CALL_FAILED_ALREADY_IN_CALL;
        }
    }
    public void endcall () throws ErrorHasOccured {
       if (ActiveCall){
           System.out.println("Call has ended.");
           setInCall(false);
       } else {
           throw NOT_IN_CALL;
       }
    }
    
    static public ErrorHasOccured CALL_FAILED_ALREADY_IN_CALL = new ErrorHasOccured("Unable to make call while still in call");
    static public ErrorHasOccured NOT_IN_CALL = new ErrorHasOccured("Unable to end call, currently not in call");
            
    
}
