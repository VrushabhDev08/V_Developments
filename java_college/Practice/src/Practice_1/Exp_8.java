package Practice_1;
import java.io.*;
import java.nio.file.*;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.util.*;
import java.io.File;
public class Exp_8 {

	public static void main(String[] args)throws IOException {
		// TODO Auto-generated method stub
		File file1 = new File("G:\\vrush.txt");
		System.out.println("File was created");
		String data1=" ";
		Scanner sc=new Scanner(System.in);
		Scanner fileip=new Scanner(file1);
		System.out.println("The file contents are");
		while(fileip.hasNextLine())
		{
			String data = fileip.nextLine();
			data1=data1.concat(data+"\n");
			System.out.println(data);
		}
		System.out.println("The additional data is ");
		String filecontents=sc.nextLine();
		System.out.println("if you want add the data 1:Yes 2:No ");
		int response = sc.nextInt();
		if(response==1)
		{
			String filecont = data1.concat(filecontents);
			FileWriter writers1 = new FileWriter("G:\\vrush.txt");
			writers1.write(filecont);
			writers1.close();
		}
		else
		{
			System.out.println("THe file cpntents written in a new file");
			System.out.println("The file contents are");
			String namefi=sc.nextLine();
			FileWriter fp = new FileWriter("G:\\+namefi");
			fp.write(filecontents);
			fp.close();
		}
		
		

	}

}