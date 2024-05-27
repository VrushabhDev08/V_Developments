import java.util.*;
public class seventh_function {
    public static void factorially(int n )
    {
        int fact =1;
        for(int i=n;i>=1;i--)
        {
            fact=fact*i;
        }
        System.out.println(fact);
    }
   public static void vb ( int a , int b)
    {
    int c = a+b;
     System.out.println(c);
     return;
    }
    
    public static void main(String args[])
    {
        System.out.println("Fuunctoin in the java:");
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
       vb(x,y);
       System.out.println("Enet the number for the factorial ");
       int no = sc.nextInt();
       factorially(no);

    }
}
