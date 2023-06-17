import java.util.*;
public class array2{
	public static void main(String[] args){
		Scanner input= new Scanner(System.in);
		int n;
		System.out.println("Enter how many value you want to insert");
		n=input.nextInt();
		int[] array = new int[n];
		System.out.println("Enter the values of array");
		for(int i=0;i<n;i++)
		{
			array[i]=input.nextInt();
		}
		System.out.println("The valus of array are ");
		for(int i=0;i<n;i++)
		{
			System.out.println(array[i]);
		}
	}
}