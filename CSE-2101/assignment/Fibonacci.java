import java.util.ArrayList;

class Fibonacci {
  public static void main(String[] args) {
    int a = 0;
    int b = 1;
    int number = 10;
    
    ArrayList<Integer> myArrayList = new ArrayList<>();
    for (int i = 0; i < number +1; i++){
      myArrayList.add(a);
      int temp = a; // 0
      a = b; // 1
      b = temp + b;
    }
    System.out.print(myArrayList); // will print sequence of fibonacci till number
    System.out.println();
  }
}