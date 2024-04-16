package JavaCoding;

// STATIC Class
public class balak {
int rollno;
String name;
static String college = "CTAE";

balak(int r, String n){
    rollno = r;
    name = n;
}
void display(){
    System.out.println(rollno+""+name+""+college);
}
    public static void main(String[] args) {
    balak b1 = new balak(111, " karan ") ;   
    balak b2 = new balak(112, " ramesh ") ;  
    b1.display();
    b2.display();
    }
}
