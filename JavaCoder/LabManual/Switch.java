package LabManual;
import java.util.Scanner;

public class Switch {
    public static void main(String[] args) {
        int choice;
        Scanner scan = new Scanner(System.in);
        do {
            System.out.println("\n1: Sum\n2: Average\n3: Max\n4: Min\n0: Exit\n");
            System.out.print("choice : "); 
            choice = scan.nextInt();
            switch (choice) {
                case 1:
                    int sum = Integer.parseInt(args[0]);
                    for (int i = 1; i < args.length; i++) {
                        sum += Integer.parseInt(args[i]);
                    }
                    System.out.println("Sum : " + sum);
                    break;
                case 2:
                    float sum2 = Float.parseFloat(args[0]);
                    for (int i = 1; i < args.length; i++) {
                        sum2 += Float.parseFloat(args[i]);
                    }
                    System.out.println("Average : " + (sum2 / args.length));
                    break;                   
                case 3:
                    int max = Integer.parseInt(args[0]);
                    for (int i = 1; i < args.length; i++) {
                        if (max < Integer.parseInt(args[i])) {
                            max = Integer.parseInt(args[i]);
                        }
                    }
                    System.out.println("Max : " + max);
                    break;
                case 4:
                    int min = Integer.parseInt(args[0]);
                    for (int i = 1; i < args.length; i++) {
                        if (min > Integer.parseInt(args[i])) {
                            min = Integer.parseInt(args[i]);
                        }
                    }
                    System.out.println("Min : " + min);
                    break;
                default:
                    break;
            }
        } while (choice != 0);
    
    }
}





    
