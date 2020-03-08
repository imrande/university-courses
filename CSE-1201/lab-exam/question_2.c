//Write a program where you can use two subfunctions. one function may not return value with non parameters but other is return value with parameters...

#include <stdio.h>

int ascii_to_number(char c);
void number_to_ascii();

int main(){
  printf("Number is %d\n",ascii_to_number('c'));
  number_to_ascii();
  return 0;
}

// convert ASCII character to number [C → 67]
int ascii_to_number(char c){
  printf("Enter ASCII character: ");
  scanf("%c", &c);

  return c;
}

// convert number to ASCII character [66 → B]
void number_to_ascii(){
  int number;
  printf("Enter number: ");
  scanf("%d", &number);

  printf("ASCII Character is %c\n",number);
}