package JavaCoding;

public class Avg {
    public static void main(String args[]) {
    
        int sum = 0;
         
        for(int i=0;i<args.length;i++)
        {
            sum +=Integer.parseInt(args[i]);
        }
        int average = sum / args.length;
        
        System.out.println("Average of " + args.length + " command line arguments is " + average);
}
}
