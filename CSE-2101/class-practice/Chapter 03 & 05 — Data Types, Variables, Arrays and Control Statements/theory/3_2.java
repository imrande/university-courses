/*
How a block is defined in Java? Discuss with suitable example the scope and
lifetime of a variable with respect to block.
OR, What do you understand by scope and lifetime of a variable? Explain with
examples.
*/

In java, a block is defined using the curly braces - {}
Scope of variable ==>
The scope of a variable determines to which extent that variable can be used in program.
Lifetime of variable ==>
The lifetime of a variable decideds how long the storage for that variable exists in memory


public class Main{
  public static void main(String[] args){
    int valueOfX = 5; // lifetime variable

    if (valueOfX == 5){
      int valueOfY = 20; // scope variable
      System.out.println("X and Y: " + valueOfX + " " + valueOfY); // 5 20
      valueOfX = valueOfY * 2; // 40
    }
    System.out.println(valueOfX);
    // System.out.println(valueOfY); Error, unknown variable
  }
}
