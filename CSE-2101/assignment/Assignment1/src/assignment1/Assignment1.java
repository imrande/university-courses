// Calculate the area of Circle, Triangle and Rectangle

package assignment1;
import java.util.Scanner;
/**
 *
 * @author Students
 */

public class Assignment1 {

  /**
   * @param args the command line arguments
   */
  public static void main(String[] args) {
  Scanner input = new Scanner(System.in);
	int height, base;
	System.out.print("Enter the base for Triangle: ");
	base = input.nextInt();
	System.out.print("Enter the height for Triangle: ");
	height = input.nextInt();
	System.out.println("The area of Triangle is " + areaOfTriangle(base, height) + "cm");

	System.out.println();
	System.out.print("Enter the radius for Circle: ");
	int radius = input.nextInt();
	System.out.println("The area of Triangle is " + areaOfCircle(radius) + "m");

	System.out.println();
	System.out.print("Enter the width for Rectangle: ");
	int width = input.nextInt();
	System.out.print("Enter the height for Triangle: ");
	int length = input.nextInt();
	System.out.println("The area of Triangle is " + areaOfRectangle(width, length) + "m");
  }

// Area of Triangle [a = 0.5 * h * b]
  public static int areaOfTriangle(int base, int height){
	int resultOfArea = (int)(0.5 * base * height);
	return resultOfArea;
  }

// Area of Circle [a = PI * r^2]
  public static int areaOfCircle(int radius){
	int resultOfArea = (int)(3.14159 * (radius * radius));
	return resultOfArea;
  }

// Area of Rectangle [a = l * w]
  public static int areaOfRectangle(int width, int length){
	int resultOfArea = (int)(width * length);
	return resultOfArea;
  }
}

/*
Answer ==>
Enter the base for Triangle: 12
Enter the height for Triangle: 20
The area of Triangle is 120cm

Enter the radius for Circle: 5
The area of Triangle is 78m

Enter the width for Rectangle: 8
Enter the height for Triangle: 3
The area of Triangle is 24m
*/
