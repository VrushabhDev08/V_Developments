package employee1;

public class Employee {
	private String firstname;
	private String lastname;
	private double salary;
	public Employee(String Firstname,String Lastname, double Salary)
	{
		this.firstname=Firstname;
		this.lastname= Lastname;
		this.salary= Salary;
	}
	
	public void setFN(String Firstname)
	{
		this.firstname=Firstname;
	}
	public String getFN()
	{
		return firstname;
	}
	public void setLN(String Lastname)
	{
		this.lastname= Lastname;
	}
	public String getLN()
	{
		return lastname;
	}
	public void setsalary(double Salary)
	{
		this.salary= Salary;
	}
	public double getsalary()
	{
		return salary;
	}

}
