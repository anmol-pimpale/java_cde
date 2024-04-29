package firstEmployee;

public class TestOverloading {

	public static void main(String[] args) {
		
		float radius=5;
	    int side =4;
	    int length =5;
	    int breadth =7;

	    MethodOverloading m1=new MethodOverloading();
	    m1.calArea(radius);
	    m1.calArea(side);
	    m1.calArea(length, breadth);
	}

}
