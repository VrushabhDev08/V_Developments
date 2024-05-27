package Exp_9;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.util.Scanner;

public class Experiments_9_ {

	public static void main(String[] args) throws IOException {
		String filepath="G:\\20UET009.txt";
		FileOutputStream Fos=new FileOutputStream(filepath);
		DataOutputStream dos=new DataOutputStream(Fos);
		dos.writeUTF("Student Information");
		dos.writeUTF("Vrushabh");
		dos.writeInt(70);
		dos.writeInt(25);
		dos.writeDouble(60);
		dos.writeDouble(8.23);
		dos.writeUTF("Maharastra");
		dos.close();
		Fos.close();
		FileInputStream Fis=new FileInputStream(filepath);
		DataInputStream dis=new DataInputStream(Fis);
		System.out.println(dis.readUTF());
		System.out.println(dis.readUTF());
		System.out.println(dis.readInt());
		System.out.println(dis.readInt());
		System.out.println(dis.readDouble());
		System.out.println(dis.readDouble());
		System.out.println(dis.readUTF());
		dis.close();
		Fis.close();
	}
	}


