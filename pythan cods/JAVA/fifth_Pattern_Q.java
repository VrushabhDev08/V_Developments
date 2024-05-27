public class fifth_Pattern_Q {
    public static void main(String args[])
    {
        System.out.println("Pattern 1");
        int n=5;
        int m=4;
        for (int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(i==1||j==1||i==n||j==m)
                {
                    System.out.print("*");
                }
                else
                {
                    System.out.print(" ");
                }
            }
            System.out.println();
        
             
        }
        for (int i=0;i<5;i++)
        {
        for(int j=0;j<=i;j++)
        {
            System.out.print("*");
        }
        System.out.println();
        }
        System.out.println();
        for (int i=1;i<=5;i++)
        {
        for(int j=1;j<=5 -(5-i);j++)
        {
            System.out.print("*");
        }
        System.out.println();
        }
            
    }
    
}
