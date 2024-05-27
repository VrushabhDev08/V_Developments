class shape{
    String color;
    int radius,breadth,hight,length;

}
class tringle extends shape{
    double tr1;
     public double  triarea(int b,int h)
     {
         tr1=0.5*b*h; 
        return (tr1);
     }
}
class eqitringle extends tringle{
        public void cube()
        {
            double tr3 = tr1*2;
            System.out.println("the cube of the tringle is "+(tr1));
        }
}
public class inheritance {
    public static void main(String args[])
    {
        System.out.println("Inheritance in the java");
         tringle t1 = new tringle();
         t1.breadth = 5;
         t1.hight = 6;
         double ar = t1.triarea(t1.breadth, t1.hight);
         System.out.println("the area of the tringle is "+ar);
         eqitringle t2 = new eqitringle();
         t2.cube();
    }
}
