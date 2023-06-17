import java.util.*;
public class string2 {
    public static void main(String args[]){
        int n;
        Scanner sc = new Scanner(System.in);
        n=nextInt();
        int []arr= new int [10];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            System.out.println(arr[i]);
        }
        
    }
    

}
