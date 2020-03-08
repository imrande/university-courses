import java.util.*;

class LinearArray {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);

    int[] array = new int[5];
    // input.close();

    // take array values from keyboard
    System.out.print("Enter numbers for array: ");
    for (int i = 0; i < 5; i++){
      array[i] = input.nextInt();
    }

    // print the array
    for (int i = 0; i < 5; i++){
      System.out.println(array[i] + " ");
    }

    System.out.print("Enter the value for searching: ");
    int value = input.nextInt();
    input.close();

    int pos = -1; // position
    for (int i = 0; i < 5; i++){
      if (value == array[i]){
        pos = i;
        System.out.println(value + " found at position " + pos);
        break;
      }

      if (true){
        System.out.println(value + " not found");
        break;
      }
    }
  }
}