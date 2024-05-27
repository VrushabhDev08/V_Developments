interface vechiles
{
    String name="This is vechiles";
}
interface landvechiles extends vechiles
{
    int numwheels=4;
    public void Drive();
}
interface seavechiles extends vechiles
{
    int displacement=10;
    void lanch();
}
class car implements landvechiles
{
    public void Drive()
    {
        System.out.println("Car is 4 wheeled");
    }
    car()
    {
        System.out.println("Car class is created");
    }
}
class Hovercraft implements landvechiles,seavechiles
{
    public void Drive()
    {
        System.out.println("Hovercraft drives");
    }
    public void lanch()
    {
        System.out.println("Hovercraft lanched");
    }
    Hovercraft()
    {
        System.out.println("Hovercraft class is created");
    }
    public void Enterland()
    {
        System.out.println("Enter in the land");
    }
    public void Entersea()
    {
        System.out.println("Enter in the sea");
    }

}
class Ship implements seavechiles
{
 public void lanch()
 {
    System.out.println("Ship is lanched");
 }
 Ship()
 {
    System.out.println("Ship class created");
 }
}

public class Exp5 {
    public static void main(String[] args) {
        car C1 = new car();
        C1.Drive();
        System.out.println("The name is "+C1.name);
        System.out.println("No. of wheels "+C1.numwheels);
        Hovercraft H1=new Hovercraft();
        H1.Drive();
        H1.Enterland();
        H1.Entersea();
        H1.lanch();
        System.out.println("Vechiles name "+H1.name);
        System.out.println("Num of wheels "+H1.numwheels);
        System.out.println("Displacement "+H1.displacement);
        Ship S1 = new Ship();
        S1.lanch();
        System.out.println("Vechile name is "+S1.name);
        System.out.println("Displacemt is "+S1.displacement);

    }
}
