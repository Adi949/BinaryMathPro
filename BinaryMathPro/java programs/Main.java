import java.util.Scanner;  // Import the Scanner class

class Main {
  public static void main(String[] args) {
    Scanner myObj = new Scanner();  // Create a Scanner object
    System.out.println("Enter username");


    String userName = myObj.nextLine();  // Read user input
    System.out.println("enter rollno");
    String rollno = myObj.nextLine();

    System.out.println("Username is: " + userName);  // Output user input
    System.out.println("rollmo is: " + rollno);  // Output user input
  }
}