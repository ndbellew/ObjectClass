/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package objecthomework2;

import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;
import static org.junit.Assert.*;

/**
 *
 * @author nate
 */
public class PhoneTest {
    
    public PhoneTest() {
    }
    
    @BeforeClass
    public static void setUpClass() {
    }
    
    @AfterClass
    public static void tearDownClass() {
    }
    
    @Before
    public void setUp() {
    }
    
    @After
    public void tearDown() {
    }

    /**
     * Test of getColor method, of class Phone.
     */
    @org.junit.Test
    public void testGetColor() {
        System.out.println("getColor");
        Phone instance = null;
        PhoneColor expResult = null;
        PhoneColor result = instance.getColor();
        assertEquals(expResult, result);
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }

    /**
     * Test of setColor method, of class Phone.
     */
    @org.junit.Test
    public void testSetColor() {
        System.out.println("setColor");
        PhoneColor color = null;
        Phone instance = null;
        instance.setColor(color);
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }

    /**
     * Test of inCall method, of class Phone.
     */
    @org.junit.Test
    public void testInCall() {
        System.out.println("inCall");
        Phone instance = null;
        boolean expResult = false;
        boolean result = instance.inCall();
        assertEquals(expResult, result);
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }

    /**
     * Test of setInCall method, of class Phone.
     */
    @org.junit.Test
    public void testSetInCall() {
        System.out.println("setInCall");
        boolean ActiveCall = false;
        Phone instance = null;
        instance.setInCall(ActiveCall);
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }

    /**
     * Test of makeCall method, of class Phone.
     */
    @org.junit.Test
    public void testMakeCall() throws Exception {
        System.out.println("makeCall");
        Phone instance = null;
        instance.makeCall();
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }

    /**
     * Test of endcall method, of class Phone.
     */
    @org.junit.Test
    public void testEndcall() throws Exception {
        System.out.println("endcall");
        Phone instance = null;
        instance.endcall();
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }
    
}
