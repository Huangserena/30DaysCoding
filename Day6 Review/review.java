import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        in.nextLine();
        for(int i=0; i< T; i++){
            String input = in.nextLine();
            printout(input.toCharArray());
        }
        
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
    }
    public static void printout(char[] myCharArray) {
        int len = myCharArray.length;
        for(int i=0; i < len; i +=2 ){
            System.out.print(myCharArray[i]);
        }
        System.out.print(" ");
        for(int i=1; i < len; i +=2 ){
            System.out.print(myCharArray[i]);
        }
        System.out.println();
    }
}