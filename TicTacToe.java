/*
 * 
 * 
 * 
 */
package javaapplication2;

public class JavaApplication2 {

    public static void main(String[] args) {
        int[][] tttarray;
        tttarray = new int[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                tttarray[j][i] = 0;
            }
        }

        for (int i = 0; i < 3; i++) {
           for (int j = 0; j < 3; j++)
                System.out.print(tttarray[i][j]);
          
        }
    }
}
