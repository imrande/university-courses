import java.util.*;

class Factorial { // class name and file name should be same otherwise java thrown error
  public static void main(String[] args) {
    Scanner num = new Scanner(System.in);

    System.out.print("Enter number: ");
    int number = num.nextInt();
    num.close(); // closed the Scanner
    int factorial = 1;

    for (int i = 1; i < number +1; i++){
      factorial = factorial * i;
    }
    System.out.println("The factorial is " + factorial);
  }
}