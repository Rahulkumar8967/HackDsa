package JavaCoding;

public class student {
    int id;
    String name;

    student(int id1, String name1){
        id = id1;
        name = name1;
    }
    void display(){
        System.out.println(id+""+name);
    }


    public static void main(String[] args) {
        student s1 = new student(1, " Rahul");
        student s2 = new student(2, " hm1");
        student s3 = new student(3, " pawan");
        s1.display();
        s2.display();
        s3.display();
        
    }
}
