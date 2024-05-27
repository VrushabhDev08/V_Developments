import java.util.*;
public class twelth_string {
    public static void main(String args[])
    {
        System.out.println("this is java class");
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        String vb = "sonali"; 
        System.out.println(name + vb);
        System.out.println(name.length());
        for(int i=0;i<name.length();i++)
        {
            System.out.println(name.charAt(i));
        }
        System.out.println(name.compareTo(vb));
    }
}
