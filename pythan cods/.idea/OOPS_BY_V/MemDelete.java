import java.util.Arrays;

public class MemDelete
{
    public static void main (String []args)
    {
        // Delete member from the array
        int arr []={1,2,3,4,5,5,5,5,6};
        int a=5;
        System.out.println("Arrays After removing"+Arrays.toString(deletemem(arr, a)));

    }
    public static int [] deletemem(int arr[], int a)
    {
        int new1 [] = new int [arr.length - 1];
        int index = 0;
        for(int i=0 ; i<arr.length;i++)
        {
            if(arr[i]!=a)
            {
                new1[index]=arr[i];
                index++;
            }
        }
        return new1 ;
    }
}