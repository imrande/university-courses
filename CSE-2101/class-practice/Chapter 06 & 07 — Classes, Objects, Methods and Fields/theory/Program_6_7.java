/*
Is it possible to declare a class using only variables or using only methods? Justify
your answer
*/

// yes, it is possible to delcare a class using only one variables or methods

class Calculate{
  int number_1 = 20;
  int number_2 = 40;
}

class printValues{
  void Hi(){
    System.out.println("Hello, WOrld!");
  }
}

public class Program_6_7{
  public static void main(String[] args){
    Calculate cal = new Calculate();
    System.out.println(cal.number_1); // 20

    printValues print = new printValues();
    print.Hi(); // Hello, WOrld
  }
}
