package JavaCoding;

public class callByValue {
   int data = 50;
   void change(int data){
    data = data+100;
   }
    public static void main(String[] args) {
       callByValue cp = new callByValue();
       System.out.println("before value change"+ cp.data); 
       cp.change(500);
       System.out.println("after data"+cp.data);
    }
    
}
