package javaapplication4;

import java.util.*;
import java.io.*;
import java.util.Scanner;

class JavaApplication4 {

    char tttarray[][] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    static boolean tempintone = true;
    static boolean tempinttwo = true;
    static boolean tempintplay = true;
    public static void main(String[] args) {
        JavaApplication4 newobj = new JavaApplication4();
        newobj.displayboard();
        loop:
        while (tempintplay == true) {
            tempintone = true;
            tempinttwo = true;
            while (tempintone == true){
                newobj.promptplayerone();
                if (tempintplay == false) {
                    newobj.displayboard();
                    break loop;
                }
            }
            newobj.displayboard();
            while (tempinttwo == true){
                newobj.promptplayertwo();
                if (tempintplay == false) {
                    newobj.displayboard();
                    break loop;
                }
            }
            newobj.displayboard();
        }
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
                tempintone = true;
                System.out.println("Space taken");
        }
        else {
            tttarray[playeronexint][playeroneyint] = 'X';
            tempintone = false;
        }
                        if ((tttarray[0][0] == 'X' && tttarray[0][1] == 'X' && tttarray[0][2] == 'X') ||
                (tttarray[1][0] == 'X' && tttarray[1][1] == 'X' && tttarray[1][2] == 'X') ||
                (tttarray[2][0] == 'X' && tttarray[2][1] == 'X' && tttarray[2][2] == 'X') ||
                (tttarray[0][0] == 'X' && tttarray[1][0] == 'X' && tttarray[2][0] == 'X') ||
                (tttarray[0][1] == 'X' && tttarray[1][1] == 'X' && tttarray[2][1] == 'X') ||
                (tttarray[0][2] == 'X' && tttarray[1][2] == 'X' && tttarray[2][2] == 'X') ||       
                (tttarray[0][0] == 'X' && tttarray[1][1] == 'X' && tttarray[2][2] == 'X') ||
                (tttarray[2][0] == 'X' && tttarray[1][1] == 'X' && tttarray[0][2] == 'X') )
        {
            tempintplay = false;
            System.out.println("Player one wins");
        }
        if (tttarray[0][0] != ' ' && tttarray[0][1] != ' ' && tttarray[0][2] != ' ' &&
                tttarray[1][0] != ' ' && tttarray[1][1] != ' ' && tttarray[1][2] != ' ' && 
                tttarray[2][0] != ' ' && tttarray[2][1] != ' ' && tttarray[2][2] != ' ' && tempintplay == true )  {
            System.out.println("Draw");
            tempintplay = false;
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
            tempinttwo = true;
            System.out.println("Space taken");
        }
        else {
            tttarray[playertwoxint][playertwoyint] = 'O';
            tempinttwo = false;
        }
        if ((tttarray[0][0] == 'O' && tttarray[0][1] == 'O' && tttarray[0][2] == 'O') ||
                (tttarray[1][0] == 'O' && tttarray[1][1] == 'O' && tttarray[1][2] == 'O') ||
                (tttarray[2][0] == 'O' && tttarray[2][1] == 'O' && tttarray[2][2] == 'O') ||
                (tttarray[0][0] == 'O' && tttarray[1][0] == 'O' && tttarray[2][0] == 'O') ||
                (tttarray[0][1] == 'O' && tttarray[1][1] == 'O' && tttarray[2][1] == 'O') ||
                (tttarray[0][2] == 'O' && tttarray[1][2] == 'O' && tttarray[2][2] == 'O') ||       
                (tttarray[0][0] == 'O' && tttarray[1][1] == 'O' && tttarray[2][2] == 'O') ||
                (tttarray[2][0] == 'O' && tttarray[1][1] == 'O' && tttarray[0][2] == 'O') )
        {
            tempintplay = false;
            System.out.println("Player two wins");
        }
        if (tttarray[0][0] != ' ' && tttarray[0][1] != ' ' && tttarray[0][2] != ' ' &&
                tttarray[1][0] != ' ' && tttarray[1][1] != ' ' && tttarray[1][2] != ' ' && 
                tttarray[2][0] != ' ' && tttarray[2][1] != ' ' && tttarray[2][2] != ' ' && tempintplay == true ) {
            System.out.println("Draw");
            tempintplay = false;
        }
    }
}
