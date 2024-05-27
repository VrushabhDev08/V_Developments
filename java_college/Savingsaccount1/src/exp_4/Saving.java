package exp_4;

public class Saving {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// TODO Auto-generated method stub
		Savingsaccount saver1 = new Savingsaccount();
		Savingsaccount saver2 = new Savingsaccount();
		saver1.setSB(2000);
		saver2.setSB(3000);
		Savingsaccount.modiintrate(0.04);
		saver1.calcumonint();
		saver2.calcumonint();
		System.out.println("The balance of the saver1 is "+saver1.getsb());
		System.out.println("The balance of the saver2 is "+saver2.getsb());
		Savingsaccount.modiintrate(0.05);
		saver1.calcumonint();
		saver2.calcumonint();
		System.out.println("After increment");
		System.out.println("The balance of the saver1 is "+saver1.getsb());
		System.out.println("The balance of the saver2 is "+saver2.getsb());
	}

}
