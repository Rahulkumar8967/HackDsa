package JavaCoding;

public class Rahul {
    int rollno;
    String name;
    float fee;

    Rahul(int rollno, String name, float fee){
        this.rollno = rollno;
        this.name = name;
        this.fee = fee;
    }

    void display(){
        System.out.println(rollno + " " + name + " " + fee);
    }

    public static void main(String[] args) {
        Rahul s1 = new Rahul(111, "ankit", 5000f); 
        Rahul s2 = new Rahul(112, "sumit", 6000f);
        s1.display();
        s2.display(); 
    }
}

