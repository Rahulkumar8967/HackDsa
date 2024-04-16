package JavaCoding;

import java.util.Scanner;

public class doWhile {
    public static void main(String[] args) {
        // Loops
        Scanner sc = new Scanner(System.in);
        int number = 0;
        do{
     System.out.println("Input a number");
      number = sc.nextInt();
     System.out.println(number);

        }while(number >=0);
        System.out.println("The End");
    }
}
