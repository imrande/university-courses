// write a program where you can use Condition flow inside the loop

#include <stdio.h>

int main(){
  int a, b;
  scanf("%d %d", &a, &b);

  char* numbers[] = {
    "one","two","three","four","five","six","seven",
    "eight","nine"
  };

  char* odd__even[] = {"odd","even"};

  for (int i = a; i <= b; i++){
    if (i <= 9){
      printf("%s\n", numbers[i-1]);
    } else {
      if (i % 2 == 0){
        printf("%s\n",odd__even[1]);
      } else {
        printf("%s\n",odd__even[0]);
      }
    }
  }
  return 0;
}
