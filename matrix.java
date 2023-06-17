import java.util.*;
public class matrix{
	public static void main(String[] args){
		Scanner input= new Scanner(System.in);
		int n;
		System.out.println("Enter how many value you want to insert");
		n=input.nextInt();
		int[2][2] array = new int[2][2];
		System.out.println("Enter the values of array");
		for(int j=0;j<2;j++)
        {
            for(int i=0;i<n;i++)
		{
			array[i][j]=input.nextInt();
		}
        }
		System.out.println("The valus of array are ");
		for(int i=0;i<n;i++)
		{
			System.out.println(array[j][i]);
		}
	}
}