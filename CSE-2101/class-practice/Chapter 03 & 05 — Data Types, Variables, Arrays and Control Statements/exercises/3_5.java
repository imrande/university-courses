// Identify errors in the following program and state the reason.

private class demo {
  public void main(String[] args) {
    int x = 10;
    byte b;
    if (x) {
      byte y = b * 3;
      float f = 3.567;
      System.out.println(x + " " + y);
      b = f;
    }
    System.out.println(x + " " + y);
  }
}


/*
Answer ==>
Line 3 ==> class can't have private access specifier
Line 7 ==> required boolean expression, found int
Line 8 ==> b is not initialized
Line 9 ==>  required float, found double
Line 10 ==> found float, required double
Line 13 ==> Y is out of scope
*/
