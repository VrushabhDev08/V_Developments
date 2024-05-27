package employee1;

public class Test_class {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Employee E1 = new Employee("Adinath"," Chavan",10000);
		Employee E2 = new Employee("Vinu"," Arge",20000);
		System.out.println("the details of the Firt employee is:");
		System.out.println(""+E1.getFN()+E1.getLN()+" having salary "+E1.getsalary());
		System.out.println("the details of the Second employee is:");
		System.out.println(""+E2.getFN()+E2.getLN()+" having salary "+E2.getsalary());
		System.out.println("After the increment");
		E1.setsalary((E1.getsalary()*1.1));
		E2.setsalary((E2.getsalary()*1.1));
		System.out.println("the details of the Firt employee is:");
		System.out.println(""+E1.getFN()+E1.getLN()+" having salary "+E1.getsalary());
		System.out.println("the details of the Second employee is:");
		System.out.println(""+E2.getFN()+E2.getLN()+" having salary "+E2.getsalary());
		
	

	}

}
