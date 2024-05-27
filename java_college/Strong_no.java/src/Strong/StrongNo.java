package Strong;
import java.util.*;
public class StrongNo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		while(true)
		{
			int no,sum=0,rem=0,fact;
			System.out.println("Enter the no.");
			no = sc.nextInt();
			int temp=no;
					while(no>0)
					{
						fact=1;
						rem = no %10;
						if (rem ==0)
							fact=1;
						else 
						{
							for(int i=1;i<=rem;i++)
						     {
						    	 fact=fact*i;
						     }
						}
						sum = sum+fact;
						no=no/10;
					}
					 if(sum == temp)
					    	System.out.println("The given no is storng number");
					    else
					    	System.out.println("The given no is not storng number");
		}
	}

}
