import java.util.*;
class dkte{
    String branch;
    String prn;
   public void prints()
    {
        System.out.println("The branch and the prn is "+this.branch +"  "+this.prn);
    }
}

class Student
{
  int age;
  //System.out.print("The age of the student is "+age);
  public int eligible(int n)
  {
    if(n>=18)
    {
        System.out.print("Eligible for the voting");
        
    }
    return age;
  }
public void age() {
}
public void name() {
}
}
public class oops {
    public static void main(String args[])
    {
        System.out.println("OOPs in the java");
        dkte std1 = new dkte();
        std1.branch= "cse";
        std1.prn= "20uet009";
        std1.prints();
        dkte std2 = new dkte();
        std2.branch= "entc";
        std2.prn= "20uet010";
        std2.prints();
        Scanner sc= new Scanner(System.in);
        Student std3 = new Student();
        std3.age = sc.nextInt();
        std3.eligible(std3.age);

    }
}
