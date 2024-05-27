import java.util.*;
interface Engine
{
    public static String engintype="Petrol";
   public void Start();
   public void Stop();

}
interface Tyre
{
   public static  String Tyretype="Tubeless";
}
interface Door
{
  public static int noDoor=4;
   public void opentype();

}
class Car implements Engine,Tyre,Door
{
    public void Start()
    {
        System.out.println("Car is Started");
    }
   public  void Stop()
    {
        System.out.println("Car is Stopped");
    }

    public void opentype()
    {
        System.out.println("The car has automatic doors");
    }
    Car()
    {
        System.out.println("Car class is created");
    }
}

public class Exp6 {
    public static void main(String args[])
    {
    Car C1 = new Car ();
    C1.Start();
    C1.Stop();
    C1.opentype();
    System.out.println("Engine Type of the car is"+C1.engintype);
    System.out.println("The no of doors are"+C1.noDoor);
    System.out.println("The typre type is"+C1.Tyretype);

    }
}
