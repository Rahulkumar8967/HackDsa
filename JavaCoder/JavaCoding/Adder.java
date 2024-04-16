package JavaCoding;

public class Adder {
    // Method to add two integers
    static int add(int a, int b) {
        return a + b;
    }

    // Method to add three integers
    static int add(int a, int b, int c) {
        return a + b + c;
    }
}

// TestOverloading1 class to test the overloaded methods in Adder class
class TestOverloading1 {
    public static void main(String[] args) {
        // Calling the overloaded methods and printing the results
        System.out.println(Adder.add(11, 11)); // Calls the method add(int a, int b)
        System.out.println(Adder.add(11, 11, 11)); // Calls the method add(int a, int b, int c)
    }
}

    

