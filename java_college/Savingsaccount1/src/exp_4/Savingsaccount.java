package exp_4;

public class Savingsaccount {
	public static double annualint;
	private double savingacc;
	public Savingsaccount()
	{
		annualint=0.0;
		savingacc=0.0;
	}
	public double calcumonint()
	{
		double int_rate=(savingacc*annualint)/12;
		savingacc += int_rate;
		return int_rate;
	}
	public static void modiintrate(double newIR)
	{
		annualint = newIR;
	}
	public void setSB(double newsb)
	{
		savingacc=newsb;
	}
	public double getsb()
	{
		return savingacc;
	}

}
