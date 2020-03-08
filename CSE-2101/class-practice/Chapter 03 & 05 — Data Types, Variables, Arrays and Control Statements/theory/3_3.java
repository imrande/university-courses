/*
What are the differences between type conversion and casting? What is automatic
type promotion?
*/

Automatic conversion between compatible types is called type conversion.
Manual conversion between incompatible types is called type casting.

Automatic type promotion ==>
while evaluating expressions in java automatically promotes all byte, short, char values to
int and in case of the float or double, they are promoted float or double respectively. This is
called automatic type promotion

public class Type{
  public static void main(String[] args){
    byte x = 10; // type conversion
    int y = x; // value of y is int

    float a = 5.5; // casting
    int b = (int)a; // value of b is int 5
  }
}
