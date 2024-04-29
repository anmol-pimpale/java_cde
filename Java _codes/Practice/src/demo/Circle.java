package demo;

import java.util.Scanner;

public class Circle {

	
	
public static void area(float r) {
		double area;
		area=3.14*r*r;
	
	}
	public static void main(String[] args) {
		float r=1;
		float a;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the radius:");
		sc.nextFloat();
	    Circle.area(r);
		System.out.println("Area of the circle:"+r);
		
	}

}
