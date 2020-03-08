// Conversion of Tempature (Celsius to Fahrenheit or Fahrenheit to Celsius)

package assignment2;
import java.util.Scanner;

public class Assignment2 {
  public static void main(String[] args) {
	Scanner input = new Scanner(System.in);
	System.out.print("Enter Fahrenheit to Convert Celsius: ");
	int fahrenheit = input.nextInt();
	System.out.println("The Celsius is " + fahToCelsius(fahrenheit) + "°C");

	System.out.print("Enter Celsius to Convert Fahrenheit: ");
	int celsius = input.nextInt();
	System.out.println("The Fahrenheit is " + celToFahrenheit(celsius) + "°F");
  }

  // Celsius to Fahrenheit [T(°F) = T(°C) × 1.8 + 32]
  public static int celToFahrenheit(int celsius){
	int fahrenheit = (int)(celsius * 1.8 + 32);
	return fahrenheit;
  }

  // Fahrenheit to Celsius [T(°C) = (T(°F) - 32) / 1.8]
  public static int fahToCelsius(int fahrenheit){
	int celsius = (int)((fahrenheit - 32) / 1.8);
	return celsius;
  }
}

/*
Answer ==>
Enter Fahrenheit to Convert Celsius: 85
The Celsius is 29°C
Enter Celsius to Convert Fahrenheit: 28
The Fahrenheit is 82°F
*/
