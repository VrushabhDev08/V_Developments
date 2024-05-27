// class tp{
//     private double b;
//     tp()
//     {
//         b=0;
//     }
//     void setdata(double b)
//     {
//      this.b=b;
//     }
//     double getdata()
//     {
//         return this.b;
//     }
// }
// abstract class vb{
//     abstract void name();
//     abstract int age();
//     public int year(){
//         return 1;
//     }
//     vb()
//     {
//         System.out.println("this is vrushah bastwade from jaysingpur");
//     }
// }
// class Students extends vb{
//     public void name() {
//         System.out.println("vrushabh bastwade");
//     }
//     public int age()
//     {
//         System.out.println("the age of the vrushabh is 21");
//         return 4;
//     }
//     // public int year()
//     // {
//     //     return 7;
//     // }
// }
interface cb{
   public void walk();
   public void hello();

}
class horse implements cb
{
public void walk()
{
    System.out.println("walk on the 4 legs");
}
public void hello(){

    System.out.println("gvhgvh");
}
} 
public class oop2 {

    public static void main(String args[])
    {
        horse h1 = new horse();
        h1.walk();
        h1.hello();
    }
}
