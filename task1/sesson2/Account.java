package sesson2;

import java.util.Scanner;

public class Account {
    public static void main(String[] args) {
        //Declaring and and initalizing the variables
        double accountbalance = 10000.00;
        double withdraw = 0.00;
        boolean possible = false;
        String cusname;

        // Accepting user input and storing it in variable
        System.out.printf("Available account balance: $%.2f \n" , accountbalance);
        System.out.println("Enter the Amount to withdraw: $");
        Scanner scan = new Scanner(System.in);
        withdraw = scan.nextDouble();
        withdraw= Double.parseDouble(scan.nextLine());
        System.out.println("Enter the Customer Name: ");
        cusname = scan.nextLine();
    }
}
