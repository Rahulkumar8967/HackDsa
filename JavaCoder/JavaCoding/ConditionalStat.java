package JavaCoding;

import java.util.Scanner;

public class ConditionalStat {
    public static void main(String[] args) {
        // conditional stat
    /*     boolean issunUp = true;
        if(issunUp == true)
        System.out.println("day");
        else
        System.out.println("night");  */
 
        Scanner sc = new Scanner(System.in);
      int cash = sc.nextInt();
      if(cash < 10) {
        System.out.println("cannot buy anything");
        System.out.println("get more cash");
      }else if( cash > 10 && cash < 50){
        System.out.println("can get 1 thing");
      }else{
        System.out.println("can get both");
      }
    }
}
