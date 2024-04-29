package firstEmployee;

public class Employee {

	int id;
	String name;
	float salary;
	float basic;
    float hra;
    float da;
    float ta;
    
	
	void printEmployee() {
		System.out.println("Id"+id);
		System.out.println("Name"+name);
		
		System.out.println("Basic"+basic);
		System.out.println("HRA"+hra);
		System.out.println("DA"+da);
		System.out.println("TA"+ta);
		
		}
	
void calNewSal() {
		da=basic *0.18f;
		hra=basic*0.12f;
		ta=basic*0.15f;
		salary=basic+da+hra+ta;
		
		
		 }
}