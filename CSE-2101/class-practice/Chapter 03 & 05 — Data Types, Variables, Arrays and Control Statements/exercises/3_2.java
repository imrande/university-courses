/*
Write a program in Java that will print the following output on the screen?
0 0 0 0 0
0 0 1 2 3
0 1 3 5 7
0 2 5 8 11
*/

public class Main{
  public static void main(String[] args){

    int[][] valuesOfMultiArray = {
      {0, 0, 0, 0, 0},
      {0, 0, 1, 2, 3},
      {0, 1, 3, 5, 7},
      {0, 2, 5, 8, 11}
    };

    for (int i = 0; i < valuesOfMultiArray.length; i++){
      for(int j = 0; j < valuesOfMultiArray[i].length; j++){
        System.out.print(valuesOfMultiArray[i][j] + " ");
      }
      System.out.println();
    }
  }
}
