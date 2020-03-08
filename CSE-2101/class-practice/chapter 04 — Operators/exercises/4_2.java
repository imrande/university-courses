/*
Write a single Java statement to find the smallest value of three integer variables a,
b and c.

Answer ==>
int minValue = (a < b) ? ((a < c)? a : c) : ((b < c)? b: c);
*/

class Main {
  public static void main(String[] args) {
    int a = 5;
    int b = 4;
    int c = 30;
    int maxValue = (a < b) ? ((a < c)? a : c) : ((b < c)? b: c);
    System.out.println(maxValue);
  }
}
