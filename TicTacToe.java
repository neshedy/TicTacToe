package javaapplication4;

import java.util.*;
import java.io.*;
import java.util.Scanner;

class JavaApplication4 {

    char tttarray[][] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '},};
    static int tempint = 1;
    public static void main(String[] args) {
        JavaApplication4 newobj = new JavaApplication4();
        newobj.displayboard();
        while (tempint == 1){
            newobj.promptplayerone();
        }
        newobj.displayboard();
        {
            newobj.promptplayertwo();
        }
        newobj.displayboard();
    }

    public void displayboard() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 2; j++) {

                System.out.print(tttarray[i][j]);
            }
            System.out.println(tttarray[i][2]);
        }
    }
    
    public void promptplayerone() {
        Scanner playeronexObj = new Scanner(System.in);
        Scanner playeroneyObj = new Scanner(System.in);
        
        System.out.println("player one enter x coordinate");

        String playeronex = playeronexObj.nextLine();
        int playeronexint = Integer.parseInt(playeronex);
        System.out.println("player one y coordinate");
        
        String playeroney = playeroneyObj.nextLine();
        int playeroneyint = Integer.parseInt(playeroney);
        
        if (tttarray[playeronexint][playeroneyint]== 'X' ||
                tttarray[playeronexint][playeroneyint] == 'O') {
                tempint = 1;
        }
        else {
            tttarray[playeronexint][playeroneyint] = 'X';
            tempint = 0;
        }
    }
    public void promptplayertwo() {
        Scanner playertwoxObj = new Scanner(System.in);
        Scanner playertwoyObj = new Scanner(System.in);
        
        System.out.println("player two enter x coordinate");

        String playertwox = playertwoxObj.nextLine();
        int playertwoxint = Integer.parseInt(playertwox);
        System.out.println("player two y coordinate");
        
        String playertwoy = playertwoyObj.nextLine();
        int playertwoyint = Integer.parseInt(playertwoy);
       
        if (tttarray[playertwoxint][playertwoyint] == 'X'
                || tttarray[playertwoxint][playertwoyint] == 'O'){
            tempint = 1;
        }
        else
        {
            tttarray[playertwoxint][playertwoyint] = 'O';
            tempint = 0;
        }
    }
}
