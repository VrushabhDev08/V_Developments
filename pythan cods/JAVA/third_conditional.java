import java.util.*;

public class third_conditional {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no.");
        int no = sc.nextInt();
        // int age = sc.nextInt();
        // if(age>18)
        // {
        // System.out.println("Your are Eligible:");
        // }
        // else
        // {
        // System.out.println("Not elgible");
        // }
        // if (no % 2 == 0)
        //     System.out.println("Even");
        // else if (no % 2 != 0)
        //     System.out.println("Odd");
        //Switch Statements -
        switch(no)
        {
            case 1:
            System.out.println("Vrushabh");
            break;
            case 2:
            System.out.println("Sanjay");
            break;
            case 3: 
            System.out.println("Bastwade");
            break;
            default:
            System.out.println("Enter the correct no.");
        }

    }

}
