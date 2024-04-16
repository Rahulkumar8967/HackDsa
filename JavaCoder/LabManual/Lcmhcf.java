package LabManual;

public class Lcmhcf {
        static void hcf(int n1,int n2)
           { int arr[]=new int[9];
            int j=-1,h=1;
            for(int i=2; i<=9;i++)
            {
                if((n1%i==0)&&(n2%i==0))
                {
                    arr[++j]= i;
                    n1 = n1/i;
                    n2 = n2/i;}}
            for(int i=0; i<=j;i++)
            {  h*=arr[i];}
            System.out.println(h);}
        static void lcm(int n1, int n2)
          {  int arr[]=new int[9];
            int j=-1,h=1;
            for(int i=2; i<=9;i++)
            {
                if((n1%i==0)&&(n2%i==0))
                {
                    arr[++j]= i;
                    n1 = n1/i;
                    n2 = n2/i;}}
            for(int i=0; i<=j;i++)
            {
                h*=arr[i];
            }
            h*=(n1*n2);
            System.out.println(h);
        }
       public static void main(String[] args) {
        System.out.print("Hcf : ");hcf(16,24);
        System.out.print("Lcm :");lcm(16, 24);
       } 
    }
    

