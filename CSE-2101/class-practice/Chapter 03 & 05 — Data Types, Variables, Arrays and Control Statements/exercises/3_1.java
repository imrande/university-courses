// Identify errors in the following program, correct them and write the output.

class Test{
  public static void main(String[] args) {
    byte a = 100;
    short b = (short)( a * 3); // 300 ==> type casting
    long l = 2000;
    float k = 284.24f; // by default floating value is double we need to postfix f at the end
    byte c = (byte)k; // 28
    int m = a;
    double d = b; // 300.0
    System.out.println(b);
    System.out.println(c);
    System.out.println(d);
  }
}
