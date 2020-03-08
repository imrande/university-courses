/*
“Class is a logical construct and an object has physical reality” – explain the
statement with example.
*/

A class defines the general characteristics and behaviour of an object. Therefore, an object
is an instanc of a class.. Conside the following example ==>

class Box{
  int height, width;

  Box(int h, int w){
    height = h;
    width = w;
  }
}

class Main{
  public static void main(String[] args) {
    Box b1 = new Box(2, 3);
    Box b2 = new Box(3, 5);
  }
}

In the above example, the class Box is defines the characteristics of boxes and objects
b1 and b2 are two specefic instanc of that class, which have physcial realities
