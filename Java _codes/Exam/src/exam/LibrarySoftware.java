package exam;
//write a menu driven java program to store book details in library software.It must have following to methods:a.Save Book b.display all save books Book Deatails :Book_Name,Publisher,Writer,Mrp.
import java.util.ArrayList;
import java.util.Scanner;



public class LibrarySoftware {
	
    ArrayList<Book> books = new ArrayList<>();

    public void saveBook() {
    	
        Scanner scanner = new Scanner(System.in);
        
        
        System.out.print("Enter book name: ");
        String name = scanner.nextLine();
        
        System.out.print("Enter book publisher: ");
        String publisher = scanner.nextLine();
        
        
        System.out.print("Enter book writer: ");
        String writer = scanner.nextLine();
        
        System.out.print("Enter book mrp: ");
        double mrp = scanner.nextDouble();
        
        scanner.nextLine(); 
        books.add(new Book(name, publisher, writer, mrp));
        
        System.out.println("Book saved successfully!");
    }

    public void displayBooks() {
        for (Book book : books) { //use advance for loop in this line
            System.out.println(book.toString());  //to convert into string we use ToString method from Object Class
        }
    }

    public static void main(String[] args) {
        LibrarySoftware library = new LibrarySoftware();  //create the object for LibrarySoftware class
        Scanner scanner = new Scanner(System.in);  //use scanner class for taking input from the user
        while (true) {     // we use boolean expression
            System.out.println("1. Save Book");
            System.out.println("2. Display all saved books");
            System.out.println("3. Exit");
            System.out.print("Enter your choice: ");
            int op = scanner.nextInt();
            scanner.nextLine(); 
            switch (op) {
                case 1:
                    library.saveBook();
                    break;
                case 2:
                    library.displayBooks();
                    break;
                case 3:
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid choice!");
            }
        }
    }
}
