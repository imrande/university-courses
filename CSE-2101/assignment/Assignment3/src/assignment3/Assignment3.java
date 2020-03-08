// check number is prime number or not
// If number is divisible by 1 and itself only then its prime number

package assignment3;
import java.util.*;

public class Assignment3 {
  /**
   * @param args the command line arguments
   */
  public static void main(String[] args) {
    System.out.print("Enter number for check: ");
    Scanner numberInput = new Scanner(System.in);
    int number = numberInput.nextInt();

    int count = 0;
    for(int i = 1; i <= number; i++){
      if (number % i == 0){
        count++;
      }
    }

    if (count == 2){
      System.out.println(number +" is prime number");
    } else {
      System.out.println(number +" is not prime number");
    }
  }
}

/*
Answer ==>
Enter number for check: 7
7 is prime number

Enter number for check: 8
8 is not prime number
*/
