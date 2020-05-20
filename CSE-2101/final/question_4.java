// How to create a user-defined exception? Explain with example

1. Create a class named after your exception, extending the Exception class.
	a. In the class, declare a String field and a constructor taking a String variable
	as a parameter.
	b. Override the toString() method in that class.
2. Declare a parameterized method where you will check for the occurrence of your
exception, and if it occurs, you will throw an object of your exception type. The
method must include the throws keyword.
3. Now, in the main method, in a try block, call the method declared on step 2,
passing it the argument which is to be checked for exception. In the catch block,
catch that exception.

Example:

import java.util.Scanner;

class NegativeNumberException extends Exception {
	String a;
	
	NegativeNumberException(String x){
		a = x;
	}
	
	public String toString(){
		return "Error! Negative number found " + a;
	}
}

public class UserDefinedException {
	static int check(int x) throws NegativeNumberException{
		if (x < 0){
			throw new NegativeNumberException(Integer.toString(x);
		} else {
			return x;
		}
	}
	
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int sum = 0;
		
		try {
			while (in.hasNextInt()){
				sum += check(in.nextInt());
			}
		} catch (NegativeNumberException e) {
			System.out.println(e);
		}
		
		System.out.println(sum);
	}
}