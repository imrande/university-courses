// print the output of the following code?

// a)
#include <stdio.h>

int main(){
  int i, j, k;
  for (i = 0; i <= 10; i++){
    if (i <= 3){
      printf("Student of 54 Batch\n");
   }
  }
  printf("\nExam Time");
}

/*
  answer = [
    Student of 54 Batch
    Student of 54 Batch
    Student of 54 Batch
    Student of 54 Batch

    Exam Time
  ]
*/

// b)

#include <stdio.h>

int main(){
  int x = 20;
  int y = 11;
  int z = 0;

  x += 3;
  y = y - 2;
  z = (x++)+x+(++y)+y;

  printf("%d\n%d\n%d\n", x, y, z);
}

/*
  answer = [
    x = 24
    y = 10
    z = 67
  ]
*/
