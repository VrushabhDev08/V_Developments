import java.io.IOException;
import java.nio.file.*;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.util.*;
import java.io.*;
public class exp8 {
    public static void main(String args[]) throws IOException
    {
        File file1 = new File("G:\\a1.txt");
        System.out.println("File is created");
        String data1=" ";
        Scanner userinput = new Scanner(System.in);
        Scanner fileip=new Scanner(file1);
        System.out.println("File contents are:");
        while(fileip.hasNextLine())
        {
            String data=fileip.nextLine();
            data1=data1.concat(data +"\n");
            System.out.println(data);
        }
        System.out.println("Enter the additional data\n");
        String filecontents = userinput.nextLine();
        System.out.println("You are wanted 1:Yes 2:No");
        int response = userinput.nextInt();
        if (response==1)
        {
           String filecontents1=data1.concat(filecontents);
           FileWriter writes = new FileWriter("G:\\a1.txt");
            writes.write(filecontents1);
            writes.close();
        }
        else if (response ==2)
        {
            System.out.println("Create the new file and write the new file name ");
            String filename=userinput.next();
            FileWriter writes = new FileWriter("G:\\"+filename);
            writes.write(filecontents);
            writes.close();
            
        }
    }
}