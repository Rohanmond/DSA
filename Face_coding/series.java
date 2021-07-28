package Face_coding;
import java.util.Scanner;
public class series
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
      int a=sc.nextInt();
      float curr=1.0f;
      System.out.printf("%d ",(int)curr);
      while(a>0){
      	System.out.printf("%.1f ",(curr*2.0f));
        a--;
        if(a>0){
        	curr*=3.0f;
          System.out.printf("%.1f ",curr);
          a--;
        }
      }
      sc.close();
	}
}