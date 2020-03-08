// Figure out the output of the following program code and explain your answer.

class E4_2 {
  public static void main(String[] args) {
    byte a = 112, b;
    int c = 8, d = 3;
    int i ;
    c %= d; d ^= c;
    b = (byte) (a << 2);
    System.out.println("a " + a);
    System.out.println("i " + i);
    System.out.println("b " + b);
    System.out.println("c " + c);
    System.out.println("d " + d);
  }
}

/*
Explanation ==>
1) Value of variable a is unchanged. So 112 will assign as its Value.
2) Value of variable i is not initialized. So It won't compile.
3) In this statement [c %= d], the result is 2. Which will assign as a value of c
4) In this statement [d ^= c], the result is 1. Which will assign as a value of d
5) In this statement [b = (byte) (a << 2)], the result will be 2 bit left shifting type of int.
when it will cast in type byte, the result will 1 which will assign to b. In that case
MSB vale is 1, so value of b will be negative -64
*/
