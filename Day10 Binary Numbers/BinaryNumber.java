import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int n= in.nextInt();
        in.close();
        
        int count=0, maxCount=0;
        while(n>0){
            int reminder = n%2;
            if (reminder ==1){
                count++;
                if(count >maxCount){
                    maxCount = count;
                }
            }else count =0;
            
            n=n/2;
        }
        System.out.print(maxCount);
    }
}