import java.util.Scanner;

public class PalindromeIgnoreNonAlphanumeric {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    System.out.print("Enter a string: ");
    String s = input.nextLine();
    System.out.println("Ignoring non-alphanumeric characters, is "
      + s + " a palindrome? " + isPalindrome(s));
  }

  // Return true if a string is a palindrome 
  public static boolean isPalindrome(String s) {
    // Create a new string be eliminating non-alphanumeric chars
    String s1 = filter(s);

    // Create a new string that is the reversal of s1
    String s2 = reverse(s1);

    // Compare is the reversal is the same as the original string
    return s2.equals(s1);
  }

  // Create a new string be eliminating non-alphanumeric chars 
  public static String filter(String s) {
    // Create a string buffer
    StringBuffer strBuf = new StringBuffer();

    // Examine each char in the string to skip alphanumeric char
    for (int i=0; i<s.length(); i++) {
      if (isAlphanumeric(s.charAt(i))) {
        strBuf.append(s.charAt(i));
      }
    }

    // Return a new filtered string
    return strBuf.toString();
  }

  // Return true if a string is alphanumeric
  public static boolean isAlphanumeric(char c) {
    return (('a' <= c) && (c <= 'z')) ||
           (('A' <= c) && (c <= 'Z')) ||
           (('0' <= c) && (c <= '9'));
  }

  // Create a new string by reversing a specified string
  public static String reverse(String s) {
    StringBuffer s1 = new StringBuffer(s);
    s1.reverse(); // Use the reverse method for StringBuffer object
    return s1.toString();
  }
}