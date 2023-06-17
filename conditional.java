import java.util.*;
public class conditional {
    public static void main(String args[]){
 Scanner number=new Scanner(System.in);
  int a=number.nextInt();
if(a>0){
    System.out.println("positive");

}
else if(a<0){
    System.out.println("negative");
}
else if(a==0){
    System.out.println("number is zero");
}
else{
    System.out.println("the number not possible");
}


  number.close();

    }
    
}
