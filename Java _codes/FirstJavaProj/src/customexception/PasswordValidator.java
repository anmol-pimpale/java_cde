package customexception;

import java.util.Scanner;

public class PasswordValidator {

	public static void main(String[] args) throws IncorrectPasswordException {
		String password;
		System.out.print("Enter your pass : ");

		Scanner scan = new Scanner(System.in);
		password = scan.next();
		checkPassword(password);

	}

	public static void checkPassword(String password) throws IncorrectPasswordException {
		
		try {
			if (password.length() < 8) {

				throw new IncorrectPasswordException();

			} else {
				System.out.println("Password is correct ");
			}
			
		} catch (IncorrectPasswordException e) {
			e.print();
		}
		
		

	}

}
