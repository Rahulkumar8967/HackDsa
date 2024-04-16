package JavaCoding;

public class overRiding {
    void Run(){
        System.out.println("Bike is running");
    }

    static class Bike extends overRiding{
        void Run(){
            System.out.println("bike is stopped");
        }
    }

    public static void main(String[] args) {
        Bike b1 = new Bike(); // Create an instance of Bike
        b1.Run(); // Call the Run() method of Bike
    }
}
