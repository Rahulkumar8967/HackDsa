class exception1 {

    public static void main(String[] args) {
        exception1 t1 = new exception1(); // Correcting the class name
        t1.divide(); // Calling the divide method on the t1 instance
        System.out.println("hello");
    }

    void divide() {
        try {
            int a = 100, b = 0, c;
            c = a / b;
            System.out.println(c);
        } catch (ArithmeticException e) {
            e.printStackTrace();
        }
    }
}
