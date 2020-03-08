/*
Write down the output of the following sequence of code:

Answer ==>
5555X
555XX
55XXX
5XXXX
5555X
555XX
55XXX
5XXXX
*/

public class Test{
  public static void main(String[] args){
    for (int I = 0; I < 8; I++){
      for(int J = 4 - (I % 4); J > 0; J--){
        System.out.print("");
      }
      for(int J = 0; J < (I % 4) + 1; J++){
        System.out.print("X");
      }
      System.out.println();
    }
  }
}
