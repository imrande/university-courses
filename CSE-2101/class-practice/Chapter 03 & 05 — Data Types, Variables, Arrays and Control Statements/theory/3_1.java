// What do you mean by dynamic initialization of a variable in Java? Give an example.

A variable can be initialized dynamically using any valid expression at the time
variable is declared. It is called dynamic initialization of a variable in java

public class Main {
  public static void main(String[] args){
    int number_1 = 5;
    int number_2 = 6;
    int result = number_1 + number_2; // dynamically initialized
    System.out.println(result);
  }
}
