package firstEmployee;

import java.util.Scanner;

public class TestEmployee {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Employee e1=new Employee();
		System.out.println("Enter id,name and salary");
		e1.id=sc.nextInt();
		e1.name=sc.next();
		e1.basic=sc.nextFloat();
		
	
		e1.printEmployee();
		float salary=1;
		e1.calNewSal();
		e1.printEmployee();
		}

}
