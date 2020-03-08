// Write a program where you can use pointer...

#include <stdio.h>

int main(){
  int x,y;
  printf("Enter 1st number: ");
  scanf("%d", &x);
  printf("Enter 2nd number: ");
  scanf("%d", &y);
  int *a = &x;
  int *b = &y;
  int c = *a + *b;
  printf("Sum of %d and %d is %d",*a,*b,c);
}