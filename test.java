import java.util.Scanner;

public class test {
    public static void main(String[] args) {

        int limit = 3;
        int i;
        int mypin = 1214;
        int pincode;

        for (i = 1; i <= limit; i++) {
            System.out.println("Enter a Pin Code of your debit card:");
             if (i == 3) 
            {
                System.out.println("Last attempt..");
            } 

            Scanner inputpincode = new Scanner(System.in);

             pincode = inputpincode.nextInt();

            System.out.println("You entered a pin: " + pincode);

            if (pincode == mypin) 
            {
                System.out.println("Your Pincode is Correct.");

                System.out.println("You can withdraw a amount.");
                break;
            }
            else if (i == 3 && pincode != mypin)
            {
              System.out.println("Pincode is Incorrect..");  
              System.out.println("Your debit card has been blocked.\n");
            }
         
            else 
            {
                System.out.println("Pincode is Incorrect.\n");

                System.out.println("Try again...\n");
                
            }

        }

    }
}
