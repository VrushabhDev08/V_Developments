package count1;
import java.util.*;
public class Count {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
				int i,j=1;  
				Scanner sc = new Scanner(System.in);
				System.out.println("enter the string");
				String names = sc.nextLine();
				char ch[]= new char[names.length()];
				for( i=0;i<names.length()-1;i++)
				{
					ch[i]=names.charAt(i);
					if( ch[i] ==' ' &&  ch[i+1] !=' ')
					{
					 j++;	
					}
					 
				}	  
				System.out.print("the words are:"+j);


	}

}
