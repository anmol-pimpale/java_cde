package customexception;

public class IncorrectPasswordException extends Exception {
	
	void print()
	{
		System.out.println("length is less than 8 char");
	}
	

	
}
