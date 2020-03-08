// Write a program where you can use two sub-functions. Both functions may not return value with non parameters

#include <stdio.h>

void upper_to_lower();
void lower_to_upper();

int main() {
  upper_to_lower();
  lower_to_upper();
  return 0;
}

// convert upper character to lower character [A → a]
void upper_to_lower(){
  char upper;
  printf("Enter a upper character: ");
  scanf("%c", &upper);

  char lower = upper + 32;
  printf("Upper character %c is lower %c\n",upper,lower); 
}

// convert lower character to upper character [a → A]
void lower_to_upper(){
  char lower;
  printf("Enter a lower character: ");
  scanf(" %c", &lower);

  char upper = lower - 32;
  printf("Lower character %c is upper %c\n",lower,upper);
}