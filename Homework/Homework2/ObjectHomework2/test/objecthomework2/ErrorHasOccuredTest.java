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
public class ErrorHasOccuredTest {
    
    public ErrorHasOccuredTest() {
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
     * Test of getProblem method, of class ErrorHasOccured.
     */
    @org.junit.Test
    public void testGetProblem() {
        System.out.println("getProblem");
        ErrorHasOccured instance = null;
        String expResult = "";
        String result = instance.getProblem();
        assertEquals(expResult, result);
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }

    /**
     * Test of setProblem method, of class ErrorHasOccured.
     */
    @org.junit.Test
    public void testSetProblem() {
        System.out.println("setProblem");
        String problem = "";
        ErrorHasOccured instance = null;
        instance.setProblem(problem);
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }
    
}
