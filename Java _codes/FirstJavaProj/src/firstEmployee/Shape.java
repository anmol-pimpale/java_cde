package firstEmployee;

public class Shape {

	
float area;
	
	void calArea(float radius)
    {

        area = 3.14f * radius * radius;
        System.out.println("area of circle:"+area);
    }
	
	void calArea(int side)
    {
        area = side * side;
        System.out.println("area of square:"+area);
    }
	
	 void calArea(int length, int breadth)
	    {

	        area = length * breadth;
	        System.out.println("area of rectangle:"+area);
	    }
}
