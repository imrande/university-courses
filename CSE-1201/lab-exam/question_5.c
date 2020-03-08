// Write a program where you can use two subfunctions. One function may return value other is not...

#include <stdio.h>

int factorial_number();
void natural_number();

int main(){
    printf("Sum of array_items are %d\n",factorial_number());
    natural_number();
}

int factorial_number(){
    int array_items[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 1;
    int array_length = sizeof(array_items)/sizeof(int);

    for(int i = 1; i < array_length; i++){
        sum *=  array_items[i];
    }
    return sum;
}

// [1,2,3,4,5,6,7,8,9...]
void natural_number(){
    int i;
    printf("Natural Numbers are →\n");
    for(i = 10; i > 0; i--){
      printf("%d\n",i);
  }
}
