package JavaCoding;

public class TestArray {
   
    public static void main(String[] args) {
    double arr[] = {1.9, 2.5, 3.5, 4.0, 5.6};
       int n = arr.length;
    for(int i=0;i<n;i++){
        System.out.println(arr[i]+"");

    }
    // summing all elements
    double sum = 0;
    for(int i=0;i<n;i++){
    sum += arr[i];
    }
    System.out.println("sum is "+sum);
    double max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];

        }
    }
    System.out.println("Max is " + max);
    }
}
