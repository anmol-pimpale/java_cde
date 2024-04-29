package firstEmployee;

import java.util.Scanner;

public class Test1 {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
	    float radius=1;
	    int side=1;
	    int length=1;
	    int breadth=1;
		MethodOverloading m1=new MethodOverloading();
		System.out.println("Enter the radius:");
		radius=sc.nextFloat();
		System.out.println("Enter the side:");
		side=sc.nextInt();
		System.out.println("Enter length and breadth:");
		length=sc.nextInt();
		breadth=sc.nextInt();
	    m1.calArea(radius);
	    m1.calArea(side);
	    m1.calArea(length, breadth);
	}

}
