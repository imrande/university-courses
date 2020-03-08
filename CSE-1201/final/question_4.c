/*
	Write a program where you can use 2 sub functions.Between those function,
	one function may return value with parametrized other is non-parametrized with 
	return value...
*/

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