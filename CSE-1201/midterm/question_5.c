// write a program where you can do use while loop

// input long number and find sum of these numbers

#include <stdio.h>

int main(){
  int number;
  int sum;
  printf("Enter 5 digit number: ");
  scanf("%d", &number);

  do {
    sum = sum + (number % 10);
    number = number / 10;
  } while (number > 0);

  printf("Sum is: %d",sum);
}
