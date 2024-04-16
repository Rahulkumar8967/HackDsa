package JavaCoding;

public class ballu {
    int id;
    String name;

    public ballu(int id1, String name1) {
        id = id1;
        name = name1;

    }

    void display() {
        System.out.println(id + "" + name);
    }

    public static void main(String[] args) {
        ballu s1 = new ballu(111, "fjgh");
        ballu s2 = new ballu(112, "hfh");

        s1.display();
        s2.display();

    }
}
