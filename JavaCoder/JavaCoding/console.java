package JavaCoding;

import java.io.Console;

public class console{
public static void main(String[] args){ 
    Console c=System.console();  // declare a variable c
    System.out.println("Enter your name: ");
     String n=c.readLine(); // This line reads a line of text from the console using the readLine() method of the Console object c and assigns it to the variable n.
      System.out.println("Welcome "+n); 
    }
 }
