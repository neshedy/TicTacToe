/*
 * 30000485 Dinesh Arasu
 * Java 11.0.2
 * A simple test program in java
 */
package testapplication;

import java.util.*;
import java.io.*;
import java.util.Scanner;

public class TestApplication {

    public static void main(String[] args) {
        TestClass TestObj = new TestClass();
        boolean shouldplay = true;
        while (shouldplay == true) {
        TestObj.DisplayBoard();
        boolean shouldplayone = true;
        while (shouldplayone == true) {
            TestObj.player("One");
            if (TestObj.CheckSpace() == false)
                break;
        }
        TestObj.tttarray[TestObj.x][TestObj.y] = 'X';
        if(TestObj.CheckWin('X') == true)
            break;
        if(TestObj.CheckDraw() == true)
            break;
        TestObj.DisplayBoard();
        boolean shouldplaytwo = true;
        while (shouldplaytwo == true) {
            TestObj.player("Two");
            if (TestObj.CheckSpace() == false)
                break;
        }
        TestObj.tttarray[TestObj.x][TestObj.y] = 'O';
        if(TestObj.CheckWin('O') == true)
            break;
        if(TestObj.CheckDraw() == true)
            break;
                   
        TestObj.DisplayBoard();
        }
    }
}
