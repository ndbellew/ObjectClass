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
public class PhoneColorTest {
    
    public PhoneColorTest() {
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
     * Test of values method, of class PhoneColor.
     */
    @org.junit.Test
    public void testValues() {
        System.out.println("values");
        PhoneColor[] expResult = null;
        PhoneColor[] result = PhoneColor.values();
        assertArrayEquals(expResult, result);
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }

    /**
     * Test of valueOf method, of class PhoneColor.
     */
    @org.junit.Test
    public void testValueOf() {
        System.out.println("valueOf");
        String name = "";
        PhoneColor expResult = null;
        PhoneColor result = PhoneColor.valueOf(name);
        assertEquals(expResult, result);
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }
    
}
