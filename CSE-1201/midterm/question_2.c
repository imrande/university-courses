// Do necessary corrections of the following program to achieve the result?

// a) [ x = 33, y = 1]

#include <stdio.h>

int main(){
  int x = 23, y = 11, z = 0;

  do {
    if (x && y){
      x++;
      y--;
    } else {
      x--;
      y++;
      z++;
    }
  } while (z <= 3);
  printf("x=%d \ny=%d", x,y);
}


// b) [output empty]

#include <stdio.h>

void main(){
  float x = 5.5;
  char y = 'B';
  int z = 10, i;

  for (i = 2; i<=10; i++){
    if (x == y){
      printf("%f %c %d", x,y,z);
    }
  }
}
