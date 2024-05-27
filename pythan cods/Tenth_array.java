import java.util.*;
public class Tenth_array{
    public static void main(String args[])
    {
        System.out.println("Arrays in the java");
        int marks[]= new int[10];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the array");
        for(int i=0;i<10;i++)
        {
            marks[i]=sc.nextInt();
        }
        System.out.println("The entered arrays are ");
        for(int i=0;i<10;i++)
        {
            System.out.println(marks[i]);
        }
    }
}