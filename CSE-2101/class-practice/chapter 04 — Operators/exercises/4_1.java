/*
Write a single Java statement to find the largest value of three integer variables a, b
and c.

Answer ==>
  int maxValue = (a > b) ? ((a > c)? a : c) : ((b > c)? b: c);
*/

class Main {
  public static void main(String[] args) {
    int a = 50;
    int b = 80;
    int c = 30;
    int maxValue = (a > b) ? ((a > c)? a : c) : ((b > c)? b: c);
    System.out.println(maxValue);
  }
}
