// Check whether year is leap year or not

package assignment4;
import java.util.*;

public class Assignment4 {
  public static void main(String[] args) {
      System.out.print("Enter the year for check: ");
      Scanner inputYear = new Scanner(System.in);
      int year = inputYear.nextInt();

      if ((year % 4 == 0) && (year % 100 != 0)){
        System.out.println(year + " is leap year");
      }else if (year % 100 == 0 && year % 400 == 0){
        System.out.println(year + " is leap year");
      }else {
        System.out.println(year + " is not leap year");
      }
  }
}

/*
Answer ==>
Enter the year for check: 2020
2020 is leap year

Enter the year for check: 1900
1900 is not leap year

Enter the year for check: 2000
2000 is leap year
*/
