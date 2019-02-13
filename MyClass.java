/*
 * A simple TestClass
 * 
 * 
 */
package testapplication;

import java.util.*;
import java.io.*;
import java.util.Scanner;

public class TestClass {
    
    public char[][] tttarray = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};
    int x, y;
    public void DisplayBoard() {
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 2; j++){
                System.out.print(tttarray[i][j]);
            }
            System.out.println(tttarray[i][2]);
        }
    }
    
    public void player(String whoami) {
        System.out.println("Player " + whoami + " Enter x coordinate");
        Scanner xObj = new Scanner(System.in);
        x = Integer.parseInt(xObj.nextLine());
        System.out.println("Enter " + whoami + " Enter y coordinate");
        Scanner yObj = new Scanner(System.in);
        y = Integer.parseInt(yObj.nextLine());
    }
    
    public boolean CheckSpace() {
    if (tttarray[x][y] == 'X' || tttarray[x][y] == 'O'){
        System.out.println("Space taken");
        return true;
    }
    else
        return false;
    }
    
    public boolean CheckWin(char bud){
    if (tttarray[0][0] == bud && tttarray[0][1] == bud && tttarray[0][2] == bud ||
        tttarray[0][0] == bud && tttarray[0][1] == bud && tttarray[0][2] == bud ||
        tttarray[0][0] == bud && tttarray[0][1] == bud && tttarray[0][2] == bud ||
        tttarray[0][0] == bud && tttarray[1][0] == bud && tttarray[2][0] == bud ||
        tttarray[0][1] == bud && tttarray[1][1] == bud && tttarray[2][1] == bud ||
        tttarray[0][2] == bud && tttarray[1][2] == bud && tttarray[2][2] == bud ||
        tttarray[0][0] == bud && tttarray[1][1] == bud && tttarray[2][2] == bud ||
        tttarray[2][0] == bud && tttarray[1][1] == bud && tttarray[0][2] == bud) {
        System.out.println("Player one wins");
        return true;
    }
    else return false;
    }
    
    public boolean CheckDraw(){
        if (tttarray[0][0] != '-' && tttarray[0][1] != '-' && tttarray[0][2] != '-' &&
            tttarray[1][0] != '-' && tttarray[1][1] != '-' && tttarray[1][2] != '-' &&
            tttarray[2][0] != '-' && tttarray[2][1] != '-' && tttarray[2][2] != '-') {
            System.out.println("Draw");
            return true;
        }
        else 
            return false;
    }
    
    public void TestMethod() {
    System.out.println("");
        
    }
}
