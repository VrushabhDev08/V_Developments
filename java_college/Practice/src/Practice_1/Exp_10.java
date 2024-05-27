package Practice_1;
import java.io.*;
import java.util.*;
public class Exp_10 {

	public static void main(String[] args)throws IOException {
		// TODO Auto-generated method stub
		File f1 = new File(args[0]);
		Scanner sc = new Scanner(f1);
		String str="";
		String str1="";
		while(sc.hasNextLine())
		{
			str=str+sc.nextLine();
		}
		String st[]= str.split(" ");
		for (int i=0;i<st.length;i++)
		{
			str1=str1+st[i];
		}
		FileWriter fp = new FileWriter(f1);
		fp.write(str1);
		fp.close();
		fp.close();

	}

}
